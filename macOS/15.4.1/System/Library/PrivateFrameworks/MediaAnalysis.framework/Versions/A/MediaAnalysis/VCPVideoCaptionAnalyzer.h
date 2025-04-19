@class CSUVideoCaptioner, VCPVideoCaptionEncoder, NSString, NSURL, CVNLPVideoCaptioningModel, MAAsset, VCPEspressoV2Data, VCPVideoTransformerBackbone, NSMutableArray, VCPTransforms;

@interface VCPVideoCaptionAnalyzer : VCPVideoAnalyzer {
    VCPVideoCaptionEncoder *_backbone;
    VCPVideoTransformerBackbone *_videoTransformerBackbone;
    VCPTransforms *_transformImage;
    long long _modelType;
    CSUVideoCaptioner *_captioner;
    float *_inputData;
    VCPEspressoV2Data *_inputDataMUB;
    int _inputWidth;
    int _inputHeight;
    int _inputNumFrames;
    int _mubbSampleScale;
    int _skipNumFramesBothEnds;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastProcess;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastDetection;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeStart;
    int _frameIndex;
    int _validFrames;
    BOOL _enoughFrames;
    NSString *_resConfig;
    NSMutableArray *_videoCaptionResult;
    NSMutableArray *_videoSegmentCaptionResult;
    NSMutableArray *_activeFrameIndices;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeEnd;
    CVNLPVideoCaptioningModel *_videoCaptionDecoder;
    NSURL *_videoCaptionEncoder;
    MAAsset *_videoCaptionEncoderAsset;
}

+ (long long)mode;
+ (id)sharedCVNLPCaptionDecoderWithOptions:(id)a0 identifier:(id)a1;
+ (id)sharedCaptionerWithConfig:(id)a0 identifier:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)results;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)configInputBasedOnDevice;
- (int)configVideoCaptionModels;
- (int)copyImage:(struct __CVBuffer { } *)a0 withChannels:(int)a1;
- (int)copyMUBBImage:(struct __CVBuffer { } *)a0 withChannels:(int)a1;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (int)generateCaptionWithEmbedding:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (int)inference:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithModelType:(long long)a0 frameNumber:(unsigned long long)a1;
- (id)initWithModelType:(long long)a0 frameRate:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (id)segmentCaptionResults;

@end
