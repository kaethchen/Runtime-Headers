@class BiasEstimatorOutputs, BiasEstimatorFeatures;

@interface UWBSignalFeatures : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) BiasEstimatorFeatures *inputFeatures;
@property (copy, nonatomic) BiasEstimatorOutputs *outputs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUWBSignalFeatures:(id)a0;
- (id)orderedBiasEstimatorFeatutes;

@end
