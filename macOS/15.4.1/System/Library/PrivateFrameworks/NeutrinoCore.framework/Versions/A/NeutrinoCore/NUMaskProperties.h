@interface NUMaskProperties : NSObject

@property (readonly, nonatomic) double density;
@property (readonly, nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } bounds;
@property (readonly, nonatomic) struct { long long width; long long height; } size;

- (id)init;
- (id)initWithDensity:(double)a0 bounds:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 size:(struct { long long x0; long long x1; })a2;

@end
