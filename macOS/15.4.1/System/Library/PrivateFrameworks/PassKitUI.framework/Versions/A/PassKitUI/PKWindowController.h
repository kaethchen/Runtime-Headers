@class NSTextField, NSViewController, NSButton, NSWindow;

@interface PKWindowController : NSWindowController {
    NSWindow *_backgroundMaskWindow;
    NSWindow *_passChildWindow;
    BOOL _clientWindowIsResizable;
    BOOL _attachedToParentWindow;
    BOOL _hasFocus;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _serviceWindowFrameBeforeAnimation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _serviceWindowFrameAfterAnimation;
    NSTextField *_titleTextField;
    NSTextField *_moreInfoTextField;
    NSButton *_cancelButton;
    NSButton *_addToPassbookButton;
    double _slideUpYDelta;
}

@property (getter=isActive) BOOL active;
@property (readonly) NSViewController *childViewController;
@property (readonly) NSButton *closeButton;
@property (retain) NSWindow *clientWindow;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } positionRelativeToRect;
@property long long openAnimationStyle;
@property long long closeAnimationStyle;
@property BOOL attachToHostWindow;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)a0;
- (void)windowDidLoad;
- (id)windowTitle;
- (struct CGSize { double x0; double x1; })windowSize;
- (void)performShowAnimation;
- (id)_closeWindowAninationWithStyle:(long long)a0;
- (void)_addChildWindows;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centeredRectWithSize:(struct CGSize { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_hostFrame;
- (void)_removeChildWindows;
- (void)_synchronizeBackgroundWindowFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_windowFrameAfterAnimation;
- (id)_windowShowAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomedOutRectWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })childViewControllerPreferredContentSize;
- (BOOL)clientWindowAvailable;
- (void)clientWindowDidBecomeKey:(id)a0;
- (void)clientWindowDidResize:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clientWindowFrame;
- (void)clientWindowWillClose:(id)a0;
- (void)clientWindowWillMiniaturize:(id)a0;
- (id)createChildViewController;
- (void)endWithAnimationStyle:(long long)a0;
- (void)giveFocusToServiceUIAndNotifyHelper:(BOOL)a0;
- (void)relinquishFocusFromServiceUI;
- (void)updatePassViewControllerFrame;
- (void)updateWindowTitle;

@end
