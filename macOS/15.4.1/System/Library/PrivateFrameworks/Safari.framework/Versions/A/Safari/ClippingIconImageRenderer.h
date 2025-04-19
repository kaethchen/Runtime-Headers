@class NSImage;

@interface ClippingIconImageRenderer : NSObject {
    NSImage *_maskImage;
    NSImage *_dropShadowImage;
}

@property (nonatomic) long long style;
@property (nonatomic) BOOL drawsDropShadowAndMask;

- (id)init;
- (void).cxx_destruct;
- (void)drawImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withTintColor:(id)a2;

@end
