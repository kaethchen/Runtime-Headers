@class GKLeaderboardSet;

@interface GKDashboardLeaderboardListViewController : GKDashboardCollectionViewController

@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;

- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)viewDidLoad;
- (id)initWithGameRecord:(id)a0 leaderboardSet:(id)a1;

@end
