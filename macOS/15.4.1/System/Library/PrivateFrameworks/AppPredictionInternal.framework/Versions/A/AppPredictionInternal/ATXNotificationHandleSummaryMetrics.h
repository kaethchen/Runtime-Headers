@class NSMutableDictionary;

@interface ATXNotificationHandleSummaryMetrics : _ATXCoreAnalyticsMetric {
    NSMutableDictionary *_unhandledReceivedNotifications;
    double _rejectedNotificationTotalHandleTime;
    double _acceptedNotificationTotalHandleTime;
}

@property (readonly, nonatomic) double rejectedNotificationAverageHandleTime;
@property (readonly, nonatomic) double acceptedNotificationAverageHandleTime;
@property (readonly, nonatomic) unsigned long long rejectedNotificationCount;
@property (readonly, nonatomic) unsigned long long acceptedNotificationCount;
@property (readonly, nonatomic) unsigned long long notificationsReceivedCount;
@property (readonly, nonatomic) double rejectedNotificationsPercentage;
@property (readonly, nonatomic) double acceptedNotificationsPercentage;
@property (readonly, nonatomic) double unhandledNotificationsPercentage;

- (void).cxx_destruct;
- (id)initWithDimensions:(id)a0;
- (id)metricName;
- (void)handleNotificationEvent:(id)a0;
- (id)coreAnalyticsDictionary;
- (id)popReceiveEventForNotification:(id)a0;
- (void)handleTelemetryResult:(id)a0;

@end
