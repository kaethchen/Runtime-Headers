@interface GameCenterUI.GameCenterViewControllerOverlay : NSObject <GameCenterOverlayService.DashboardDelegate> {
    void /* unknown type, empty encoding */ clientProxy;
    void /* unknown type, empty encoding */ viewController;
}

- (id)init;
- (void).cxx_destruct;
- (void)finishWith:(id)a0;
- (void)didDismissDashboard;
- (void)finishAndPlay:(id)a0;
- (void)quitTurnBasedMatch:(id)a0;

@end
