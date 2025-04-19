@class NSArray, NSDictionary, NUColorSpace, NURenderNode;

@interface NUVideoPlaybackFrameRequest : NURenderRequest

@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (retain, nonatomic) struct __CVBuffer { } *destinationBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } evaluationTime;
@property (nonatomic) struct { long long numerator; long long denominator; } renderScale;
@property (nonatomic) BOOL isDolbyVision;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameDuration;
@property (nonatomic) float playbackRate;
@property (nonatomic) long long playbackDirection;
@property (retain, nonatomic) NURenderNode *videoRenderPrepareNode;
@property (copy, nonatomic) NSDictionary *videoFrames;
@property (copy, nonatomic) NSDictionary *videoMetadataSamples;
@property (copy, nonatomic) NSArray *videoSampleSlices;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
