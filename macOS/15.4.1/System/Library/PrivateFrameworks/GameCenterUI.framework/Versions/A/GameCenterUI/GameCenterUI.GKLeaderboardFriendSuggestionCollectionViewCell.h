@interface GameCenterUI.GKLeaderboardFriendSuggestionCollectionViewCell : NSCollectionViewItem {
    void /* unknown type, empty encoding */ tapHandler;
}

@property (class, nonatomic, readonly) double horizontalPadding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ friendSuggesationLockupView;
@property (nonatomic, copy) id /* block */ tapHandler;

+ (struct CGSize { double x0; double x1; })sizeWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)applyWithSuggestedFriend:(id)a0 previouslyInvited:(BOOL)a1;

@end
