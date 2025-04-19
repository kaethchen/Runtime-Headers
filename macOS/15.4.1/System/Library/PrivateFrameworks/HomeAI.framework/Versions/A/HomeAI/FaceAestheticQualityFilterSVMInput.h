@class MLMultiArray, NSSet;

@interface FaceAestheticQualityFilterSVMInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithInput:(id)a0;

@end
