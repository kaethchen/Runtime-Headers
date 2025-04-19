@interface WindowManager.AdminXPCConnection : NSObject <WindowManager.AgentXPCProxyServerInterface, WindowManager.AgentXPCProxyClientInterface> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ xpcConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)xpcGetCurrentWindowPickingOrderedWindowsPerSpaceWithCompletion:(id /* block */)a0;
- (void)assertionsDidCancelWithIDs:(id)a0;
- (void)desktopPeekMonitorStateDidChange:(id)a0;
- (void)didCancelWindowPickingMode;
- (void)didEndWindowPickingModeWithSelectedWindow:(unsigned int)a0;
- (void)draggableOverlaySessionTargetDidClose:(id)a0;
- (void)exposeModeDidChange:(id)a0;
- (void)windowPickingSessionDidUpdateWithOrderedWindows:(id)a0;
- (void)xpcActivateWindowWithWindow:(unsigned int)a0 completion:(id /* block */)a1;
- (void)xpcAddWindowsToSpaceWithWindowIDs:(id)a0 spaceID:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)xpcAssignWindows:(id)a0 toSpaces:(id)a1 removingFrom:(unsigned int)a2 fence:(id)a3 completion:(id /* block */)a4;
- (void)xpcBeginDesktopPeekMonitor:(id)a0 completion:(id /* block */)a1;
- (void)xpcBeginDraggableOverlaySession:(id)a0 target:(id)a1 overlayWindowID:(unsigned int)a2 contentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 completion:(id /* block */)a4;
- (void)xpcBeginExposeCoordinator:(id)a0 completion:(id /* block */)a1;
- (void)xpcBeginWindowPickingModeWithSelectedWindow:(unsigned int)a0 completion:(id /* block */)a1;
- (void)xpcBeginWindowPickingSessionWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)xpcCancelRemoteTransitionInCompletion:(id /* block */)a0;
- (void)xpcCancelRemoteTransitionOutWithCompletion:(id /* block */)a0;
- (void)xpcCommitPendingUpdatesWithCompletion:(id /* block */)a0;
- (void)xpcDiagnose:(id /* block */)a0;
- (void)xpcEndDesktopPeekMonitor:(id)a0 completion:(id /* block */)a1;
- (void)xpcEndDraggableOverlaySession:(id)a0 completion:(id /* block */)a1;
- (void)xpcEndExposeCoordinator:(id)a0 completion:(id /* block */)a1;
- (void)xpcEndWindowPickingModeWithCompletion:(id /* block */)a0;
- (void)xpcEndWindowPickingSessionWithCompletion:(id /* block */)a0;
- (void)xpcExposeCoordinator:(id)a0 toggleExposeMode:(id)a1 transition:(id)a2 completion:(id /* block */)a3;
- (void)xpcFinalizeRemoteTransitionInCompletion:(id /* block */)a0;
- (void)xpcFinalizeRemoteTransitionOutWithCompletion:(id /* block */)a0;
- (void)xpcGetExpectedFrameWithTarget:(id)a0 overlaySize:(struct CGSize { double x0; double x1; })a1 contentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a2 completion:(id /* block */)a3;
- (void)xpcHighlightWindowForPicking:(unsigned int)a0 completion:(id /* block */)a1;
- (void)xpcInitializeRemoteTransitionCoordinationOutWithInitialLayoutState:(id)a0 windowAnimations:(id)a1 displayAnimations:(id)a2 options:(unsigned char)a3 startingAt:(double)a4 completion:(id /* block */)a5;
- (void)xpcInitializeRemoteTransitionInWithFinalLayoutState:(id)a0 windowAnimations:(id)a1 displayAnimations:(id)a2 options:(unsigned char)a3 startingAt:(double)a4 completion:(id /* block */)a5;
- (void)xpcProvideVisibilityHintForSpace:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)xpcReleaseLayoutControlWithCompletion:(id /* block */)a0;
- (void)xpcReleaseRemoteTransitionCoordinationWithCompletion:(id /* block */)a0;
- (void)xpcReleaseWidgetRevealAssertion:(id)a0 completion:(id /* block */)a1;
- (void)xpcRequestLayoutControlWithCompletion:(id /* block */)a0;
- (void)xpcRequestLayoutStateWithCompletion:(id /* block */)a0;
- (void)xpcRequestRemoteTransitionCoordinationWithTransitionType:(id)a0 completion:(id /* block */)a1;
- (void)xpcSetStageManagerEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)xpcTakeWidgetRevealAssertion:(id)a0 withInclusions:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)xpcUpdateRemoteTransitionInTo:(double)a0 completion:(id /* block */)a1;
- (void)xpcUpdateRemoteTransitionOutTo:(double)a0 completion:(id /* block */)a1;
- (void)xpcUpdateWindowPickingSessionClientInfo:(id)a0 completion:(id /* block */)a1;

@end
