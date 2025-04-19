@interface ATXAppPredictionDataHarvester : NSObject

+ (id)_generateLoggingDictionaryFromPredictionItem:(id)a0 itemIndex:(unsigned long long)a1 itemOutcome:(unsigned long long)a2 sessionOutcome:(unsigned long long)a3 sessionUUID:(id)a4;
+ (void)_sendToCoreAnalytics:(id)a0;
+ (void)harvestDataFromPredictionItem:(id)a0 itemIndex:(unsigned long long)a1 itemOutcome:(unsigned long long)a2 sessionOutcome:(unsigned long long)a3 sessionUUID:(id)a4;

@end
