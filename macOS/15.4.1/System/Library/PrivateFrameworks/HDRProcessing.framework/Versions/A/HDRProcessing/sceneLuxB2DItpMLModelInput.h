@class MLMultiArray, NSSet;

@interface sceneLuxB2DItpMLModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *feature_vector;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithFeature_vector:(id)a0;

@end
