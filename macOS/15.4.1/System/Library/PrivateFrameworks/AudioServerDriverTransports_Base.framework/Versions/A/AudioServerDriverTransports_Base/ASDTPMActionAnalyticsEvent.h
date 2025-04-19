@class NSString;

@interface ASDTPMActionAnalyticsEvent : ASDTPMAction

@property (retain, nonatomic) NSString *eventName;

- (void).cxx_destruct;
- (int)action;
- (id)deviceName;
- (id)eventData;
- (id)initWithConfig:(id)a0 forSequencer:(id)a1;
- (void)sendEventNamed:(id)a0 withData:(id)a1;

@end
