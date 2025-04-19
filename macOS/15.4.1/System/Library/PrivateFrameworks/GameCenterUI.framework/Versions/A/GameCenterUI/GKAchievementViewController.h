@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController : GKGameCenterViewController

@property (weak) id<GKAchievementViewControllerDelegate> achievementDelegate;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)remoteViewControllerRequestingDismiss:(id)a0;

@end
