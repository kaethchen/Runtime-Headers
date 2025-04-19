@class RPDimAndShadowWindow, RPBlurWindow, NSWindow, NSString, NSRemoteViewController;

@interface RPRemoteWindowController : NSWindowController <NSWindowDelegate>

@property (retain) RPDimAndShadowWindow *dimAndShadowWindow;
@property (retain) RPBlurWindow *blurWindow;
@property (weak) NSRemoteViewController *remoteViewController;
@property BOOL disableServiceWindowPresentation;
@property BOOL noSourceWindow;
@property (retain) NSWindow *clientWindow;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dimFrame;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } blurFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)windowDidBecomeKey:(id)a0;
- (void)windowDidBecomeMain:(id)a0;
- (void)windowDidResignKey:(id)a0;
- (void)windowDidResignMain:(id)a0;
- (void)clientWindowBecameKey;
- (void)clientWindowBecameMain;
- (void)requestClientWindowFrameWithCompletionBlock:(id /* block */)a0;
- (void)setAnimatesDimAndBlur:(BOOL)a0;
- (void)setHostWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withClientWindowSync:(BOOL)a1 blurAndShadowSync:(BOOL)a2;
- (void)startInstantTransitionInWithServiceScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dimmingScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)startInstantTransitionOut;
- (void)startMarkupTransitionInWithServiceScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initialLayerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 dimmingScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)startSharingTransitionInWithServiceScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initialLayerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 dimmingScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 delay:(double)a3 duration:(double)a4 currentMediaTime:(double)a5;
- (void)startSharingTransitionOutWithSuccess:(BOOL)a0 duration:(double)a1;
- (id)initWithWindow:(id)a0 clientWindow:(id)a1 remoteViewController:(id)a2;
- (void)readyToShowWindow;
- (void)startMarkupTransitionOut:(id /* block */)a0;

@end
