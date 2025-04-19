@class NSImageView, NSTextField, NSView, NSString, GKLeaderboardSet, GKLeaderboard, NSColor;

@interface GKDashboardLeaderboardCell : NSUICollectionViewCell

@property (retain, nonatomic) NSImageView *iconView;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *countLabel;
@property (retain, nonatomic) NSView *overlayView;
@property (retain, nonatomic) NSColor *titleLabelColor;
@property (retain, nonatomic) NSString *lastAppearanceName;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (readonly, nonatomic) NSView *popoverSourceView;

- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)a0;
- (void)updateLayer;
- (void)updateOverlay;
- (BOOL)canBecomeFocused;
- (void)updateImage;
- (void)updateRank;

@end
