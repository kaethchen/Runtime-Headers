@interface GameCenterUI.AccessPointOverlay : _TtCs12_SwiftObject <GameCenterOverlayService.AccessPointDelegate, GameCenterOverlayService.DashboardDelegate, GameCenterOverlayService.GameModeDelegate> {
    void /* unknown type, empty encoding */ clientProxy;
    void /* unknown type, empty encoding */ angelClientProxy;
}

- (void)finishWith:(id)a0;
- (void)didDismissBanner;
- (void)didDismissDashboard;
- (void)finishAndPlay:(id)a0;
- (void)isPresentingDashboardFromAccessPoint:(BOOL)a0;
- (void)quitTurnBasedMatch:(id)a0;
- (void)requestDashboardPresentationWithInitialState:(id)a0;
- (void)requireOnboardingFlow;
- (void)setGameModeWithBundleIdentifier:(id)a0 enabled:(BOOL)a1;
- (void)updateAccessPointFrameCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
