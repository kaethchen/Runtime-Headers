@class LPImageViewStyle, NSImageView, LPImagePresentationProperties, NSView, LPImage;

@interface LPImageView : LPComponentView {
    LPImage *_image;
    LPImage *_filteredImage;
    LPImagePresentationProperties *_properties;
    LPImageViewStyle *_style;
    LPImageViewStyle *_originalStyle;
    long long _currentScalingMode;
    long long _platterReason;
    NSImageView *_imageView;
    NSView *_overlayView;
    NSView *_backgroundView;
}

+ (BOOL)clipsToBounds;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateCornerRadius;
- (long long)_filter;
- (id)initWithHost:(id)a0;
- (double)_effectiveCornerRadius;
- (void)ensureImageView;
- (id)_createImageViewWithImage:(id)a0;
- (id)_createOverlayViewWithOpacity:(double)a0;
- (void)_setImageViewScalingMode:(long long)a0;
- (void)_updateScalingMode;
- (struct CGSize { double x0; double x1; })imageSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0 image:(id)a1 properties:(id)a2 style:(id)a3;
- (void)installDarkeningViewIfNeeded;
- (void)layoutComponentView;
- (long long)scalingModeForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldApplyBackground;
- (void)updateBorder;
- (void)updateShadowPath;

@end
