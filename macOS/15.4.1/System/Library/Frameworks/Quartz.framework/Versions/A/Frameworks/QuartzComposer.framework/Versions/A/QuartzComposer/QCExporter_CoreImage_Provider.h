@class QCImageManager, NSDictionary, QCPixelFormat, NSAffineTransform;
@protocol QCImageProvider;

@interface QCExporter_CoreImage_Provider : NSObject {
    id<QCImageProvider> _provider;
    QCImageManager *_manager;
    QCPixelFormat *_format;
    NSAffineTransform *_transformation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    struct CGColorSpace { } *_colorSpace;
    NSDictionary *_options;
}

- (void)dealloc;
- (void)finalize;
- (void)provideImageData:(void *)a0 bytesPerRow:(unsigned long long)a1 origin:(unsigned long long)a2 :(unsigned long long)a3 size:(unsigned long long)a4 :(unsigned long long)a5 userInfo:(id)a6;
- (void)deleteImageTexture:(const struct CIImageProviderTextureInfoStruct { unsigned long long x0; unsigned long long x1; struct _CGLContextObject *x2; struct _CGLPixelFormatObject *x3; unsigned int x4; } *)a0 name:(unsigned int)a1 userInfo:(id)a2;
- (id)initWithProvider:(id)a0 imageManager:(id)a1 pixelFormat:(id)a2 transformation:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 colorSpace:(struct CGColorSpace { } *)a5 options:(id)a6;
- (unsigned int)provideImageTexture:(const struct CIImageProviderTextureInfoStruct { unsigned long long x0; unsigned long long x1; struct _CGLContextObject *x2; struct _CGLPixelFormatObject *x3; unsigned int x4; } *)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 userInfo:(id)a2;

@end
