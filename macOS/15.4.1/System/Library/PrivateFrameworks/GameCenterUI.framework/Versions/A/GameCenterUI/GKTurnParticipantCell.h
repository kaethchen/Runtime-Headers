@class NSTextField, NSView, NSArray, GKTurnBasedMatch, GKTurnBasedParticipant, NSBox, NSDictionary, NSLayoutConstraint, NSImageView, NSButton, _TtC12GameCenterUI22OverlappingPlayersView;

@interface GKTurnParticipantCell : GKBasePlayerCell

@property (retain, nonatomic) NSTextField *bottomLabel;
@property (retain, nonatomic) NSButton *detailButton;
@property (retain, nonatomic) NSImageView *statusImageView;
@property (retain, nonatomic) NSLayoutConstraint *detailWidthConstraint;
@property (retain, nonatomic) NSTextField *additionalPlayerCountLabel;
@property NSView *overlappingPlayersViewContainer;
@property (retain, nonatomic) _TtC12GameCenterUI22OverlappingPlayersView *overlappingPlayersView;
@property NSLayoutConstraint *nameToSuperviewLeadingConstriant;
@property NSLayoutConstraint *nameToIconLeadingConstraint;
@property double detailWidth;
@property double statusToDetailDistance;
@property (retain, nonatomic) NSDictionary *playerAvatarMapping;
@property (retain, nonatomic) NSArray *previousParticipants;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (retain, nonatomic) GKTurnBasedParticipant *participant;
@property (nonatomic) SEL detailPressedAction;
@property (nonatomic) BOOL isDetail;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) NSBox *divider;

+ (double)defaultRowHeight;
+ (id)itemHeightList;
+ (void)registerCellClassesForCollectionView:(id)a0;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)configureContextMenu:(id)a0 indexPath:(id)a1;
- (void)configureOverlappingPlayersView;
- (void)configureForDetail;
- (void)configureForMatch;
- (void)detailPressed:(id)a0;
- (void)didUpdateModel;
- (id)getPlayerIDForAllNonAutomatchedTurnBasedParticipants;
- (BOOL)matchWantsLocalPlayerAttention;
- (BOOL)needsRefreshOverlappingPlayersView;
- (void)updateOverlappingPlayerViewsAvatar;

@end
