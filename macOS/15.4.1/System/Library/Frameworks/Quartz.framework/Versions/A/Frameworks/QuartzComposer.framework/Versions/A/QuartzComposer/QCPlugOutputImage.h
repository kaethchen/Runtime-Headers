@class QCRegion, NSMutableArray;
@protocol QCPlugInOutputImageProvider;

@interface QCPlugOutputImage : QCImageProvider {
    id<QCPlugInOutputImageProvider> _image;
    QCRegion *_region;
    struct CGColorSpace { } *_colorspace;
    NSMutableArray *_bufferFormats;
    NSMutableArray *_textureFormats;
}

+ (id)createProviderWithSource:(id)a0 options:(id)a1;
+ (BOOL)isCompatibleWithSource:(id)a0 sourceMD5:(struct { unsigned char x0[16]; } *)a1;

- (void)dealloc;
- (void)finalize;
- (struct CGColorSpace { } *)colorSpace;
- (BOOL)hasAlpha;
- (id)initWithImage:(id)a0;
- (id)createPixelBufferForManager:(id)a0 withFormat:(id)a1 transformation:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 colorSpace:(struct CGColorSpace { } *)a4 options:(id)a5;
- (id)createTextureBufferForManager:(id)a0 withFormat:(id)a1 target:(unsigned int)a2 transformation:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 colorSpace:(struct CGColorSpace { } *)a5 options:(id)a6;
- (id)domainOfDefinition;
- (id)supportedPixelBufferFormatsForManager:(id)a0;
- (id)supportedTextureBufferFormatsForManager:(id)a0;
- (id)supportedTextureBufferTargetsForManager:(id)a0;
- (BOOL)supportsCropping;

@end
