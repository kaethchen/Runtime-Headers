@class VUIImageView, VUIImageProxy, VUIBaseView, VUIMonogramViewConfiguration, NSImage, VUIMonogramDescription, NSView;

@interface VUIMonogramView : VUIBaseView {
    VUIBaseView *_placeholderView;
    BOOL _isSelected;
}

@property (copy, nonatomic) id /* block */ pressCompletionBlock;
@property (retain, nonatomic) VUIBaseView *focusedShadowView;
@property (retain, nonatomic) VUIBaseView *unfocusedShadowView;
@property (retain, nonatomic) VUIImageView *imageView;
@property (retain, nonatomic) VUIImageProxy *imageProxy;
@property (retain, nonatomic) VUIMonogramViewConfiguration *configuration;
@property (retain, nonatomic) VUIMonogramDescription *monogramDescription;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSImage *placeholderImage;
@property (nonatomic) double unfocusedImageAlpha;
@property (retain, nonatomic) NSView *overlayView;

- (void).cxx_destruct;
- (id)accessibilityTitle;
- (void)setAccessibilityLabel:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void)_loadWithMonogramDescription:(id)a0 imageProxy:(id)a1;
- (void)_updateFocusedShadowFrameAndLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updatePlaceholerView;
- (void)_updateUnfocusedShadowFrameAndLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateMacShadowImage;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
