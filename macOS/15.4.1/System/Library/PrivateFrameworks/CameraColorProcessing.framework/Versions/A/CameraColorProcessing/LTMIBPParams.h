@class NSDictionary, NSArray, NSString;
@protocol MTLTexture;

@interface LTMIBPParams : NSObject <LTMIBPParams>

@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (nonatomic) BOOL doAdaptiveFaceBiasScaler;
@property (nonatomic) BOOL doHazeEstimation;
@property (nonatomic) BOOL doGlobalCCM;
@property (nonatomic) BOOL computeHDRCurves;
@property (nonatomic) BOOL computeCurvesWoFaceBoost;
@property (nonatomic) BOOL enableAntiAliasing;
@property (nonatomic) BOOL isHighlightCompressionEnabled;
@property (nonatomic) BOOL isAdaptiveHighlightCompressionEnabled;
@property (retain, nonatomic) NSDictionary *validBufferRect;
@property (nonatomic) int optimizationLevel;
@property (nonatomic) BOOL calcGlobalHistOnROI;
@property (nonatomic) BOOL digitalFlash;
@property (nonatomic) BOOL isSIFR;
@property (nonatomic) float ispDGainThreshold;
@property (nonatomic) float adaptiveHCSlope;
@property (retain, nonatomic) NSArray *hazeEstimation;
@property (nonatomic) float evmExpRatio;
@property (retain, nonatomic) NSDictionary *inMetaData;
@property (retain, nonatomic) id<MTLTexture> inRGBImageUInt16Tex;
@property (retain, nonatomic) id<MTLTexture> inLumaTex;
@property (retain, nonatomic) id<MTLTexture> inChromaTex;
@property (retain, nonatomic) id<MTLTexture> inRGBAFloatTex;
@property (retain, nonatomic) NSDictionary *outMetaData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
