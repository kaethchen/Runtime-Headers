@interface FI_TPropertyIconExtractor : FI_IPropertyImageExtractor

@property (nonatomic) double iconSize;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL darkBackground;
@property (readonly, nonatomic) struct IconImageSpec { double x0; double x1; BOOL x2; BOOL x3; BOOL x4; } imageSpec;

+ (id)keyPathsForValuesAffectingImageSpec;

- (id)init;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;

@end
