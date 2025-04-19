@class NSArray, NSDictionary, NSString, VKCamera;

@interface VKMapSnapshot : NSObject <NSSecureCoding> {
    unsigned long long _width;
    unsigned long long _height;
    float _elevationScale;
    double _targetPointElevation;
    VKCamera *_vkCamera;
    struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; BOOL x5; } *_displayStyles;
    unsigned long long _displayStylesCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) NSArray *images;
@property (retain, nonatomic) NSDictionary *memoryStats;
@property (retain, nonatomic) NSArray *elevationRasters;
@property (readonly, nonatomic) NSString *colorSpace;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct { double x0; double x1; })coordinateForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)enumerateImagesWithBlock:(id /* block */)a0;
- (struct CGPoint { double x0; double x1; })pointForCoordinate:(struct { double x0; double x1; })a0;
- (id)_initWithImages:(id)a0 displayStyles:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; BOOL x5; } *)a1 displayStylesCount:(unsigned long long)a2 scale:(double)a3 camera:(id)a4;
- (id)_initWithImages:(id)a0 displayStyles:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; BOOL x5; } *)a1 displayStylesCount:(unsigned long long)a2 scale:(double)a3 camera:(id)a4 elevationScale:(float)a5 targetPointElevation:(float)a6 colorSpace:(struct __CFString { } *)a7;
- (id)imageDataInFormat:(unsigned long long)a0;
- (id)imageSurfaceAtIndex:(unsigned long long)a0;
- (id)imageSurfaces;

@end
