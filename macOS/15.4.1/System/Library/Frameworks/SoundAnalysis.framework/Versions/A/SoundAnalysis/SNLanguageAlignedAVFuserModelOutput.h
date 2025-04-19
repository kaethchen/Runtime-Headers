@class MLMultiArray, NSSet;

@interface SNLanguageAlignedAVFuserModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *fused_embedding;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithFused_embedding:(id)a0;

@end
