@class ATXNotificationAndSuggestionDatastore;

@interface ATXNotificationAdjacentSuggestionMetricsLogger : NSObject {
    ATXNotificationAndSuggestionDatastore *_datastore;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatastore:(id)a0;
- (void)logNotificationAdjacentSuggestionMetrics;
- (void)logNotificationAdjacentSuggestionMetricsWithXPCActivity:(id)a0;

@end
