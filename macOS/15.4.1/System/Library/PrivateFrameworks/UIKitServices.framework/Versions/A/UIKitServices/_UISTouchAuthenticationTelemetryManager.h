@interface _UISTouchAuthenticationTelemetryManager : NSObject

- (id)initWithQueue:(id)a0;
- (void)enqueueRecordForAnalytics:(id)a0;
- (void)flushEvents;

@end
