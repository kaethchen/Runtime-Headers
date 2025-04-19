@interface DADeviceAccessAnalytics

+ (void /* unknown type, empty encoding */)initialize;
+ (void)markSessionActivationForPid:(id)a0 atTime:(id)a1;
+ (void)markSessionInvalidationForPid:(id)a0 atTime:(id)a1;
+ (void)markState:(long long)a0 deviceID:(id)a1 shared:(BOOL)a2 discovery:(id)a3 flags:(unsigned long long)a4 sourceApp:(long long)a5 atTime:(id)a6 errorCode:(unsigned long long)a7;
+ (void)sendAnalytics:(id)a0 forEvent:(id)a1;
+ (void)sendAnalyticsInfo:(id)a0 forEvent:(id)a1 withDeviceIdentifier:(id)a2;

@end
