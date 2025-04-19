@interface GameCenterUI.SmallPlayerCardView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ contentViewBackground;
    void /* unknown type, empty encoding */ closeButtonActionBlock;
    void /* unknown type, empty encoding */ buttonActionBlock;
}

@property (class, nonatomic, readonly) double cardWidth;
@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } avatarSize;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ closeButton;
@property (nonatomic, retain) void /* unknown type, empty encoding */ avatarView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ messagesBadge;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ subtitleLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ button;
@property (nonatomic, copy) id /* block */ closeButtonActionBlock;
@property (nonatomic, copy) id /* block */ buttonActionBlock;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;
- (void)didTapButton;
- (void)didTapCloseButton;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measureToFit:(struct CGSize { double x0; double x1; })a0 with:(id)a1;

@end
