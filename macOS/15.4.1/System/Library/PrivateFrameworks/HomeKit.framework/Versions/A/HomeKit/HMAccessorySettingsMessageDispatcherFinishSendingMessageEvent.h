@class NSString;

@interface HMAccessorySettingsMessageDispatcherFinishSendingMessageEvent : HMCoreAnalyticsTimedMetricEvent

@property (readonly) NSString *messageName;

- (void).cxx_destruct;
- (id)eventPayload;
- (id)initWithMessageName:(id)a0;

@end
