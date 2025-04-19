@class CIImage, NSString, NSNumber;

@interface PIPortraitEffectFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputFullSizeImage;
@property (retain, nonatomic) CIImage *inputDisparity;
@property (retain, nonatomic) CIImage *inputMatte;
@property (retain, nonatomic) CIImage *inputBlurMap;
@property (retain, nonatomic) CIImage *inputFaceMask;
@property (retain, nonatomic) CIImage *inputHairMask;
@property (retain, nonatomic) CIImage *inputTeethMask;
@property (retain, nonatomic) CIImage *inputDepthMap;
@property (retain, nonatomic) NSString *inputKind;
@property (retain, nonatomic) NSNumber *inputVersion;
@property (retain, nonatomic) id inputFaceLandmarkArray;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputGenerateSpillMatte;
@property (retain, nonatomic) NSNumber *inputStrength;
@property (retain, nonatomic) NSNumber *inputOneShot;

+ (id)remapPortraitV2Strength:(id)a0 portraitEffectKind:(id)a1;

- (void).cxx_destruct;
- (id)outputImage;

@end
