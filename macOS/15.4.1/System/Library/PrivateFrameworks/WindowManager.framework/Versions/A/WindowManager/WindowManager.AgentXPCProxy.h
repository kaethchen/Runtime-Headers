@interface WindowManager.AgentXPCProxy : NSObject <WindowManager.AgentXPCProxyClientInterface> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ windowPickingDelegate;
    void /* unknown type, empty encoding */ windowPickingSessionDelegate;
    void /* unknown type, empty encoding */ draggableOverlaySessionDelegate;
    void /* unknown type, empty encoding */ desktopPeekMonitorDelegate;
    void /* unknown type, empty encoding */ widgetRevealAssertionDelegate;
    void /* unknown type, empty encoding */ exposeCoordinatorDelegate;
    void /* unknown type, empty encoding */ disconnectObservers;
    void /* unknown type, empty encoding */ serverLaunchNotificationToken;
}

- (id)init;
- (void).cxx_destruct;
- (void)assertionsDidCancelWithIDs:(id)a0;
- (void)desktopPeekMonitorStateDidChange:(id)a0;
- (void)didCancelWindowPickingMode;
- (void)didEndWindowPickingModeWithSelectedWindow:(unsigned int)a0;
- (void)draggableOverlaySessionTargetDidClose:(id)a0;
- (void)exposeModeDidChange:(id)a0;
- (void)windowPickingSessionDidUpdateWithOrderedWindows:(id)a0;

@end
