@class NSString;

@interface HMAccessorySettingsMessageDispatcherStartSendingMessageEvent : HMCoreAnalyticsMetricEvent

@property (readonly, copy) NSString *messageName;
@property (readonly, copy) NSString *updateKeyPath;

- (void).cxx_destruct;
- (id)eventPayload;
- (id)initWithMessageName:(id)a0 updateKeyPath:(id)a1;

@end
