@interface GameCenterUI.PlayerProfileHeaderView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ useHorizontalLayout;
}

@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } avatarSize;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ avatarView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ friendsLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleLabel;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
