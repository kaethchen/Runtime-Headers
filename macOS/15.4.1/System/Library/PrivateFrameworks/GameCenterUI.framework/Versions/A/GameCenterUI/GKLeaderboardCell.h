@class NSTextField, NSView, NSString, GKLeaderboard, NSVisualEffectView, NSColor, NSLayoutConstraint, NSImageView, GKLeaderboardSet;

@interface GKLeaderboardCell : NSCollectionViewItem

@property (retain, nonatomic) NSImageView *iconView;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *countLabel;
@property (retain, nonatomic) NSView *overlayView;
@property (retain, nonatomic) NSLayoutConstraint *iconContainerHeight;
@property (retain, nonatomic) NSLayoutConstraint *minimumIconHeight;
@property (retain, nonatomic) NSColor *titleLabelColor;
@property NSView *containerView;
@property (retain, nonatomic) NSString *lastAppearanceName;
@property (retain, nonatomic) NSVisualEffectView *effectView;
@property (retain, nonatomic) NSString *dataToken;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (readonly, nonatomic) NSView *popoverSourceView;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)contentView;
- (void)setHighlightState:(long long)a0;
- (void)updateLayer;
- (void)updateLayout;
- (void)updateOverlay;
- (BOOL)canBecomeFocused;
- (void)updateImage;
- (void)addVisualEffect;
- (void)setupFallbackIcon;
- (void)updateRank;
- (void)updateSummary;

@end
