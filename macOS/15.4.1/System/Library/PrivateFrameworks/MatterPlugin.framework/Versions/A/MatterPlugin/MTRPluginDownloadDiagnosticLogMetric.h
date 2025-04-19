@interface MTRPluginDownloadDiagnosticLogMetric : MTRPluginMetric

@property int clientType;
@property long long logType;

+ (id)downloadDiagnosticMetricForDevice:(id)a0 homeID:(id)a1 clientType:(int)a2 logType:(long long)a3 remoteMessageID:(id)a4;

- (id)additionalCoreAnalyticsEventDictionary;

@end
