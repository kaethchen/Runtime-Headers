@class NSTextField, NSString, NSView, NSImageView, _TtC12GameCenterUI17GKPlayerGroupView;
@protocol GKDashboardPickerPlayerGroupCellDelegate;

@interface GKDashboardPickerPlayerGroupCell : NSUICollectionViewCell

@property (retain, nonatomic) NSString *lastAppearanceName;
@property (weak) NSView *container;
@property (weak) NSView *iconContainer;
@property (weak) NSTextField *subtitle;
@property (weak) NSTextField *title;
@property (weak) NSView *bottomLine;
@property (weak) NSImageView *checkmark;
@property (weak) NSImageView *messageIcon;
@property (weak) NSView *ringView;
@property (retain, nonatomic) NSString *originalSubtitle;
@property (retain, nonatomic) _TtC12GameCenterUI17GKPlayerGroupView *playerGroupView;
@property (nonatomic) BOOL canExpand;
@property (nonatomic) BOOL lineVisible;
@property (nonatomic) BOOL usesClearBackground;
@property (weak, nonatomic) id<GKDashboardPickerPlayerGroupCellDelegate> groupCellDelegate;
@property (retain, nonatomic) NSString *searchText;

+ (id)reuseIdentifier;
+ (struct CGSize { double x0; double x1; })defaultSize;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)cellBackgroundColor;
- (BOOL)isFlipped;
- (void)setHighlightState:(long long)a0;
- (void)setSelected:(BOOL)a0;
- (void)updateLayer;
- (void)setLineVisible:(BOOL)a0;
- (BOOL)canBecomeFocused;
- (void)configureWithPlayers:(id)a0 title:(id)a1 subtitle:(id)a2 messagesGroupIdentifier:(id)a3 source:(long long)a4 playerSelectionProxy:(id)a5;
- (BOOL)lineVisible;
- (void)updateCellBackground;
- (void)updateLayerMask:(id)a0;
- (void)updateTitleForSearchText;

@end
