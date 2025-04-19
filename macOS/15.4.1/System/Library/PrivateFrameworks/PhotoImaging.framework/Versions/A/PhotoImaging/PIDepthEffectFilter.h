@class CIImage, NSNumber;

@interface PIDepthEffectFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputMatte;
@property (retain, nonatomic) CIImage *inputBlurMap;
@property (retain, nonatomic) CIImage *inputGainMap;
@property (retain, nonatomic) NSNumber *inputGainMapIsLinear;
@property (retain, nonatomic) NSNumber *inputAperture;
@property (retain, nonatomic) id inputShape;
@property (retain, nonatomic) id inputDepthMetadata;
@property (retain, nonatomic) id inputGainMapMetadata;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputLumaNoiseScale;
@property (retain, nonatomic) NSNumber *inputBestHairQuality;

- (void).cxx_destruct;
- (id)outputImage;

@end
