@class GKDashboardSelectionDelegatingCollectionViewController, GKGameRecord, GKTimeScopeButton, GKLeaderboard, NSPopUpButton, GKDashboardLeaderboardScoreDataSource;

@interface GKDashboardLeaderboardScoreViewController : GKDashboardCollectionViewController

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) GKDashboardLeaderboardScoreDataSource *friendDataSource;
@property (retain, nonatomic) GKDashboardLeaderboardScoreDataSource *globalDataSource;
@property (nonatomic) long long timeScope;
@property (nonatomic) NSPopUpButton *leaderboardButton;
@property (nonatomic) GKTimeScopeButton *timeScopeButton;
@property (retain, nonatomic) GKDashboardSelectionDelegatingCollectionViewController *leaderboardSetViewController;
@property (retain, nonatomic) GKDashboardSelectionDelegatingCollectionViewController *leaderboardListViewController;

+ (long long)initialTimeScope;
+ (void)setInitialTimeScope:(long long)a0;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)backButtonTitle;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithGameRecord:(id)a0 leaderboard:(id)a1;
- (void)applyLeaderboardToDataSources;
- (void)constructLeaderboardListViewControllerForSet:(id)a0;
- (void)dataUpdated:(BOOL)a0 withError:(id)a1;
- (void)leaderboardPressed:(id)a0;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (void)timeScopePressed:(id)a0;
- (void)updateWithLeaderboard:(id)a0;

@end
