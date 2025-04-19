@protocol MapsSuggestionsAppProtectionStatusMonitoring;

@interface MapsSuggestionsRealAppProtectionConnector : NSObject <MapsSuggestionsAppProtectionConnector>

@property (weak, nonatomic) id<MapsSuggestionsAppProtectionStatusMonitoring> delegate;

- (void).cxx_destruct;
- (void)addMonitor:(id)a0;

@end
