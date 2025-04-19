@class NSString, MLFeatureValue;

@interface MADCoreMLObservation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *featureName;
@property (readonly, nonatomic) MLFeatureValue *featureValue;

+ (id)entryWithFeatureName:(id)a0 featureValue:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFeatureName:(id)a0 featureValue:(id)a1;

@end
