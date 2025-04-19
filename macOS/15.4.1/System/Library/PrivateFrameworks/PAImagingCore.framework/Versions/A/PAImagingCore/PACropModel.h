@interface PACropModel : NSObject <NSCopying> {
    struct Vector2d { double X; double Y; } _imageCenter;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
}

@property (readonly) struct CGSize { double width; double height; } masterImageSize;
@property long long orientation;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRect;
@property (nonatomic) double straightenAngle;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; } aspectRatio;
@property (readonly) BOOL hasCrop;
@property (readonly) unsigned long long hitVertexID;
@property (nonatomic) BOOL isAutoCrop;

+ (struct { unsigned long long x0; unsigned long long x1; })freeFormAspectRatio;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id).cxx_construct;
- (void)reset;
- (struct { unsigned long long x0; unsigned long long x1; })originalAspectRatio;
- (BOOL)_hasDefaultValues;
- (unsigned long long)setForZoomCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 newCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_anchorAlignedRectFromCandidate:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAnchor:(struct CGPoint { double x0; double x1; })a1;
- (double)_currentAspectAsDouble:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct { unsigned long long x0; unsigned long long x1; })_currentAspectRatio:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_debugPrintHitMask;
- (void)_debugPrintHitMask:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultCropRect;
- (struct Vector2d { double x0; double x1; })_defaultImageCenter;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_expandedCropRectForZoom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 candidateRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct Quad2d { struct Vector2d { double x0; double x1; } x0; struct Vector2d { double x0; double x1; } x1; struct Vector2d { double x0; double x1; } x2; struct Vector2d { double x0; double x1; } x3; })_getBoundingQuad;
- (unsigned long long)_hitMaskFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_hitMaskFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTol:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_integralCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 straightenAngle:(double)a1 anchorPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)_setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 anchor:(struct CGPoint { double x0; double x1; })a1;
- (void)_setCropRectWithConstantSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setToDefaultValues;
- (BOOL)aspectRatioIsFreeForm;
- (BOOL)aspectRatioIsOriginal;
- (BOOL)canGrowCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 constrainWithAnchorPoint:(struct CGPoint { double x0; double x1; })a1 strict:(BOOL)a2 withTol:(double)a3;
- (unsigned long long)constrainedMoveCropRectBy:(struct CGVector { double x0; double x1; })a0;
- (unsigned long long)constrainedMoveCropRectBy:(struct CGVector { double x0; double x1; })a0 strict:(BOOL)a1;
- (unsigned long long)constrainedMoveCropRectBy:(struct CGVector { double x0; double x1; })a0 strict:(BOOL)a1 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)imageContainsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTol:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })integralCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEqualToCropModel:(id)a0;
- (void)makeCurrentAspectRatioFreeForm;
- (void)makeCurrentFreeFormAspectFixed;
- (unsigned long long)setAspectRatio:(struct { unsigned long long x0; unsigned long long x1; })a0 constrainCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withTargetArea:(double)a2;
- (unsigned long long)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 constrainWithAnchorPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 newCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 constrainWithAnchorPoint:(struct CGPoint { double x0; double x1; })a2;
- (unsigned long long)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 newCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 constrainWithAnchorPoint:(struct CGPoint { double x0; double x1; })a2 strict:(BOOL)a3;
- (struct Quad2d { struct Vector2d { double x0; double x1; } x0; struct Vector2d { double x0; double x1; } x1; struct Vector2d { double x0; double x1; } x2; struct Vector2d { double x0; double x1; } x3; })_getBoundingQuadFromAngle:(double)a0;
- (struct Quad2d { struct Vector2d { double x0; double x1; } x0; struct Vector2d { double x0; double x1; } x1; struct Vector2d { double x0; double x1; } x2; struct Vector2d { double x0; double x1; } x3; })_getBoundingQuadFromAngle:(double)a0 withExpansionTol:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 newCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 straightenAngle:(double)a2 constrainWithAnchorPoint:(struct CGPoint { double x0; double x1; })a3 strict:(BOOL)a4 hitVertexId:(unsigned long long *)a5;
- (id)initWithMasterImageSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1;
- (unsigned long long)setStraightenAngle:(double)a0 constrainCropRectWithTargetArea:(double)a1;
- (unsigned long long)setStraightenAngle:(double)a0 constrainCropRectWithTargetArea:(double)a1 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 startAngle:(double)a3;

@end
