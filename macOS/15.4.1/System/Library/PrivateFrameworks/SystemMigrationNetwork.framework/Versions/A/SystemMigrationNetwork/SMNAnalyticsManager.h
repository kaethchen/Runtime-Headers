@interface SMNAnalyticsManager : NSObject

+ (id)sharedManager;

- (void)sendEvent:(id)a0 withPayload:(id)a1;
- (void)traceWiFiInfo:(id)a0;

@end
