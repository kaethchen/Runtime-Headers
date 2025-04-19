@class ClippingIconImageRenderer;

@interface ClippingImageView : NSImageView {
    ClippingIconImageRenderer *_renderer;
}

@property (nonatomic) long long imageViewStyle;
@property (nonatomic) BOOL drawsDropShadowAndMask;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
