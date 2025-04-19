@class MLMultiArray, NSSet;

@interface SNLanguageAlignedAudioEncoderOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *embedding;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithEmbedding:(id)a0;

@end
