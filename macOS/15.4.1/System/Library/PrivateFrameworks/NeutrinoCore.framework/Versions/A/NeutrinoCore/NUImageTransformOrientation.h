@interface NUImageTransformOrientation : NUImageTransform {
    struct { long long width; long long height; } _inputImageSize;
    struct { long long x; long long y; } _inputImageOrigin;
}

@property (readonly) long long orientation;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (struct CGPoint { double x0; double x1; })transformPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithOrientation:(long long)a0 imageSize:(struct { long long x0; long long x1; })a1;
- (id)initWithOrientation:(long long)a0 imageSize:(struct { long long x0; long long x1; })a1 imageOrigin:(struct { long long x0; long long x1; })a2;
- (id)inverseTransform;
- (BOOL)isEqualToGeometryTransformOrientation:(id)a0;
- (BOOL)isIdentityImageTransform;
- (void)nu_updateDigest:(id)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })transformMatrix:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
