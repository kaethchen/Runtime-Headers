@class QCPixelFormat, QCRegion, NSArray;

@interface QCProvider_CoreGraphics : QCImageProvider {
    void *_source;
    unsigned long long _index;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    QCRegion *_domainOfDefinition;
    struct CGColorSpace { } *_colorSpace;
    BOOL _hasAlpha;
    QCPixelFormat *_pixelFormat;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transform;
    NSArray *_pixelFormats;
    struct { unsigned char bytes[16]; } _md5;
    double _imageWidth;
    double _imageHeight;
    struct CGImage { } *_cachedImage;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    struct CGColor { } *_backgroundColor;
    struct __CFDictionary { } *_properties;
}

+ (id)createProviderWithSource:(id)a0 options:(id)a1;
+ (BOOL)isCompatibleWithSource:(id)a0 sourceMD5:(struct { unsigned char x0[16]; } *)a1;

- (void)dealloc;
- (void)finalize;
- (struct CGColorSpace { } *)colorSpace;
- (BOOL)hasAlpha;
- (id)initWithData:(id)a0 options:(id)a1;
- (id)initWithURL:(id)a0 options:(id)a1;
- (struct __CFDictionary { } *)imageProperties;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)imageTransform;
- (void)_finalize_QCProvider_CoreGraphics;
- (id)createOptimizedProviderWithTransformation:(id)a0 cropping:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)createPixelBufferForManager:(id)a0 withFormat:(id)a1 transformation:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 colorSpace:(struct CGColorSpace { } *)a4 options:(id)a5;
- (id)domainOfDefinition;
- (id)initWithCGSource:(void *)a0 options:(id)a1;
- (id)initWithNSBitmapImageRep:(id)a0 options:(id)a1;
- (id)initWithNSImage:(id)a0 options:(id)a1;
- (id)nativePixelFormat;
- (struct { unsigned char x0[16]; })providerMD5;
- (id)sourceRepresentation;
- (id)sourceRepresentationType;
- (id)supportedPixelBufferFormatsForManager:(id)a0;
- (BOOL)supportsColorMatching;
- (BOOL)supportsCropping;
- (BOOL)supportsTransformation;

@end
