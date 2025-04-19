@class NSPopoverTouchBarItem, EKEvent, NSStackView, NSButton;
@protocol CalUICalendarPickerTouchBarItemControllerDelegate;

@interface CalUICalendarPickerTouchBarItemController : NSObject

@property (weak) id<CalUICalendarPickerTouchBarItemControllerDelegate> delegate;
@property (retain) NSPopoverTouchBarItem *touchBarItem;
@property (retain) NSStackView *calendarPickerView;
@property (retain) NSButton *selectedCalendarButton;
@property (retain, nonatomic) EKEvent *event;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)_buttonForCalendar:(id)a0;
- (id)_colorSwatchForCalendar:(id)a0;
- (void)_updateToSelectedCalendarButton:(id)a0;
- (void)calendarPickerButtonSelected:(id)a0;
- (id)createCalendarPickerTouchBarItem;

@end
