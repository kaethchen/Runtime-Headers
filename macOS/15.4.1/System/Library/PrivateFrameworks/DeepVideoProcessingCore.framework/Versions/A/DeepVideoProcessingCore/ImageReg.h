@class SIFTMatcher, SIFTFeatureExtraction, MetalToolBox, NSObject, RansacEstimation, HomographyFlow;
@protocol OS_dispatch_group, MTLDevice, OS_dispatch_queue, MTLTexture, MTLCommandQueue, MTLBuffer;

@interface ImageReg : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    SIFTFeatureExtraction *_featureExtractor;
    SIFTMatcher *_SIFTMatcher;
    RansacEstimation *_RansacEstimation;
    RansacEstimation *ransac_estimation[4];
    MetalToolBox *_toolBox;
    HomographyFlow *_homographyFlow;
    id<MTLBuffer> _keyPoints[2];
    id<MTLBuffer> _closeDesIndex;
    id<MTLBuffer> _descriptors[2];
    id<MTLBuffer> _matches;
    id<MTLBuffer> _X[2];
    id<MTLBuffer> _Y[2];
    int count[2];
    id<MTLBuffer> X1[5];
    id<MTLBuffer> Y1[5];
    id<MTLBuffer> X2[5];
    id<MTLBuffer> Y2[5];
    id<MTLBuffer> flow_match[5];
    id<MTLBuffer> flow_count[5];
    struct _regional_flow_directions { float angle; float variance; struct _regional_range { short min_x; short max_x; short min_y; short max_y; short horizontal; } range; } _prev_quart1;
    struct _regional_flow_directions { float angle; float variance; struct _regional_range { short min_x; short max_x; short min_y; short max_y; short horizontal; } range; } _prev_quart2;
    struct _regional_flow_directions { float angle; float variance; struct _regional_range { short min_x; short max_x; short min_y; short max_y; short horizontal; } range; } _prev_quart3;
    struct _regional_flow_directions { float angle; float variance; struct _regional_range { short min_x; short max_x; short min_y; short max_y; short horizontal; } range; } _prev_quart4;
    BOOL _flowDerivedSetup;
    long long _processedFrameNum;
    struct __CVBuffer { } *_grayBuf0;
    struct __CVBuffer { } *_grayBuf1;
    id<MTLTexture> _grayBuf0Texture;
    id<MTLTexture> _grayBuf1Texture;
    id<MTLTexture> _image0Texture;
    id<MTLTexture> _image1Texture;
    float _xscaleFactor;
    float _yscaleFactor;
    BOOL _SIFTSetup;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_concurrent_queue;
}

