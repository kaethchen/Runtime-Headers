@class MLModel;

@interface IMTranscoderImageQualityEstimator : NSObject

@property (class, retain) MLModel *imageQualityEstimatorModel;

+ (double)_entropyForTranscodedImage:(struct CGImageSource { } *)a0;
+ (double)getEntropyForImage:(struct CGImage { } *)a0;
+ (id)getInputImageFeatures:(struct CGImageSource { } *)a0;
+ (id)oneHotEncodeTargetMaxDimFeature:(id)a0 suggestedMaxLength:(int)a1;
+ (double)predictQualityFactor:(id)a0 suggestedMaxLength:(int)a1;
+ (id)standardizeModelInputFeatures:(id)a0;

@end
