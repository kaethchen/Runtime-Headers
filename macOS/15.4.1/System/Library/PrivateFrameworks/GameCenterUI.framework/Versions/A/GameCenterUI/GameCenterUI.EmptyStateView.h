@class _TtC12GameCenterUI14EmptyStateView;

@interface GameCenterUI.EmptyStateView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ wordmarkView;
    void /* unknown type, empty encoding */ buttonActionBlock;
    void /* unknown type, empty encoding */ imageType;
    void /* unknown type, empty encoding */ emptyStateData;
}

@property (class, nonatomic, readonly) _TtC12GameCenterUI14EmptyStateView *addFriendsEmptyStateView;
@property (class, nonatomic, readonly) _TtC12GameCenterUI14EmptyStateView *addFriendsWithButtonEmptyStateView;
@property (class, nonatomic, readonly) _TtC12GameCenterUI14EmptyStateView *addAdditionalFriendsEmptyStateView;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ imageView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ primaryLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ secondaryLabel;
@property (nonatomic, copy) id /* block */ buttonActionBlock;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ buttonView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measureToFit:(struct CGSize { double x0; double x1; })a0 with:(id)a1;

@end
