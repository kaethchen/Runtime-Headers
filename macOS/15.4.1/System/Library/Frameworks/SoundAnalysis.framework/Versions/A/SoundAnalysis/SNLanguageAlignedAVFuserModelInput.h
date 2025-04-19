@class MLMultiArray, NSSet;

@interface SNLanguageAlignedAVFuserModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *vision_embedding;
@property (retain, nonatomic) MLMultiArray *audio_embedding;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithVision_embedding:(id)a0 audio_embedding:(id)a1;

@end
