@class NSString, NSTimer, NSTrackingArea, QLControlTooltip;
@protocol QLControl;

@interface QLControlCommon : NSObject {
    NSTrackingArea *_trackingArea;
    QLControlTooltip *_tooltipWindow;
    id /* block */ _menuProvider;
    NSTimer *_menuTimer;
    BOOL _canShowMenu;
    BOOL _trackingButton;
}

@property (readonly, weak) id<QLControl> qlcontrol;
@property (copy, nonatomic) NSString *controlIdentifier;
@property (copy) id /* block */ menuProvider;

- (void)dealloc;
- (void).cxx_destruct;
- (void)rightMouseDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)sizeToFit;
- (void)tearDown;
- (void)updateTooltip;
- (void)updateTitle;
- (BOOL)imageButton;
- (void)setupTrackingArea;
- (void)_showButtonMenuFromTimer:(id)a0;
- (void)_showButtonMenuWithEvent:(id)a0;
- (void)_showTooltipWithText:(id)a0;
- (void)closeTooltip;
- (id)initWithQLControl:(id)a0;
- (id)processImage:(id)a0;
- (void)tearDownTrackingArea;

@end
