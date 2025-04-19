@class MLMultiArray, NSSet;

@interface SGMISaliencyModelFeatureProvider : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *data;
@property (retain, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)featureValueForName:(id)a0;

@end
