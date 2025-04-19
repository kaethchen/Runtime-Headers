@class NSTextField, NSView, GKButton, GKDashboardPlayerPhotoView, GKChallenge;

@interface GKChallengeDetailViewController : GKDashboardCollectionViewController

@property (retain, nonatomic) GKChallenge *challenge;
@property NSView *containerView;
@property (retain, nonatomic) NSView *iconView;
@property (retain, nonatomic) NSTextField *categoryLabel;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *descriptionLabel;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerAvatarView;
@property (retain, nonatomic) NSTextField *challengeByNameLabel;
@property (retain, nonatomic) GKButton *playNowButton;
@property (retain, nonatomic) GKButton *declineButton;
@property (weak, nonatomic) id delegate;
@property (nonatomic) BOOL shouldShowPlay;

- (void).cxx_destruct;
- (id)title;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithChallenge:(id)a0;
- (void)donePressed:(id)a0;
- (id)backButtonImage;
- (void)configureButtons;
- (void)declinePressed:(id)a0;
- (void)playNowPressed:(id)a0;
- (void)challengeOK:(id)a0;
- (void)configureCollectionView;
- (void)configureForChallenge;
- (void)updateIconViewWithSubView:(id)a0;
- (void)updateIconViewWithSubView:(id)a0 edgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)updateLeaderboardImage;

@end
