@class NSString, NSTextField;

@interface GameCenterUI.GKPickerGroupNearbyCell : GameCenterUI.GKPickerGroupNearbyCollectionViewCell

@property (class, nonatomic, readonly) NSString *reuseIdentifier;
@property (class, nonatomic, readonly) NSString *reuseIdentifierAX;

@property (nonatomic, weak) void /* unknown type, empty encoding */ iconContainer;
@property (nonatomic, weak) void /* unknown type, empty encoding */ badgeLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic) long long highlightState;
@property (nonatomic, readonly) NSTextField *accessibilityTitleLabel;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (void)configureWithBadgeCount:(long long)a0;

@end
