@class NSString, LTMGeometryData, LTMComputeRef, HazeEstimation, LTMDriverRef, NSDictionary, LTMExtractMetadata, CMIExternalMemoryResource, FigMetalContext;
@protocol LTMIBPParams, MTLCommandQueue, MTLComputePipelineState;

@interface LTMProcessor : NSObject <LTMImageBufferProcessor> {
    FigMetalContext *_metalContext;
    unsigned long long _allocatorForceSize;
    BOOL _allocatorWireMemory;
    BOOL _allocatorSetupComplete;
    struct sRefDriverInputs { BOOL HROn; unsigned short hrGainDownRatio; unsigned int exposureTime; union uBTColorEntry16 { unsigned short v16; struct uBT88 { unsigned char fractional; unsigned char integer; } v88; } gainAnal; unsigned int gainDigi; float hardIspDGain; float softIspDGain; unsigned short expBias; unsigned short realizedExpBias; unsigned short hdrRatio; unsigned short ev0Ratio; unsigned int overflowDGain; float faceExpRatioFiltered; unsigned short panoExpRatio; BOOL bLTMSingleFrameMode; unsigned char ltmProcMode; unsigned char bracketingMode; unsigned int bracketingExpRatio; union uBTColorEntry16 { unsigned short v16; struct uBT88 { unsigned char fractional; unsigned char integer; } v88; } gainDigiSensor; float luxLevel; BOOL useSpatialCCM; unsigned char channel; BOOL flashStatus; BOOL isHLGMode; float LTMGridConfigWidth; float LTMGridConfigHeight; float LTMGridConfigX; float LTMGridConfigY; unsigned short flashMixPercentage[512]; float flashProjMixWeighting; struct sBTRect { int x; int y; unsigned int width; unsigned int height; } tileStatsRegionInRaw; struct sAWBColorCorrectionMatrix_local { union uBTColorEntry16 { unsigned short v16; struct uBT88 { unsigned char fractional; unsigned char integer; } v88; } coeff[9]; } ccm; BOOL isLEDMainFlashforAWB; struct sBTRGGB16 { union uBTColorEntry16 { unsigned short v16; struct uBT88 { unsigned char fractional; unsigned char integer; } v88; } r; union uBTColorEntry16 { unsigned short v16; struct uBT88 { unsigned char fractional; unsigned char integer; } v88; } gr; union uBTColorEntry16 { unsigned short v16; struct uBT88 { unsigned char fractional; unsigned char integer; } v88; } gb; union uBTColorEntry16 { unsigned short v16; struct uBT88 { unsigned char fractional; unsigned char integer; } v88; } b; } awbGains; struct sBTRGGB16 { union uBTColorEntry16 { unsigned short v16; struct uBT88 { unsigned char fractional; unsigned char integer; } v88; } r; union uBTColorEntry16 { unsigned short v16; struct uBT88 { unsigned char fractional; unsigned char integer; } v88; } gr; union uBTColorEntry16 { unsigned short v16; struct uBT88 { unsigned char fractional; unsigned char integer; } v88; } gb; union uBTColorEntry16 { unsigned short v16; struct uBT88 { unsigned char fractional; unsigned char integer; } v88; } b; } awbGainsSkinOnly; struct sBTRGGB16 { union uBTColorEntry16 { unsigned short v16; struct uBT88 { unsigned char fractional; unsigned char integer; } v88; } r; union uBTColorEntry16 { unsigned short v16; struct uBT88 { unsigned char fractional; unsigned char integer; } v88; } gr; union uBTColorEntry16 { unsigned short v16; struct uBT88 { unsigned char fractional; unsigned char integer; } v88; } gb; union uBTColorEntry16 { unsigned short v16; struct uBT88 { unsigned char fractional; unsigned char integer; } v88; } b; } awbGainsFlashProj; unsigned int fdAWBChistMixFactor; unsigned char awbColorspace; struct sFaceInfo { struct sCIspFDRect { int x; int y; unsigned int width; unsigned int height; } rectArray[10]; unsigned int numFaces; } faceInfo; BOOL forceDisableFaceBoost; int gammaCurve; BOOL useHighlightCompression; BOOL useAdaptiveHighlightCompression; float highlightCompressionGain; BOOL isSIFRFrame; BOOL LTMHazeCorrectionOff; BOOL useBt709; BOOL useHazeCorrection; void /* unknown type, empty encoding */ hazeCorrection; struct LTMTuning { BOOL isValid; float histDampingExponentHighlight; float histDampingExponentMax; float hmaxHeadroom; float maxPaddingRange; float dispRangeActiveRatio; float sceneBlackRatio; float sceneBlackRatioDark; float sceneBgOffset; float desatStrength; float minFlareDark; float shadowSuppressBase; float shadowSuppressMax; float shadowSuppressEITAdj; float minSceneLux; float histSmoothingMax; float smoothingStrength; float dispRangeDarkRatio; float sceneModelSmoothing; float nonFaceRatioFloor; float fstart; float shadowDesat; float darkSceneLux; float ambientViewingLux; float ambientViewingChromaticityX; float ambientViewingChromaticityY; float sceneBlackMax; float dispLum; float dispBlack; } tuningParametersOverride[6]; BOOL useTuningParametersOverride; float faceBiasScaler; } _driverInputMetadata;
    struct sCLRProcHITHStat { unsigned int thumbnailWindow; unsigned short thumbnailEnable[6]; unsigned short thumbnailDownsampleX; unsigned short thumbnailDownsampleY; unsigned int thumbnailTotal; unsigned int localHistWindow; unsigned short localHistEnable; unsigned short localHistBinSize; unsigned short localHistBlockSizeX; unsigned short localHistBlockSizeY; unsigned short localHistStrideX; unsigned short localHistStrideY; unsigned short localHistNumHorBlocks; unsigned short localHistNumVerBlocks; unsigned char localHistCountBitShift; unsigned short globalHistEnable; unsigned int globalHistWindow; void *thumbnailStat; unsigned int thumbnailOffset; unsigned int thumbnailStatSize; void *localHistStat; unsigned int localHistOffset; unsigned int localHistStatSize; void *globalHistStat; unsigned int globalHistOffset; unsigned int globalHistStatSize; unsigned int gridOriginX; unsigned int gridOriginY; unsigned int localHistogramOriginalTilePixelCount; unsigned int localHistLowThreshold; unsigned int localHistHighThreshold; } _procHITHStat;
    unsigned short thumbnailStat[4420];
    unsigned short localHistStat[3264];
    unsigned int globalHistStat[1024];
    struct sLtmComputeInput { float localHist[3072]; float averageLocalHist[64]; float globalHist[1024]; float tMaxArray[48]; float nLumArray[48]; float thumbnailHist[64]; float thumbnailHistEV0[64]; float thumbnailLumaHist[65]; float faceWeightForTone[48]; float sceneLux; float bin0Ratio; float pixelCountRatio; float exposureRatio; float exposureBias; float preBiasExposureRatio; float faceExposureRatio; float darkExposureRatio; float luminanceRatio; float flareScale; float rGainRatio; float bGainRatio; unsigned short gamutSizeIndex; float ccm[9]; float ccmWeights[192]; float ccmMixFactor; float eit; float darkEit; BOOL LTMHazeCorrectionOff; BOOL useBt709; float ltcGridScaleLogLumaThumb[48]; float faceBiasScaler; } _computeInputs;
    struct sLtmComputeMeta { BOOL useLinearLTCs; BOOL useSpatialCCM; BOOL useGlobalCCM; BOOL useDigitalFlash; BOOL useFlash; int gammaCurve; BOOL updateMixLUT; int levelSmoothNumPasses; float levelSmoothCenterWeight; unsigned char channel; struct LTMTuning { BOOL isValid; float histDampingExponentHighlight; float histDampingExponentMax; float hmaxHeadroom; float maxPaddingRange; float dispRangeActiveRatio; float sceneBlackRatio; float sceneBlackRatioDark; float sceneBgOffset; float desatStrength; float minFlareDark; float shadowSuppressBase; float shadowSuppressMax; float shadowSuppressEITAdj; float minSceneLux; float histSmoothingMax; float smoothingStrength; float dispRangeDarkRatio; float sceneModelSmoothing; float nonFaceRatioFloor; float fstart; float shadowDesat; float darkSceneLux; float ambientViewingLux; float ambientViewingChromaticityX; float ambientViewingChromaticityY; float sceneBlackMax; float dispLum; float dispBlack; } tuningParametersOverride[6]; BOOL useTuningParametersOverride; } _computeInputsMetadata;
    struct sLtmComputeOutput { float LTC[3120]; float averageLTC[65]; float globalLUT[257]; float rgbToneCurve[257]; float spatialCCM[5184]; float WMixLUT[257]; float midLuminance; unsigned long long eit; float encodedExpRatio; unsigned char bWMixLUTUpdated : 1; unsigned char bCCMUpdated : 1; unsigned char bLTMUpdated : 1; unsigned char bGlobalLUTUpdated : 1; unsigned char bRgbToneCurveUpdated : 1; unsigned char rsvd : 3; } _computeOutput;
    id<MTLComputePipelineState> _ltmDownsampleYCbCrToRGB;
    id<MTLComputePipelineState> _ltmDownsampleRGBAFloatToRGB;
    id<MTLComputePipelineState> _ltmCompressHighlight;
    id<MTLComputePipelineState> _ltmDehaze;
    id<MTLComputePipelineState> _ltmApplyGlobalCCM;
    LTMGeometryData *_geometryData;
    LTMComputeRef *_computeLTM;
    LTMDriverRef *_driverLTM;
    LTMExtractMetadata *_metadataExtractor;
    HazeEstimation *_hazeEstimator;
    BOOL _enablePreLTMHazeCorrection;
    BOOL _isHazeEstimationEnabled;
}

