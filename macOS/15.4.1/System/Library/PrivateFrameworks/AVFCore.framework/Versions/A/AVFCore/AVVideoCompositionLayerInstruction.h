@class AVVideoCompositionLayerInstructionInternal;

@interface AVVideoCompositionLayerInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {
    AVVideoCompositionLayerInstructionInternal *_layerInstruction;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int trackID;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setCropRectangleRampFromStartCropRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toEndCropRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 selector:(SEL)a3;
- (void)_setCropRectangleRamps:(id)a0;
- (void)_setOpacityRampFromStartOpacity:(float)a0 toEndOpacity:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 selector:(SEL)a3;
- (void)_setOpacityRamps:(id)a0;
- (void)_setTransformRampFromStartTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 toEndTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 selector:(SEL)a3;
- (void)_setTransformRamps:(id)a0;
- (void)_setValuesFromDictionary:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)dictionaryRepresentationWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)getCropRectangleRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startCropRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 endCropRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3;
- (BOOL)getOpacityRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startOpacity:(float *)a1 endOpacity:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3;
- (BOOL)getTransformRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1 endTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3;
- (void)setCropRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setCropRectangleRampFromStartCropRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toEndCropRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (void)setOpacity:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setOpacityRampFromStartOpacity:(float)a0 toEndOpacity:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (void)setTrackID:(int)a0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setTransformRampFromStartTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 toEndTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;

@end
