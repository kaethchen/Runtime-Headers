@interface WindowManager.AdminXPCListener : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ xpcListener;
    void /* unknown type, empty encoding */ connections;
    void /* unknown type, empty encoding */ connectionsToReceivePickingDelegateCallbacks;
    void /* unknown type, empty encoding */ connectionsToReceiveWindowPickingSessionDelegateCallbacks;
    void /* unknown type, empty encoding */ connectionsToReceiveDraggableOverlaySessionDelegateCallbacks;
    void /* unknown type, empty encoding */ connectionsToReceiveDesktopPeekCallbacks;
    void /* unknown type, empty encoding */ connectionsToReceiveHideWindowAssertionCallbacks;
    void /* unknown type, empty encoding */ connectionsToReceiveExposeCallbacks;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
