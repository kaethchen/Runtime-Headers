@class MLMultiArray, NSSet;

@interface CRLineWrappingClassifierInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *features;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)initWithFeatures:(id)a0;
- (id)featureValueForName:(id)a0;

@end
