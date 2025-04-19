@class NSNumber, NSDate;

@interface HMCoreAnalyticsTimedMetricEvent : HMCoreAnalyticsMetricEvent

@property (copy) NSDate *startedDate;
@property (copy) NSDate *finishedDate;
@property (readonly) NSNumber *duration;

- (void).cxx_destruct;
- (void)finish;
- (void)start;
- (id)eventPayload;
- (id)durationData;

@end
