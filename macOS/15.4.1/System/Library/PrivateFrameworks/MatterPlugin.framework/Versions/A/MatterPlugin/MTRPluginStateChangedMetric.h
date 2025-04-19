@interface MTRPluginStateChangedMetric : MTRPluginMetric

@property unsigned long long state;

+ (id)stateChangedMetricForDevice:(id)a0 homeID:(id)a1 state:(unsigned long long)a2 remoteMessageID:(id)a3;

- (id)additionalCoreAnalyticsEventDictionary;

@end
