@class NSArray, MTREventPath;

@interface MTRPluginEventReportMetric : MTRPluginMetric

@property (retain) MTREventPath *eventPath;
@property (retain) NSArray *eventReport;

+ (id)eventReportMetricForDevice:(id)a0 homeID:(id)a1 eventReport:(id)a2 remoteMessageID:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)submitMetric;
- (id)additionalCoreAnalyticsEventDictionary;

@end
