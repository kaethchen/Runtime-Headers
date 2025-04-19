@interface TSCH3DRectangleLens : TSCH3DLens

@property (readonly, nonatomic) float width;
@property (readonly, nonatomic) float height;
@property (nonatomic) float left;
@property (nonatomic) float right;
@property (nonatomic) float bottom;
@property (nonatomic) float top;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)normalize;
- (void)deviceNormalize;
- (id)frustumRect;
- (id)narrowByNormalizedBounds:(void *)a0;
- (id)narrowedByNormalizedBounds:(void *)a0;
- (void)setPerPixel:(void *)a0;
- (void)setPerPixelSize:(void *)a0;
- (id)shiftByPercentage:(void *)a0;
- (id)shiftedByPercentage:(void *)a0;

@end
