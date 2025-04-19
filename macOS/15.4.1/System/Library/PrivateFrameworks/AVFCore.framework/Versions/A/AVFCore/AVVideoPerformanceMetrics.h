@class AVVideoPerformanceMetricsInternal;

@interface AVVideoPerformanceMetrics : NSObject {
    AVVideoPerformanceMetricsInternal *_performanceMetricsInternal;
}

@property (readonly, nonatomic) long long totalNumberOfFrames;
@property (readonly, nonatomic) long long numberOfDroppedFrames;
@property (readonly, nonatomic) long long numberOfCorruptedFrames;
@property (readonly, nonatomic) long long numberOfFramesDisplayedUsingOptimizedCompositing;
@property (readonly, nonatomic) double totalAccumulatedFrameDelay;
@property (readonly, nonatomic) unsigned long long totalNumberOfVideoFrames;
@property (readonly, nonatomic) unsigned long long numberOfDroppedVideoFrames;
@property (readonly, nonatomic) unsigned long long numberOfCorruptedVideoFrames;
@property (readonly, nonatomic) unsigned long long numberOfDisplayCompositedVideoFrames;
@property (readonly, nonatomic) unsigned long long numberOfNonDisplayCompositedVideoFrames;
@property (readonly, nonatomic) double totalFrameDelay;

- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
