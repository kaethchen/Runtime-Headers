@class MLMultiArray, NSSet;

@interface CRFormContentTypeModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *score;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithScore:(id)a0;

@end
