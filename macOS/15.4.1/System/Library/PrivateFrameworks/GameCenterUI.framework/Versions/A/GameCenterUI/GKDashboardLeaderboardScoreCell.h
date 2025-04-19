@class NSTextField, NSString, NSView, GKScore, NSLayoutConstraint, GKDashboardPlayerPhotoView;

@interface GKDashboardLeaderboardScoreCell : GKRectShadowCell

@property (nonatomic) GKDashboardPlayerPhotoView *playerView;
@property (retain, nonatomic) NSLayoutConstraint *playerViewHeightConstraint;
@property (nonatomic) NSTextField *rankLabel;
@property (nonatomic) NSTextField *nameLabel;
@property (nonatomic) NSTextField *scoreLabel;
@property (nonatomic) NSView *topLine;
@property (nonatomic) NSView *bottomLine;
@property (nonatomic) NSView *monogramColorView;
@property (retain, nonatomic) NSString *lastAppearanceName;
@property (retain, nonatomic) GKScore *score;
@property (nonatomic) BOOL linesVisible;
@property (readonly, nonatomic) NSView *popoverSourceView;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (id)highRankNib;
+ (id)lowRankNib;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)updateLayer;
- (BOOL)linesVisible;
- (void)setLinesVisible:(BOOL)a0;
- (void)setupForScore:(id)a0;

@end
