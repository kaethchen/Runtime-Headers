@class NSString, NSDictionary, NSData, CIImage, NSNumber;

@interface PISemanticStyleFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputSubjectMatteImage;
@property (retain, nonatomic) CIImage *inputSkinMatteImage;
@property (retain, nonatomic) CIImage *inputSkyMatteImage;
@property (retain, nonatomic) CIImage *inputLinearThumbnailImage;
@property (retain, nonatomic) CIImage *inputGainMapImage;
@property (nonatomic) double inputToneBias;
@property (nonatomic) double inputColorBias;
@property (copy, nonatomic) NSString *inputCast;
@property (nonatomic) double inputIntensity;
@property (copy, nonatomic) NSNumber *inputSceneType;
@property (copy, nonatomic) NSDictionary *inputStatistics;
@property (copy, nonatomic) NSDictionary *inputExtendedStatistics;
@property (nonatomic) double inputBaselineExposure;
@property (copy, nonatomic) NSData *inputTRCData;
@property (copy, nonatomic) NSNumber *inputSRLCurveParameter;
@property (copy, nonatomic) NSData *inputLightMapData;
@property (copy, nonatomic) NSData *inputLinearLightMapData;
@property (copy, nonatomic) NSNumber *inputLightMapWidth;
@property (copy, nonatomic) NSNumber *inputLightMapHeight;
@property (copy, nonatomic) NSNumber *brightnessValue;
@property (copy, nonatomic) NSNumber *tuningType;
@property (copy, nonatomic) NSNumber *baseGain;
@property (copy, nonatomic) NSNumber *faceBasedGlobalExposureBoostRatio;
@property (nonatomic) BOOL useStyleEngine;

+ (id)CMISmartStyleTuningParameterVariantFromKey:(id)a0;
+ (id)_computeAlphaAwareHistogramForImage:(id)a0 context:(id)a1 colorSpace:(struct CGColorSpace { } *)a2 error:(out id *)a3;
+ (id)_computeSmartToneStatsFromHistogram:(id)a0;
+ (id)stylePriorDataForCast:(id)a0 tone:(float)a1 color:(float)a2 intensity:(float)a3 priorStrength:(float)a4;

- (void).cxx_destruct;
- (BOOL)isAvailable;
- (id)outputImage;
- (id)extractDataToDictionary:(id)a0 options:(id)a1 context:(id)a2 colorSpace:(struct CGColorSpace { } *)a3 error:(id *)a4;
- (id)_lightMapImageWithData:(id)a0;
- (id)curveImageWithData:(id)a0;
- (id)gtcKernel;

@end
