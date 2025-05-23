@class GKLeaderboardMetadataView, GKGameRecord, NSTextField, GKLeaderboard, NSStackView, NSLayoutConstraint;

@interface GKLeaderboardSectionHeaderView : NSView

@property (nonatomic) BOOL dataUpdated;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) GKLeaderboardMetadataView *personalView;
@property (retain, nonatomic) GKLeaderboardMetadataView *socialView;
@property (retain, nonatomic) NSStackView *container;
@property (retain, nonatomic) NSLayoutConstraint *contentInsetTop;
@property (retain, nonatomic) NSLayoutConstraint *contentInsetBottom;
@property (retain, nonatomic) NSLayoutConstraint *contentInsetTrailing;
@property (retain, nonatomic) NSLayoutConstraint *contentInsetLeading;
@property (retain) NSTextField *titleLabel;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)attributedStringWithSymbol:(id)a0;
- (id)formattedNumber:(id)a0;
- (void)updateHighlightsWithGameRecord:(id)a0 leaderboardCount:(long long)a1 setCount:(long long)a2;

@end
