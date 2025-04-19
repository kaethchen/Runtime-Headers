@class PXGBlurEffectViewConfiguration, UXView;

@interface PXGBlurEffectView : UXView <PXGReusableView>

@property (readonly, nonatomic) UXView *contentView;
@property (copy, nonatomic) PXGBlurEffectViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) BOOL canUnloadWhenInvisible;
@property (readonly, nonatomic) BOOL isFloating;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)addHostedLayer:(id)a0;
- (void)addHostedView:(id)a0;
- (void)becomeReusable;
- (struct CGPoint { double x0; double x1; })convertHostedChildCenter:(struct CGPoint { double x0; double x1; })a0 fromGlobalLayer:(id)a1;

@end
