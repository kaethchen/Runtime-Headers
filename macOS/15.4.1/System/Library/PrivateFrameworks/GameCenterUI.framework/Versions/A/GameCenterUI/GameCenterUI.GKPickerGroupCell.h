@class NSString, NSTextField;

@interface GameCenterUI.GKPickerGroupCell : GameCenterUI.GKPickerGroupCollectionViewCell {
    void /* unknown type, empty encoding */ playerGroupView;
    void /* unknown type, empty encoding */ players;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;
@property (class, nonatomic, readonly) NSString *reuseIdentifierAX;

@property (nonatomic, weak) void /* unknown type, empty encoding */ container;
@property (nonatomic, weak) void /* unknown type, empty encoding */ messageIcon;
@property (nonatomic, weak) void /* unknown type, empty encoding */ iconContainer;
@property (nonatomic, weak) void /* unknown type, empty encoding */ ringView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ subtitleLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ nearbyIconContainer;
@property (nonatomic, weak) void /* unknown type, empty encoding */ nearbyIconVisualEffectView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ nearbyIcon;
@property (nonatomic, weak) void /* unknown type, empty encoding */ groupCellDelegate;
@property (nonatomic) long long highlightState;
@property (nonatomic) BOOL selected;
@property (nonatomic, readonly) NSTextField *accessibilityTitleLabel;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (BOOL)isSelected;
- (void)viewDidLayout;
- (void)configureWithPlayers:(id)a0 title:(id)a1 subtitle:(id)a2 messagesGroupIdentifier:(id)a3 source:(long long)a4 playerSelectionProxy:(id)a5;

@end
