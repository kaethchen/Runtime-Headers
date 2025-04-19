@class BSMutableIntegerMap, NSObject;
@protocol OS_dispatch_queue;

@interface _UISTouchAuthenticationDurationBasedTelemetryManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BSMutableIntegerMap *_recordMap;
}

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)enqueueRecordForAnalytics:(id)a0;
- (void)flushRecordsWithIdentifier:(long long)a0;
- (void)_queue_flushRecordsWithIdentifier:(long long)a0;
- (void)_queue_processRecord:(id)a0;
- (void)_reportEventRecordToCoreAnalyticsIfNecessary:(id)a0;
- (void)_reportRecordToCoreAnalytics:(id)a0;
- (double)minimumDurationForReporting;

@end
