@interface WFBitmapContext : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGContext { } *CGContext;

+ (id)HDRCapableContextWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (id)contextWithDeviceScreenScaleAndSize:(struct CGSize { double x0; double x1; })a0;
+ (id)contextWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (id)contextWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 flipped:(BOOL)a2;
+ (id)currentContextWithScale:(double)a0;

- (void)dealloc;
- (id)image;
- (void)becomeCurrent;
- (void)resignCurrent;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 opaque:(BOOL)a1 scale:(double)a2 colorspace:(struct CGColorSpace { } *)a3 hdrCapable:(BOOL)a4;
- (id)imageWithOrientation:(unsigned int)a0;
- (id)initWithCGContext:(struct CGContext { } *)a0 scale:(double)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 opaque:(BOOL)a1 scale:(double)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 opaque:(BOOL)a1 scale:(double)a2 colorspace:(struct CGColorSpace { } *)a3;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 opaque:(BOOL)a1 scale:(double)a2 colorspace:(struct CGColorSpace { } *)a3 flipped:(BOOL)a4;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 opaque:(BOOL)a1 scale:(double)a2 colorspace:(struct CGColorSpace { } *)a3 flipped:(BOOL)a4 hdrCapable:(BOOL)a5;

@end
