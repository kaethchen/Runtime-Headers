@interface GameCenterUI.ActivityFeedLeaderboardRowView : GameCenterUI.BaseView

@property (nonatomic, readonly) void /* unknown type, empty encoding */ contentBackgroundView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ artworkView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ nicknameLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ pointsLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ accessoryView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measureToFit:(struct CGSize { double x0; double x1; })a0 with:(id)a1;

@end
