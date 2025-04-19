@class NSLock, NSTimer, LUIFMMViewController, LUIWindow, LUIMessageViewController, LUIStatusViewController, NSMutableArray, LUILogoViewController, LUIButtonViewController;

@interface LUIWindowController : LUIController {
    NSMutableArray *_windows;
    BOOL _usesDesktopPicture;
    BOOL _desktopPicturesUpdated;
    NSLock *_tearDownLock;
    BOOL _tearDownDone;
    NSTimer *_displayChangeTimer;
}

@property (readonly) LUIWindow *mainWindow;
@property (readonly) LUIButtonViewController *buttonViewController;
@property (readonly) LUIFMMViewController *fmmViewController;
@property (readonly) LUILogoViewController *logoViewController;
@property (readonly) LUIStatusViewController *statusViewController;
@property (readonly) LUIMessageViewController *messageViewController;
@property (readonly) LUIButtonViewController *buttonController;
@property (readonly) LUIFMMViewController *fmmController;
@property (readonly) LUILogoViewController *logoController;
@property (readonly) LUIStatusViewController *statusController;
@property (readonly) LUIMessageViewController *messageController;
@property (copy) id /* block */ windowDidShowBlock;

+ (id)windowControllerWithStyle:(int)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setWindowLevel:(long long)a0;
- (id)initWithStyle:(int)a0;
- (void)setActionHandler:(id /* block */)a0;
- (void)setBackgroundColor:(id)a0;
- (void)setBackgroundImage:(id)a0;
- (void)showWindow;
- (void)orderOutWindows;
- (void)_addControllersToWindow;
- (void)_backgroundPressed:(id)a0;
- (void)_beginDisplayChange;
- (void)_displaysDidChange:(id)a0;
- (void)_endDisplayChange:(id)a0;
- (void)_layoutWindow;
- (void)_setWindowAlphaValues:(double)a0 animate:(BOOL)a1;
- (void)_setWindowFrames;
- (void)_setupControllerWindow;
- (void)_startOrUpdateDisplayReconfigurationTimer:(double)a0;
- (void)_updateDisplayChange;
- (void)_updateDisplayIDs;
- (BOOL)_usesAppKitNotification;
- (id)_viewControllers;
- (void)_windowAlphaValuesTimerReset:(id)a0;
- (id)_windowWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hideWindow;
- (void)setUIEnabled:(BOOL)a0;
- (void)setUsesDesktopPicture:(BOOL)a0;
- (void)tearDownController;
- (id)windowNumbers;

@end