@property (nonatomic) BOOL streamingMode;
@property (nonatomic) BOOL refreshCalculation;
@property (nonatomic) BOOL testingMode;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)Printkpt1:(struct _keyPointHdr { float x0; float x1; float x2; float x3; int x4; int x5; float x6; float x7; float x8; } *)a0 count:(int)a1;
- (void)freeResourceFlowBasedHomography;
- (void)PrintMatchKptDistance:(struct _matchPair { int x0; int x1; float x2; } *)a0 matchCount:(int)a1 kpt1:(struct _keyPointHdr { float x0; float x1; float x2; float x3; int x4; int x5; float x6; float x7; float x8; } *)a2 kpt2:(struct _keyPointHdr { float x0; float x1; float x2; float x3; int x4; int x5; float x6; float x7; float x8; } *)a3 frameId:(int)a4;
- (BOOL)allocResource;
- (BOOL)allocResourceFlowBasedHomography;
- (long long)asyncRansacFromMatchedPair:(id)a0 matchCount:(id)a1 homography:(struct _xform2D { struct { void /* unknown type, empty encoding */ x0[3]; } x0; float x1; int x2; int x3; int x4; } *)a2 index:(int)a3 height:(int)a4 width:(int)a5;
- (void)checkRun2RunFromMatch1:(struct _matchPair { int x0; int x1; float x2; } *)a0 match2:(struct _matchPair { int x0; int x1; float x2; } *)a1 matchCount1:(int)a2 matchCount2:(int)a3 frameId:(int)a4;
- (struct _xform2D { struct { void /* unknown type, empty encoding */ x0[3]; } x0; float x1; int x2; int x3; int x4; })extractHomographyFromFlow:(struct __CVBuffer { } *)a0 depth:(struct __CVBuffer { } *)a1 im1:(struct __CVBuffer { } *)a2 im2:(struct __CVBuffer { } *)a3 targetResolution:(struct CGSize { double x0; double x1; })a4 currentPairFlow:(BOOL)a5;
- (struct _xform2D { struct { void /* unknown type, empty encoding */ x0[3]; } x0; float x1; int x2; int x3; int x4; })extractHomographyFromPrev:(id)a0 ToCurr:(id)a1;
- (struct _xform2D { struct { void /* unknown type, empty encoding */ x0[3]; } x0; float x1; int x2; int x3; int x4; })extractHomographyFromPrev:(id)a0 ToCurr:(id)a1 calculateIndex:(int)a2;
- (void)filterMatchedCnadidateKpt1:(struct _keyPointHdr { float x0; float x1; float x2; float x3; int x4; int x5; float x6; float x7; float x8; } *)a0 kpt2:(struct _keyPointHdr { float x0; float x1; float x2; float x3; int x4; int x5; float x6; float x7; float x8; } *)a1 count1:(int)a2 count2:(int)a3 closedDesIndex:(struct _closedDesIndex { unsigned int x0[1000]; int x1; } *)a4;
- (void)freeResource;
- (void)getHomographyWithFlowMatches_async:(struct _flow_matchPair { float x0; float x1; float x2; float x3; float x4; } *)a0 matchCount:(int)a1 imageDim:(unsigned long long)a2 imageDim:(unsigned long long)a3 index:(int)a4 homoMatrix:(struct _xform2D { struct { void /* unknown type, empty encoding */ x0[3]; } x0; float x1; int x2; int x3; int x4; } *)a5;
- (struct _xform2D { struct { void /* unknown type, empty encoding */ x0[3]; } x0; float x1; int x2; int x3; int x4; })getHomographyWithMatches:(struct _matchPair { int x0; int x1; float x2; } *)a0 matchCount:(int)a1 keypoints1:(struct _keyPointHdr { float x0; float x1; float x2; float x3; int x4; int x5; float x6; float x7; float x8; } *)a2 Keypoints2:(struct _keyPointHdr { float x0; float x1; float x2; float x3; int x4; int x5; float x6; float x7; float x8; } *)a3 imageDim:(unsigned long long)a4 imageDim:(unsigned long long)a5;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1 flowDerivedHomography:(BOOL)a2;
- (id)initWithSubmodules:(id)a0 WithDevice:(id)a1 commandQueue:(id)a2;
- (id)initWithSubmodules:(id)a0 WithDevice:(id)a1 commandQueue:(id)a2 flowDerivedHomography:(BOOL)a3;
- (struct { void /* unknown type, empty encoding */ x0[3]; })normalizeHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (void)preProcessInput:(id)a0 outputGray:(id)a1;
- (long long)preprocessFirst:(struct __CVBuffer { } *)a0 warpedFirst:(struct __CVBuffer { } *)a1 withHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a2;
- (long long)preprocessFramesFromImage0:(struct __CVBuffer { } *)a0 Image1:(struct __CVBuffer { } *)a1;
- (struct _xform2D { struct { void /* unknown type, empty encoding */ x0[3]; } x0; float x1; int x2; int x3; int x4; })registerImage0:(struct __CVBuffer { } *)a0 toImage1:(struct __CVBuffer { } *)a1 Normalize:(BOOL)a2;
- (BOOL)setupResourcesWithFlowDerivedHomography:(BOOL)a0;

@end
