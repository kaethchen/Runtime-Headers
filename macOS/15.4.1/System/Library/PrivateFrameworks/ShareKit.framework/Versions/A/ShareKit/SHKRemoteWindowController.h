@class NSString, SHKDimAndShadowWindow, SHKRemoteViewController, SHKMarzipanRemoteViewController, SHKBlurWindow, SHKSharingService, NSWindow;

@interface SHKRemoteWindowController : NSWindowController <NSWindowDelegate, SHKHostWindowDelegate>

@property (retain) SHKDimAndShadowWindow *dimAndShadowWindow;
@property (retain) SHKBlurWindow *blurWindow;
@property (weak) SHKRemoteViewController *remoteViewController;
@property (weak) SHKMarzipanRemoteViewController *marzipanRemoteViewController;
@property BOOL disableServiceWindowPresentation;
@property BOOL noSourceWindow;
@property (weak) SHKSharingService *service;
@property (retain) NSWindow *hostWindow;
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
- (id)initWithRemoteWindow:(id)a0 hostWindow:(id)a1 remoteViewController:(id)a2 marzipanRemoteViewController:(id)a3 noSourceWindow:(BOOL)a4 disableServiceWindowPresentation:(BOOL)a5 service:(id)a6;
- (void)requestClientWindowFrameWithCompletionBlock:(id /* block */)a0;
- (void)setAnimatesDimAndBlur:(BOOL)a0;
- (void)setHostWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withClientWindowSync:(BOOL)a1 blurAndShadowSync:(BOOL)a2;
- (void)showRemoteWindow;
- (void)startInstantTransitionInWithServiceScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dimmingScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)startInstantTransitionOut;
- (void)startMarkupTransitionInWithServiceScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initialLayerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 dimmingScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)startMarkupTransitionOut;
- (void)startSharingTransitionInWithServiceScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initialLayerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 dimmingScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 delay:(double)a3 duration:(double)a4 currentMediaTime:(double)a5;
- (void)startSharingTransitionOutWithSuccess:(BOOL)a0 duration:(double)a1;
- (void)viewControllerWantsToChangeViewToSize:(struct CGSize { double x0; double x1; })a0 containerViewScreenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 currentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 transactionUUID:(id)a3;

@end