@property (readonly, nonatomic) id<LTMIBPParams> ltmParams;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (readonly, nonatomic) BOOL supportsExternalMemoryResource;
@property (retain, nonatomic) CMIExternalMemoryResource *externalMemoryResource;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)prewarm;
- (int)finishProcessing;
- (int)process;
- (int)resetState;
- (int)setup;
- (int)prepareToProcess:(unsigned int)a0;
- (id)initWithCommandQueue:(id)a0;
- (int)purgeResources;
- (int)setLTMComputeTuningParams:(struct sRefDriverInputs { BOOL x0; unsigned short x1; unsigned int x2; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x3; unsigned int x4; float x5; float x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned int x11; float x12; unsigned short x13; BOOL x14; unsigned char x15; unsigned char x16; unsigned int x17; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x18; float x19; BOOL x20; unsigned char x21; BOOL x22; BOOL x23; float x24; float x25; float x26; float x27; unsigned short x28[512]; float x29; struct sBTRect { int x0; int x1; unsigned int x2; unsigned int x3; } x30; struct sAWBColorCorrectionMatrix_local { union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x0[9]; } x31; BOOL x32; struct sBTRGGB16 { union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x0; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x1; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x2; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x3; } x33; struct sBTRGGB16 { union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x0; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x1; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x2; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x3; } x34; struct sBTRGGB16 { union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x0; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x1; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x2; union uBTColorEntry16 { unsigned short x0; struct uBT88 { unsigned char x0; unsigned char x1; } x1; } x3; } x35; unsigned int x36; unsigned char x37; struct sFaceInfo { struct sCIspFDRect { int x0; int x1; unsigned int x2; unsigned int x3; } x0[10]; unsigned int x1; } x38; BOOL x39; int x40; BOOL x41; BOOL x42; float x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; struct LTMTuning { BOOL x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; } x48[6]; BOOL x49; float x50; } *)a0 from:(id)a1;
- (id)_applyGlobalCCM:(id)a0 globalCCM:(struct { void /* unknown type, empty encoding */ x0[3]; })a1;
- (id)_compressHighlight:(id)a0;
- (id)_dehaze:(SEL)a0 hazeValues:(id)a1;
- (BOOL)_isOptimized:(int)a0;
- (void)_prepareHighlightCompressionCurve;
- (void)_readDefaultsDehaze;
- (void)_readDefaultsLTMparam;
- (void)_readDefaultsMetalAllocator;
- (id)createIntermediateRGBAMetalTexture:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (id)createLTMComputer;
- (id)createLTMInTextureFromLuma:(id)a0 chroma:(id)a1;
- (id)createLTMInTextureFromRGBAFloatTex:(id)a0;
- (int)createShaders:(id)a0;
- (id)generateLinearRGBATexture;
- (struct sCLRProcHITHStat { unsigned int x0; unsigned short x1[6]; unsigned short x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned char x14; unsigned short x15; unsigned int x16; void *x17; unsigned int x18; unsigned int x19; void *x20; unsigned int x21; unsigned int x22; void *x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; } *)getHITHStat;
- (int)getLTMTuningFromTuningParams:(struct LTMTuning { BOOL x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; } *)a0 from:(id)a1;
- (int)setDehazeTuningParamsFrom:(id)a0;
- (int)setLTMTuningParamsFrom:(id)a0;

@end
