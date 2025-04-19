@class NSTextField, GKScore, GKLeaderboard, GKDashboardPlayerPhotoView, NSButton;

@interface GKDashboardLeaderboardDetailViewController : GKDetailViewController

@property (nonatomic) GKDashboardPlayerPhotoView *playerView;
@property (nonatomic) NSTextField *nameLabel;
@property (nonatomic) NSTextField *descriptionLabel;
@property (nonatomic) NSTextField *earnedOnLabel;
@property (nonatomic) NSTextField *infoLabel;
@property (nonatomic) NSButton *firstButton;
@property (nonatomic) NSButton *secondButton;
@property (nonatomic) NSButton *reportProblemButton;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) GKScore *score;

- (void).cxx_destruct;
- (void)share:(id)a0;
- (void)viewDidLoad;
- (void)report:(id)a0;
- (id)preferredFocusEnvironments;
- (void)challenge:(id)a0;
- (void)configureForScore;
- (id)initWithScore:(id)a0 leaderboard:(id)a1;

@end
