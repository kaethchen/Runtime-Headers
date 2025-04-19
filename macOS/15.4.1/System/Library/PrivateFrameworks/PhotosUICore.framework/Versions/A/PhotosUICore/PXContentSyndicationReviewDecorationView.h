@class PXAssetReference, NSImageView;

@interface PXContentSyndicationReviewDecorationView : NSView <PXGDecorationView> {
    NSImageView *_imageView;
    long long _eligibility;
}

@property (copy, nonatomic) PXAssetReference *userData;
@property (nonatomic) unsigned long long decorationOptions;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) BOOL canUnloadWhenInvisible;
@property (readonly, nonatomic) BOOL isFloating;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_positionSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)becomeReusable;
- (void)_setEligibility:(long long)a0;
- (void)_updateAssetInformation;

@end
