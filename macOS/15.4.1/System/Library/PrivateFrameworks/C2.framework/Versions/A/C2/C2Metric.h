@interface C2Metric : NSObject

+ (id)generateDeviceInfo;
+ (id)generateError:(id)a0;
+ (id)generateGenericEventWithName:(id)a0 genericMetricType:(long long)a1 startTime:(id)a2 endTime:(id)a3 attributes:(id)a4;

@end
