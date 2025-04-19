@class VUITextBadgeView, VUILabel, VUIBaseView, CALayer, NSArray, VUIProgressView;

@interface VUIOverlayView : VUIBaseView

@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUITextBadgeView *textBadge;
@property (retain, nonatomic) VUIProgressView *progressView;
@property (retain, nonatomic) VUIBaseView *gradientView;
@property (retain, nonatomic) CALayer *gradientLayer;
@property (copy, nonatomic) NSArray *badgeViewWrappers;
@property (nonatomic) long long overlayType;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;

- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_overlayPadding;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
