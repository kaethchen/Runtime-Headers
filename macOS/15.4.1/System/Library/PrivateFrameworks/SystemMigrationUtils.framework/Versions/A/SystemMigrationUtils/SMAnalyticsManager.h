@class NSDictionary;

@interface SMAnalyticsManager : NSObject {
    NSDictionary *_status;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)sendEvent:(id)a0 withPayload:(id)a1;
- (void)traceEventOverallResults1_0:(id)a0;
- (void)traceMigrationCompleted:(id)a0;
- (void)traceMigrationTransferStatus:(long long)a0;
- (void)traceODTokenIssuingSuccess:(BOOL)a0 afterRetries:(unsigned long long)a1;
- (void)traceQuarantinedPath:(id)a0;
- (void)tracePostLoginTaskErrors:(id)a0;
- (void)tracePostLoginTaskPerformance:(id)a0;
- (void)traceWiFiInfo:(id)a0;

@end
