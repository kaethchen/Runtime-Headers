@interface GameCenterUICore.GameOverlayRemoteViewController : NSRemoteViewController <GameCenterOverlayService.DashboardClientProtocol> {
    void /* unknown type, empty encoding */ remoteViewPresenter;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)exportedInterface;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)serviceViewControllerInterface;
- (void)viewWillAppear;
- (void)viewServiceDidTerminateWithError:(id)a0;
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
