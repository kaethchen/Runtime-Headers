@class NSString, MLFeatureValue;

@interface VNCoreMLFeatureValueObservation : VNObservation

@property (readonly, copy, nonatomic) MLFeatureValue *featureValue;
@property (readonly, copy, nonatomic) NSString *featureName;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 featureName:(id)a1 featureValue:(id)a2;
- (id)vn_cloneObject;

@end
