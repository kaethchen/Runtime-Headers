@class NSArray;

@interface GameCenterUI.ActivityFeedLeaderboardListSubview : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ leaderboardRowViews;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ tapHandler;
}

@property (nonatomic, readonly) NSArray *leaderboardRowViews;
@property (nonatomic, copy) id /* block */ tapHandler;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)didTap;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measureToFit:(struct CGSize { double x0; double x1; })a0 with:(id)a1;

@end
