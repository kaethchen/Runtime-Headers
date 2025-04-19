@class CMISubjectRelightingANSTSkinToneLevelFilter, FigMetalContext, CMISRLv2Plist, NSMutableData, MTLSharedEventListener, CMISubjectRelightingShaders;
@protocol MTLBuffer, MTLCommandBuffer;

@interface CMISubjectRelightingStage : NSObject {
    FigMetalContext *_metalContext;
    CMISubjectRelightingShaders *_shaders;
    CMISRLv2Plist *_srlV2Plist;
    BOOL _allocateBuffersWithAllocator;
    id<MTLBuffer> _srlGlobalStatsBuffer;
    id<MTLBuffer> _srlFaceStatsBuffer;
    id<MTLCommandBuffer> _lastSRLCommandBuffer;
    BOOL _mitigationNeeded;
    float _curveParameter;
    BOOL _srlInLivePhotos;
    BOOL _forceSrlOnInLivePhotos;
    MTLSharedEventListener *_sharedEventListener;
    CMISubjectRelightingANSTSkinToneLevelFilter *_ANSTfilterSkinToneLevelFilter;
}

@property (readonly, nonatomic) id<MTLBuffer> srlCoeffsMTLBuffer;
@property (readonly, nonatomic) float lastComputedCurveParameter;
@property (readonly, nonatomic) NSMutableData *lastComputedRelightingStats;

+ (int)prewarmShaders:(id)a0;

- (void).cxx_destruct;
- (void)reset;
- (float)curveParameter;
- (id)initWithOptionalMetalCommandQueue:(id)a0;
- (id)initWithMetalContext:(id)a0;
- (void)_copyCoeffsBufferWhenReady:(id)a0;
- (int)_runSubjectRelighting:(int)a0 rgba:(id)a1 luma:(id)a2 chroma:(id)a3 skinMask:(id)a4 personMask:(id)a5 instanceMasks:(id)a6 instanceMaskConfidences:(id)a7 expBias:(float)a8 exifOrientation:(int)a9 srlV2Plist:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; BOOL x22; } *)a10 faceDataFromANST:(id)a11 toneMap:(id)a12 ltmChroma:(id)a13 gammaCurve:(id)a14 numFacesISPDetected:(unsigned long long)a15 isChromaGainAdjusted:(BOOL)a16 inputIsLinear:(BOOL)a17 chromaBias:(float)a18 blackPoint:(id)a19 playBackCurve:(id)a20;
- (unsigned int)getSRLStatus;
- (BOOL)mitigationNeeded;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 label:(id)a2;
- (int)runSRLForLivePhotosWithInputBuffer:(struct __CVBuffer { } *)a0 skinMask:(struct __CVBuffer { } *)a1 personMask:(struct __CVBuffer { } *)a2 instanceMasks:(id)a3 instanceMaskConfidences:(id)a4 skinToneClassification:(id)a5 expBias:(float)a6 exifOrientation:(int)a7 srlV2Plist:(id)a8 faceDataFromANST:(id)a9;
- (int)runSubjectRelightingVersion:(id)a0 toneMap:(id)a1 luma:(id)a2 chroma:(id)a3 ltmChroma:(id)a4 skinMask:(id)a5 personMask:(id)a6 instanceMask0:(id)a7 instanceMask1:(id)a8 instanceMask2:(id)a9 instanceMask3:(id)a10 gammaCurve:(id)a11 instanceMaskConfidences:(id)a12 skinToneClassification:(id)a13 expBias:(float)a14 exifOrientation:(int)a15 numFacesISPDetected:(unsigned long long)a16 faceBoundingBoxesFromISP:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned short x1; unsigned short x2; unsigned short x3; }[10])a17 isChromaGainAdjusted:(BOOL)a18 inputIsLinear:(BOOL)a19 chromaBias:(float)a20 srlV2Plist:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; BOOL x22; })a21 mstmParams:(id)a22 mstmSRLParams:(id)a23 blackPoint:(id)a24 playBackCurve:(id)a25;

@end
