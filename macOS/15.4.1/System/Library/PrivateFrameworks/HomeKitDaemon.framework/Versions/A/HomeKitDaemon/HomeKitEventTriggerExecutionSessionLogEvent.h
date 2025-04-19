@class HMDAnalyticsEventTriggerExecutionSessionData;

@interface HomeKitEventTriggerExecutionSessionLogEvent : HMMLogEvent

@property (readonly, nonatomic) HMDAnalyticsEventTriggerExecutionSessionData *analyticsData;

- (void).cxx_destruct;
- (id)initWithStartTime:(double)a0 sessionID:(id)a1;

@end
