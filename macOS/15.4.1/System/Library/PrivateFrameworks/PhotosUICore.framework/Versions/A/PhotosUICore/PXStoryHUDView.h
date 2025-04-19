@class UXLabel, PXStoryHUDViewConfiguration;

@interface PXStoryHUDView : UXView <PXGReusableView>

@property (readonly, nonatomic) UXLabel *titleLabel;
@property (readonly, nonatomic) UXLabel *bodyLabel;
@property (copy, nonatomic) PXStoryHUDViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) BOOL canUnloadWhenInvisible;
@property (readonly, nonatomic) BOOL isFloating;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)becomeReusable;

@end
