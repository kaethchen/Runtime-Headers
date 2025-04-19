@class NSString;
@protocol GKLeaderboardViewControllerDelegate;

@interface GKLeaderboardViewController : GKGameCenterViewController

@property long long timeScope;
@property (copy) NSString *category;
@property (weak) id<GKLeaderboardViewControllerDelegate> leaderboardDelegate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)remoteViewControllerRequestingDismiss:(id)a0;

@end
