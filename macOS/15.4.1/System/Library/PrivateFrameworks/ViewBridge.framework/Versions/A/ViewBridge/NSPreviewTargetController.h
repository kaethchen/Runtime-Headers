@class NSString, NSArray, VBXPCConnectionFenced, NSXPCInterface, CAContext, NSPreviewTargetWindow, NSObject;
@protocol NSSecureCoding, NSObject;

@interface NSPreviewTargetController : NSResponder <NSVBXPCConnectionClient, NSPreviewInterfaces> {
    id<NSObject> _observerOfWindowWillStartLiveResizeNotification;
    id<NSObject> _observerOfWindowDidEndLiveResizeNotification;
    unsigned char _allowFrameRequests : 1;
    unsigned char _didOrderWindowIn : 1;
    unsigned char _hostWantsKeyboardFocus : 1;
    unsigned char _invalid : 1;
    unsigned char _targetFinishedBootstrap : 1;
    unsigned char _willReportMinMaxFrameSizes : 1;
    unsigned char _windowIgnoredMouseEventsAtBootstrap : 1;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
    struct { struct CGSize { double width; double height; } min; struct CGSize { double width; double height; } max; } _mostRecentlyReportedMinMaxFrameSizes;
}

@property (class, retain) NSArray *commandEquivalentsToWithholdFromHost;
@property (class, readonly) NSXPCInterface *hostControllerInterface;
@property (class, readonly) NSXPCInterface *targetControllerInterface;

@property (readonly) unsigned int settingHostAppActiveness;
@property (readonly) BOOL targetFinishedBootstrap;
@property (readonly) BOOL didCompleteBootstrap;
@property (retain) NSPreviewTargetWindow *window;
@property (retain) NSObject<NSSecureCoding> *hostAppClientParameters;
@property (readonly) BOOL allowFrameRequests;
@property unsigned int hostViewFrameInScreenCoordsDidChangeInProgress;
@property unsigned int resizeRequestReplyInProgress;
@property (retain) id hostControllerProxy;
@property (weak) VBXPCConnectionFenced *hostAppConnection;
@property long long desiredWindowLevel;
@property struct { unsigned char keyness; unsigned char mainness; } desiredWindowState;
@property (readonly) unsigned int keyboardFocusTheft;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hostViewFrame;
@property (readonly) struct { unsigned int x0[8]; } hostAppAuditToken;
@property (readonly) CAContext *fenceContext;
@property (readonly) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
+ (id)_nsxpcListenerEndpoint;
+ (BOOL)_windowMayOrder:(id)a0;
+ (BOOL)allowInstantiationOnBehalfOf:(struct { unsigned int x0[8]; })a0;
+ (void)bootstrap:(struct { long long x0; struct { unsigned char x0; unsigned char x1; } x1; long long x2; id x3; id x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; BOOL x6; BOOL x7; BOOL x8; })a0 hostControllerProxy:(id)a1 reply:(id /* block */)a2;
+ (id)nsxpcInterface;
+ (void)preflight:(id)a0 reply:(id /* block */)a1;
+ (Class)targetControllerClassForName:(id)a0;
+ (Class)windowClass;
+ (id)windowWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;

- (oneway void)release;
- (void)dealloc;
- (id)retain;
- (void).cxx_destruct;
- (void)invalidate;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (id)exportedObject;
- (void)_removeFromResponderChain;
- (void)_realizeRequestedStateOfWindow:(id)a0;
- (void)__vbSuperRelease;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)_connectionInvalidated;
- (id)_invalidateDueToExceptionDuringIncomingIPC:(id)a0;
- (void)_maintainLevelOfWindow:(id)a0;
- (void)_realizeRequestedWindow:(id)a0 stateWithIdentifier:(long long)a1;
- (void)guaranteeSignal:(id)a0 after:(id /* block */)a1;
- (void)hostAppConnection:(id)a0;
- (void)hostAppIsActive:(BOOL)a0;
- (id)hostControllerProxyWithErrorHandler:(id /* block */)a0;
- (void)hostDidCompleteBootstrap;
- (void)hostReleasedKeyboardFocusThefts:(id)a0;
- (void)hostViewFrameInScreenCoordsDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hostWantsKeyboardFocus:(BOOL)a0;
- (void)hostWindowEvent:(unsigned long long)a0;
- (void)hostWindowEventMouse:(unsigned long long)a0;
- (void)hostWindowLevelDidChange:(long long)a0;
- (void)requestWindowState:(struct { unsigned char x0; unsigned char x1; })a0 identifier:(long long)a1;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;
- (void)targetDidCompleteBootstrap;

@end
