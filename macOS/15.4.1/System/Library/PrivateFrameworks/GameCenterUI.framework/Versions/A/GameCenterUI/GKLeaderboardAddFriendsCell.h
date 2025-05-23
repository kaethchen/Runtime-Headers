@class NSView, _TtC12GameCenterUI14EmptyStateView, _TtC12GameCenterUI22GKAddFriendsLockupView;

@interface GKLeaderboardAddFriendsCell : NSCollectionViewItem

@property (weak, nonatomic) _TtC12GameCenterUI22GKAddFriendsLockupView *addFriendsLockupView;
@property (weak, nonatomic) _TtC12GameCenterUI14EmptyStateView *noFriendsView;
@property NSView *container;
@property NSView *topLine;
@property (nonatomic) long long friendCount;
@property (nonatomic) BOOL lineVisible;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (struct CGSize { double x0; double x1; })preferredLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)clearContainer;
- (void)configureAddFriendsLockupWithMetricsPageId:(id)a0 handler:(id /* block */)a1;
- (void)configureNoFriendsViewWithHandler:(id /* block */)a0;

@end
