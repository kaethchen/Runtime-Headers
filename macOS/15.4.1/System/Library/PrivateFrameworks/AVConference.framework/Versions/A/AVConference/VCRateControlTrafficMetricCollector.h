@class AVCStatisticsCollector, NSObject;
@protocol OS_dispatch_source;

@interface VCRateControlTrafficMetricCollector : NSObject {
    struct tagVCRateControlTrafficMetrics { unsigned long long bytesInFlights; unsigned long long senderTxBitrate; unsigned long long receiverTxBitrate; } _trafficMetrics;
    NSObject<OS_dispatch_source> *_trafficMetricSource;
    void *_mediaController;
    AVCStatisticsCollector *_statisticsCollector;
    BOOL _isStopped;
}

- (void)dealloc;
- (void)calculateTrafficMetrics;
- (id)initWithMediaController:(void *)a0 statisticsCollector:(id)a1;
- (void)startVCRateControlTrafficMetricCollector;
- (void)stopVCRateControlTrafficMetricCollector;

@end
