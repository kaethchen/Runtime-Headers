@class MLMultiArray, NSSet;

@interface SNLanguageAlignedAudioEncoderInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *specgram;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithSpecgram:(id)a0;

@end
