@class NSString, FI_TPopover, NSAppearance, NSArray, FI_TPopoverContentViewController;

@interface FI_TPopoverController : NSObject <NSPopoverDelegate, TMarkTornDown> {
    FI_TPopoverContentViewController *_contentViewController;
    NSArray *_topLevelNibObjects;
    FI_TPopoverController *_selfReference;
}

@property (readonly, nonatomic) FI_TPopover *popover;
@property (readonly, nonatomic) BOOL isShown;
@property (nonatomic) long long behavior;
@property (retain, nonatomic) NSAppearance *appearance;
@property (nonatomic) BOOL releasedWhenClosed;
@property (nonatomic) double width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isTornDown) BOOL tornDown;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addChildViewController:(id)a0;
- (void)addSubview:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)aboutToTearDown;
- (id)initWithWidth:(double)a0;
- (void)closePopover;
- (void)removeChildViewController:(id)a0;
- (void)removeSubview:(id)a0;
- (void)showPopoverRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeView:(id)a1 preferredEdge:(unsigned long long)a2;

@end
