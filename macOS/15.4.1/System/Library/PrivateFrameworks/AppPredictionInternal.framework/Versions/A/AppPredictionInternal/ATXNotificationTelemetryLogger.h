@class CNContactStore, NSMutableDictionary, ATXDNDModeConfigurationClient, ATXDynamicBreakthroughFeaturesCorrelator, ATXNotificationAndSuggestionDatastore, ATXContactRelationshipsCollector;

@interface ATXNotificationTelemetryLogger : NSObject {
    ATXNotificationAndSuggestionDatastore *_datastore;
    ATXDynamicBreakthroughFeaturesCorrelator *_featuresCorrelator;
    ATXDNDModeConfigurationClient *_modeConfigClient;
    NSMutableDictionary *_summaryMetrics;
    ATXContactRelationshipsCollector *_contactRelationships;
    CNContactStore *_contactStore;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (id)initWithDatastore:(id)a0 featuresCorrelator:(id)a1 modeConfigClient:(id)a2 contactStore:(id)a3;
- (void)logNotificationMetricsFromStartTimestamp:(id)a0 toEndTimestamp:(id)a1 withXPCActivity:(id)a2;
- (void)logNotificationMetricsWithBreakthroughFeaturesFromStartTimestamp:(id)a0 toEndTimestamp:(id)a1 withTelemetryQueryResult:(id)a2 withXPCActivity:(id)a3;
- (void)logNotificationMetricsWithXPCActivity:(id)a0;
- (id)summaryMetricsForActivityType:(unsigned long long)a0;
- (id)userNotificationWithUUID:(id)a0 withTimeStamp:(double)a1 urgency:(long long)a2 fromNotificationStreamWithStartTime:(id)a3 endTime:(id)a4;

@end
