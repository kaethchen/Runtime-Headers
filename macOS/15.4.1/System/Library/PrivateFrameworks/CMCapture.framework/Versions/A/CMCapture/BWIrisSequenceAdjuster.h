@class NSArray, NSMutableDictionary, NSMutableArray, BWMotionDataPreserver;

@interface BWIrisSequenceAdjuster : NSObject {
    NSMutableArray *_discontinuities;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstIrisAudioOffset;
    NSMutableArray *_interleavingQueues;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _nextAdjustedVideoTime;
    unsigned int *_mediaTypes;
    NSMutableArray *_timeSkews;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _masterMovieOriginalStartTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastVideoAdjustedTime;
    BWMotionDataPreserver *_motionDataPreserver;
    BOOL _generateIFrames;
    NSArray *_attachedMediaKeysToPreserve;
    NSMutableDictionary *_preservedAttachedMediaSbufByKeys;
}

@property (nonatomic) int audioOffsetForOriginalStillImageTimeMaximumFrameLatency;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } masterMovieOriginalStartTime;
@property (readonly) BOOL readyToReleaseAudio;
@property (readonly) unsigned long long maximumNumberOfPreDiscontinuityFramesNeededToSatisfyAllDropFrameRecipes;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } previewFrameDuration;

+ (void)initialize;

- (void)dealloc;
- (void)reset;
- (void)adjustMovieInfoTimes:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })adjustedTimeForStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })adjustedTimeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })audioOffsetForOriginalStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct opaqueCMSampleBuffer { } *)dequeueAndRetainAdjustedSampleBufferForMediaTypeWithIndex:(long long)a0;
- (BOOL)discontinuityExistsBetweenCurrentPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 previousPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forMediaTypeWithIndex:(long long)a1;
- (void)enqueueVideoBufferTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 nativeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 isBracketFrame:(BOOL)a2 isSISFrame:(BOOL)a3;
- (id)initWithMediaTypes:(id)a0 visMotionMetadataPreloadingEnabled:(BOOL)a1 generateIFrames:(BOOL)a2 attachedMediaKeysToPreserve:(id)a3;

@end
