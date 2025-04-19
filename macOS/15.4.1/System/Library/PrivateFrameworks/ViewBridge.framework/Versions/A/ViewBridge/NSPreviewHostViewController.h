@class VBXPCConnectionFenced, NSString, NSTrackingArea, CAContext;
@protocol NSPreviewHostViewControllerDelegate;

@interface NSPreviewHostViewController : NSViewController <NSVBXPCConnectionClient, NSPreviewHostViewControllerProtocol> {
    unsigned char _observingActiveness : 1;
    unsigned char _targetDidBootstrap : 1;
    unsigned int _targetSizeRequestsInProgress;
    unsigned int _mostRecentKeyboardFocusTheftID;
    unsigned int _windowObserving;
    long long _targetWindowStateRequestIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
    id _localEventMonitor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _mostRecentlySentViewFrameInScreenCoords;
    unsigned char _invalidationProgress;
    unsigned char _invalidationKind;
    NSTrackingArea *_trackingArea;
}

@property (retain) id targetControllerProxy;
@property (weak) VBXPCConnectionFenced *connection;
@property (retain) id exportedObject;
@property (weak) id<NSPreviewHostViewControllerDelegate> delegate;
@property (nonatomic) BOOL wantsKeyboardFocus;
@property (readonly) CAContext *fenceContext;
@property (readonly) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)forgetKeyboardFocusTheft:(unsigned int)a0;
+ (struct __LSASN { } *)launchTargetApp:(id)a0 options:(id)a1 error:(id *)a2;
+ (void)logKeyboardFocusThefts;
+ (id)nsxpcInterface;
+ (void)releaseKeyboardFocusThefts;
+ (void)rememberKeyboardFocusTheft:(unsigned int)a0 perpetratedByApp:(struct { unsigned int x0[8]; })a1;
+ (id)targetAppEnvironmentVariables;
+ (id)targetAppLaunchOptions;

- (oneway void)release;
- (void)dealloc;
- (id)retain;
- (void).cxx_destruct;
- (void)invalidate;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setView:(id)a0;
- (void)loadView;
- (void)setEventMask:(unsigned int)a0;
- (void)windowDidMove:(id)a0;
- (void)setCursor:(id)a0;
- (void)__vbSuperRelease;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (id)_invalidateDueToExceptionDuringIncomingIPC:(id)a0;
- (void)_startLocalEventMonitor;
- (void)decrementLiveResizeOfView:(id)a0;
- (void)handleKeyEquivalent:(id)a0 eventOwner:(unsigned int)a1 reply:(id /* block */)a2;
- (void)incrementLiveResizeOfView:(id)a0;
- (void)keyboardFocusTheftChanged:(unsigned int)a0;
- (void)rememberKeyboardFocusTheft:(unsigned int)a0 perpetratedByApp:(struct { unsigned int x0[8]; })a1;
- (void)requestConnectionToTargetApp:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 reply:(id /* block */)a1;
- (long long)requestTargetWindowState:(struct { unsigned char x0; unsigned char x1; })a0;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;
- (void)setMinMaxFrameSizes:(struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)targetControllerProxyWithErrorHandler:(id /* block */)a0;
- (void)targetInvalidating:(id /* block */)a0;
- (void)targetRequestedWindowStyleMask:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)targetWindowStateChanged:(id)a0;
- (void)view:(id)a0 didMoveToWindow:(id)a1;
- (void)view:(id)a0 willMoveToWindow:(id)a1;
- (void)viewDidRenewGState:(id)a0;

@end
