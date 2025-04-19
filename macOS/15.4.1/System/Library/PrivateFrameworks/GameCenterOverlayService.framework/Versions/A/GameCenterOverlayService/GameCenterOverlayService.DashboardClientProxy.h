@interface GameCenterOverlayService.DashboardClientProxy : GameCenterOverlayService.ClientProxy <GameCenterOverlayService.DashboardClientProtocol> {
    void /* unknown type, empty encoding */ dashboardDelegate;
    void /* unknown type, empty encoding */ accessPointDelegate;
    void /* unknown type, empty encoding */ gameModeDelegate;
}

- (void).cxx_destruct;
- (void)finishWith:(id)a0;
- (void)didDismissBanner;
- (void)didDismissDashboard;
- (void)finishAndPlay:(id)a0;
- (void)isPresentingDashboardFromAccessPoint:(id)a0;
- (void)quitTurnBasedMatch:(id)a0;
- (void)requestDashboardPresentation:(id)a0;
- (void)requireOnboardingFlow;
- (void)setGameModeWithBundleIdentifier:(id)a0 enabled:(id)a1;
- (void)updateAccessPointFrameCoordinates:(id)a0;

@end
