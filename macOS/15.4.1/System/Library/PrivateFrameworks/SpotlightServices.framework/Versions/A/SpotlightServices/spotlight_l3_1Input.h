@class MLMultiArray, NSSet;

@interface spotlight_l3_1Input : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *id_features;
@property (retain, nonatomic) MLMultiArray *dense_features;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithId_features:(id)a0 dense_features:(id)a1;

@end
