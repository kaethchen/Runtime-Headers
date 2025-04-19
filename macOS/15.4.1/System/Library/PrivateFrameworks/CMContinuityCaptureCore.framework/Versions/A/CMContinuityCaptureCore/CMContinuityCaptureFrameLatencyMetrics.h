@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureFrameLatencyMetrics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int *_histogramBuckets;
    BOOL _collectingFinished;
}

@property (readonly, nonatomic) long long uniqueID;
@property (nonatomic) unsigned int sampleCount;
@property (nonatomic) unsigned int minLatency;
@property (nonatomic) unsigned int maxLatency;
@property (nonatomic) unsigned int averageLatency;
@property (retain, nonatomic) NSArray *histogram;
@property (nonatomic) unsigned int startUpLatency;

+ (id)_metricsQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addLatencyNumberInMilliSeconds:(int)a0;
- (void)_addLatencyNumberInMilliSeconds:(int)a0;
- (void)_generateHistogram;
- (void)finishCollectingMetrics;

@end
