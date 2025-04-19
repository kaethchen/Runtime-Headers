@class MRTexture, MRImageManager;

@interface MRTextureSource : NSObject {
    MRTexture *_texture;
    struct { int textureTarget; BOOL wantsMipmap; BOOL wantsPowerOfTwo; BOOL wantsMonochromatic; BOOL wantsFloatTexture; BOOL wantsYUV; } _textureOptions;
    unsigned int _pixelFormat;
    float _color[4];
    struct __IOSurface { } *_ioSurface;
    struct __CVBuffer { } *_cvPixelBuffer;
    struct CGContext { } *_cgContext;
    struct CGColorSpace { } *_colorspace;
    struct CGImage { } *_cgImage;
    void *_datas[3];
    unsigned long long _dataSize;
    unsigned int _dataRowBytes;
    unsigned int _dataWidth;
    unsigned int _dataHeight;
    BOOL _ownsData;
    unsigned char _orientation;
    struct __CVBuffer { } *_cvTexture;
    BOOL _isPremultiplied;
    BOOL _isOpaque;
}

@property (readonly) MRImageManager *imageManager;
@property (readonly, nonatomic) struct { unsigned int width; unsigned int height; } size;
@property (nonatomic) BOOL wantsSharedTexture;
@property (readonly) struct { int x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *textureOptions;
@property (readonly) MRTexture *texture;

- (void)dealloc;
- (void)cleanup;
- (id)initWithCGContext:(struct CGContext { } *)a0 imageManager:(id)a1;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 imageManager:(id)a1;
- (void)addOverlayForROI:(id)a0;
- (void)generateMipmap;
- (id)initWithCGContext:(struct CGContext { } *)a0 size:(struct { unsigned int x0; unsigned int x1; })a1 imageManager:(id)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 textureSize:(struct { unsigned int x0; unsigned int x1; })a1 orientation:(long long)a2 imageManager:(id)a3 monochromatic:(BOOL)a4;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 size:(struct { unsigned int x0; unsigned int x1; })a1 orientation:(long long)a2 imageManager:(id)a3 monochromatic:(BOOL)a4;
- (id)initWithCVTexture:(struct __CVBuffer { } *)a0 size:(struct { unsigned int x0; unsigned int x1; })a1 orientation:(long long)a2 imageManager:(id)a3 monochromatic:(BOOL)a4;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 size:(struct { unsigned int x0; unsigned int x1; })a1 orientation:(long long)a2 imageManager:(id)a3;
- (id)initWithSize:(struct { unsigned int x0; unsigned int x1; })a0 andColor:(const float *)a1 imageManager:(id)a2;

@end
