@interface AVExposureBiasRange : NSObject

@property (readonly, nonatomic) float minExposureBias;
@property (readonly, nonatomic) float maxExposureBias;

+ (id)exposureBiasRangeWithMinExposureBias:(float)a0 maxExposureBias:(float)a1;

- (id)description;
- (BOOL)containsExposureBias:(float)a0;
- (id)initWithMinExposureBias:(float)a0 maxExposureBias:(float)a1;

@end
