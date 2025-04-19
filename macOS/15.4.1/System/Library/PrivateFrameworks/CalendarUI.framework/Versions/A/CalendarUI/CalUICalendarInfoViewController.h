@class NSPopover, NSString, NSSet, EKCalendarViewController;
@protocol CalUICalendarInfoViewDelegate;

@interface CalUICalendarInfoViewController : NSViewController <NSPopoverDelegate, EKViewWindowControllerPrivate> {
    NSSet *_shareesBeforeSave;
}

@property (retain) EKCalendarViewController *calendarViewController;
@property (retain) NSPopover *popover;
@property (weak) id<CalUICalendarInfoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logHandle;

- (id)init;
- (void).cxx_destruct;
- (void)setCalendar:(id)a0;
- (id)view;
- (void)popoverDidShow:(id)a0;
- (void)dismissPopover;
- (void)popoverDidClose:(id)a0;
- (BOOL)popoverShouldClose:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)addNewSharees:(id)a0;
- (void)controllerCouldNotSaveWithError:(id)a0;
- (void)didCommitItem;
- (void)dismissPopoverNow;
- (void)showPopoverRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 preferredEdge:(unsigned long long)a2;

@end
