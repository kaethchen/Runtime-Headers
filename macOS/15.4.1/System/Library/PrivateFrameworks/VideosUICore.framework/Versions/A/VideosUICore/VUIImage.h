@class NSURL, NSData, NSString;

@interface VUIImage : NSObject {
    struct CGImage { } *_image;
    struct CGImageSource { } *_imageSource;
    double _imageWidth;
    double _imageHeight;
    BOOL _enableCache;
    BOOL _cacheImmediately;
    NSURL *_imageURL;
    NSData *_imageData;
    NSString *_imageType;
    BOOL _imageBufferInMemory;
}

@property (readonly, nonatomic) int orientation;
@property (nonatomic) BOOL rotationEnabled;

+ (id)imageWithData:(id)a0;
+ (id)imageWithURL:(id)a0;
+ (id)imageWithPath:(id)a0;
+ (id)imageWithCGImageRef:(struct CGImage { } *)a0 preserveAlpha:(BOOL)a1;
+ (id)imageWithPath:(id)a0 cacheImmediately:(BOOL)a1;
+ (id)imageWithRotationFromPath:(id)a0;
+ (id)imageWithRotationFromURL:(id)a0;
+ (id)imageWithURL:(id)a0 cacheImmediately:(BOOL)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithURL:(id)a0;
- (struct CGImage { } *)image;
- (id)imageType;
- (float)aspectRatio;
- (BOOL)hasAlpha;
- (struct CGSize { double x0; double x1; })pixelBounds;
- (BOOL)isPowerOfTwo;
- (id)uiImage;
- (BOOL)enableCache;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setEnableCache:(BOOL)a0;
- (id)initWithCGImageRef:(struct CGImage { } *)a0 exifOrientation:(int)a1 preserveAlpha:(BOOL)a2;
- (id)_initWithCGImageSourceRotationEnabled:(struct CGImageSource { } *)a0;
- (void)_initializeCGImageWithRotation;
- (id)initWithURL:(id)a0 cacheImmediately:(BOOL)a1;
- (BOOL)isImageBufferInMemory;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })largestSquareRect;
- (BOOL)sourceRequiresRotation;
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)a0;

@end
