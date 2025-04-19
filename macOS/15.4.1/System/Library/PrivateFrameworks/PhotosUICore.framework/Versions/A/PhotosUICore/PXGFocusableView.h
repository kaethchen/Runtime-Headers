@class PXGFocusableViewConfiguration;

@interface PXGFocusableView : UXView <PXGReusableView> {
    struct { unsigned char didUpdateUserData : 1; unsigned char didUpdateFocusInContext : 1; unsigned char didHintFocusMovement : 1; } _delegateFlags;
}

@property (copy, nonatomic) PXGFocusableViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) BOOL canUnloadWhenInvisible;
@property (readonly, nonatomic) BOOL isFloating;

- (id)description;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (void)addHostedLayer:(id)a0;
- (void)addHostedView:(id)a0;
- (void)becomeReusable;
- (struct CGPoint { double x0; double x1; })convertHostedChildCenter:(struct CGPoint { double x0; double x1; })a0 fromGlobalLayer:(id)a1;

@end
