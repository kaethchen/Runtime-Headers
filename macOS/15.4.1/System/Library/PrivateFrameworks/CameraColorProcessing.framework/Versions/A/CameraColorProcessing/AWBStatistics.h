@class NSNumber, FigMetalContext;
@protocol MTLComputePipelineState;

@interface AWBStatistics : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _computeAWBStatsBayerPipelineState;
    id<MTLComputePipelineState> _computeAWBStatsBayerFastPipelineState;
    id<MTLComputePipelineState> _computeAWBStatsQuadraFastPipelineState;
    id<MTLComputePipelineState> _resetMtlBufferPipelineState;
    id<MTLComputePipelineState> _normTileStatsPipelineState;
    id<MTLComputePipelineState> _normWindowStatsPipelineState;
    id<MTLComputePipelineState> _resizeANST;
    id<MTLComputePipelineState> _fitWbTmRGBToANSTInput;
    void *_espressoContext;
    void *_espressoPlan;
    struct { void *plan; int network_index; } _espressoNetwork;
    id<MTLComputePipelineState> _computeAWBStatsPipelineState;
    struct { int layout; unsigned char firstPix; unsigned char greenAverage; unsigned char downsizeRatio; float ispDGain; struct { struct { void /* unknown type, empty encoding */ columns[3]; } coeff; void /* unknown type, empty encoding */ min; void /* unknown type, empty encoding */ max; void /* unknown type, empty encoding */ offsetIn; void /* unknown type, empty encoding */ offsetOut; } ccm; struct { unsigned short lut[257]; void /* unknown type, empty encoding */ gammaOffsetIn; void /* unknown type, empty encoding */ gammaOffsetOut; unsigned short offsetIn; unsigned short offsetOut; int po2CfgMode; BOOL po2CfgExpand; struct { BOOL flipOp; BOOL offOp; BOOL symmetric; int maxCode; int pivot1; unsigned short lutLen; unsigned short startExp; unsigned short spacingStart; unsigned short numIntervalArray[16]; unsigned short log2NumIntervalArrayAdj[16]; } po2CfgDenseLeft; } gam; struct { struct { struct { void /* unknown type, empty encoding */ columns[3]; } coeff; void /* unknown type, empty encoding */ min; void /* unknown type, empty encoding */ max; void /* unknown type, empty encoding */ offsetIn; void /* unknown type, empty encoding */ offsetOut; } lin3x3; void /* unknown type, empty encoding */ scale; } csc; struct { struct { struct { void /* unknown type, empty encoding */ columns[3]; } coeff; void /* unknown type, empty encoding */ min; void /* unknown type, empty encoding */ max; void /* unknown type, empty encoding */ offsetIn; void /* unknown type, empty encoding */ offsetOut; } lin3x3; void /* unknown type, empty encoding */ scale; } csc2; struct { BOOL enable; BOOL countClipEn; unsigned short startX; unsigned short startY; unsigned short endX; unsigned short endY; float offsetC1; float offsetC2; float scaleC1; float scaleC2; unsigned short count[16]; unsigned short yThd[16]; void /* unknown type, empty encoding */ debiasGain; void /* unknown type, empty encoding */ debiasMax; void /* unknown type, empty encoding */ debiasMin; void /* unknown type, empty encoding */ debiasOffset; } colorHist; struct { unsigned char condSel; unsigned char statSel; BOOL countClipEn; int Ymin; int Ymax; int C1min; int C1max; int C2min; int C2max; unsigned int distMax; int offset; int C1delta; int C2delta; } pixFilt[2]; struct { void /* unknown type, empty encoding */ offset; void /* unknown type, empty encoding */ gain; } debiasCfg[2]; struct AWBFastLSCConfig { BOOL enabled; unsigned short gridWidth; unsigned short gridHeight; float gridMaxGain; float modulationWeight; void /* unknown type, empty encoding */ gridIntervalReciprocal; union { void /* unknown type, empty encoding */ vec; struct { unsigned short gr; unsigned short r; unsigned short b; unsigned short gb; } ; } yOffset; unsigned short xCropOffset; unsigned short yCropOffset; } fastLSCCfg; struct { BOOL enable; BOOL bitDepth; int pfSel[2]; int startX; int startY; int endX; int endY; } windows[2]; struct { BOOL bitDepth; int startX; int startY; int endX; int endY; unsigned short horzInt; unsigned short vertInt; } tiles; struct AWBLinearRGBToANSTInputConfig { void /* unknown type, empty encoding */ awbGains; struct { void /* unknown type, empty encoding */ columns[3]; } ccm; unsigned short gtcRatio[257]; unsigned short gtcFinal[257]; float ltmHardGain; } linearRGBToANSTInputCfg; struct { unsigned short startX; unsigned short startY; unsigned short endX; unsigned short endY; } regionOfInterestRect; BOOL skipDemosaic; int digitalFlashBehaviorMode; } _awbStatCfg;
}

@property (retain, nonatomic) NSNumber *digitalFlash;
@property (retain, nonatomic) NSNumber *skipDemosaic;
@property (retain, nonatomic) NSNumber *lscMaxGain;
@property (retain, nonatomic) NSNumber *faceAssistedBehaviorMode;
@property (retain, nonatomic) NSNumber *downsizeFactor;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)configWithRegs:(id)a0;
- (int)_adjustConfigToValidRectInBufferCoords:(id)a0 validRectInSensorReadoutCoords:(id)a1 regionOfInterestRectInBufferCoords:(id)a2;
- (int)_createShaders;
- (int)_loadANSTNetwork;
- (int)_purgeANSTNetwork;
- (int)configWindowsV2:(struct { BOOL x0; BOOL x1; int x2[2]; int x3; int x4; int x5; int x6; } *)a0 metadata:(id)a1 tilesConfig:(id)a2 validRect:(id)a3 regionOfInterestRect:(id)a4;
- (int)configWithModuleConfig:(id)a0 metadata:(id)a1 cameraInfo:(id)a2 awbParams:(id)a3;
- (int)configWithRegs:(id)a0 metadata:(id)a1 cameraInfo:(id)a2;
- (int)configWithSetFile:(id)a0 metadata:(id)a1 cameraInfo:(id)a2;
- (int)process:(id)a0 clipped:(id)a1 lscGainsTex:(id)a2 validRectInBufferCoords:(id)a3 validRectInSensorReadoutCoords:(id)a4 awbStatsBuffer:(id)a5 awbTileStatsConfig:(struct { BOOL x0; int x1; int x2; int x3; int x4; unsigned short x5; unsigned short x6; } *)a6 anstSkinMask:(id)a7 anstSkinMaskData:(id *)a8 skyMaskTex:(id)a9 skyMaskData:(id *)a10 regionOfInterestRectInBufferCoords:(id)a11 downsizeFactor:(unsigned int *)a12;

@end
