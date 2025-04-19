@class NSArray, QCRegion, QCTextRenderer;

@interface QCProvider_CoreText : QCImageProvider {
    QCTextRenderer *_renderer;
    QCRegion *_domainOfDefinition;
    struct { unsigned char bytes[16]; } _md5;
    NSArray *_pixelFormats;
}

+ (id)createProviderWithSource:(id)a0 options:(id)a1;
+ (BOOL)isCompatibleWithSource:(id)a0 sourceMD5:(struct { unsigned char x0[16]; } *)a1;

- (void)dealloc;
- (struct CGColorSpace { } *)colorSpace;
- (BOOL)hasAlpha;
- (id)createOptimizedProviderWithTransformation:(id)a0 cropping:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)createPixelBufferForManager:(id)a0 withFormat:(id)a1 transformation:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 colorSpace:(struct CGColorSpace { } *)a4 options:(id)a5;
- (id)domainOfDefinition;
- (id)initWithString:(id)a0 attributes:(id)a1 layoutSize:(struct CGSize { double x0; double x1; })a2 options:(id)a3;
- (id)initWithTextRenderer:(id)a0 options:(id)a1;
- (struct { unsigned char x0[16]; })providerMD5;
- (id)supportedPixelBufferFormatsForManager:(id)a0;
- (BOOL)supportsColorMatching;
- (BOOL)supportsCropping;
- (BOOL)supportsTransformation;

@end
