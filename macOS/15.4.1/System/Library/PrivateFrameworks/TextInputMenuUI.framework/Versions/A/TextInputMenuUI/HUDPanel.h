@class NSTimer;

@interface HUDPanel : NSPanel

@property (retain, nonatomic) NSTimer *orderOutWatchdogTimer;
@property BOOL isEventCaptureOurs;
@property BOOL ignoreNextFlagChangedEvent;
@property (nonatomic) struct CGPoint { double x; double y; } globalMousePositionOnOpeningPanel;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resignKeyWindow;
- (void)_updateBackground;
- (BOOL)canBecomeKeyWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)orderFront:(id)a0;
- (void)orderOut:(id)a0;
- (void)windowDidResize:(id)a0;
- (void)changeSelection;
- (id)_backgroundColorPatternImage;
- (void)orderOutImmediately:(id)a0;
- (void)resetOrderOutWatchdogTimer;
- (void)showInputsPanel:(unsigned long long)a0;

@end
