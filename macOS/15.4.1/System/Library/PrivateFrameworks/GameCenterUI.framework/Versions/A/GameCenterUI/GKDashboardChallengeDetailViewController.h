@class NSTextField, GKAchievementIconView, NSLayoutConstraint, NSButton, GKChallenge;

@interface GKDashboardChallengeDetailViewController : GKDetailViewController

@property (retain, nonatomic) GKChallenge *challenge;
@property (nonatomic) GKAchievementIconView *iconView;
@property (nonatomic) NSTextField *titleLabel;
@property (nonatomic) NSTextField *descriptionLabel;
@property (nonatomic) NSTextField *fromLabel;
@property (nonatomic) NSButton *playButton;
@property (nonatomic) NSButton *declineButton;
@property (nonatomic) NSLayoutConstraint *topConstraint;
@property (nonatomic) double topMargin;
@property (nonatomic) NSLayoutConstraint *iconHeightConstraint;
@property (nonatomic) NSLayoutConstraint *speechToFromConstraint;
@property (weak, nonatomic) id delegate;
@property (nonatomic) BOOL shouldShowPlay;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithChallenge:(id)a0;
- (void)play:(id)a0;
- (id)preferredFocusEnvironments;
- (void)challengeOK:(id)a0;
- (void)configureForChallenge;
- (void)decline:(id)a0;
- (void)updateLeaderboardImage;

@end
