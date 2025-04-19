@class NSImage, NSValue, NSDate, NSLock;

@interface KHImage : NSObject {
    NSLock *_drawingLock;
}

@property (readonly, nonatomic) NSImage *NSImage;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } bitmapSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) NSValue *locationCoordinates;

+ (id)imageWithCGImage:(struct CGImage { } *)a0;
+ (id)imageWithContentsOfFile:(id)a0;
+ (id)imageWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(unsigned long long)a2;
+ (id)imageWithNSImage:(id)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })contentTransformForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
+ (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 forOrientation:(unsigned long long)a1;
+ (id)imageWithData:(id)a0 minimalSize:(struct CGSize { double x0; double x1; })a1 orientation:(unsigned long long)a2;
+ (long long)subsampleFactorForImageSize:(struct CGSize { double x0; double x1; })a0 targetSize:(struct CGSize { double x0; double x1; })a1;

- (void)dealloc;
- (id)description;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(unsigned long long)a2;
- (id)initWithNSImage:(id)a0;
- (void)flipHorizontally;
- (void)flipVertically;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (id)initWithData:(id)a0 minimalSize:(struct CGSize { double x0; double x1; })a1 orientation:(unsigned long long)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })orientationTransformForLayerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(BOOL)a1;
- (id)scaledImageWithPixelSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)writeImageRepresentationForType:(id)a0 toURL:(id)a1 options:(id)a2;
- (BOOL)writeJPEGRepresentationToURL:(id)a0;
- (BOOL)writePNGRepresentationToURL:(id)a0;

@end
