@interface NFGeneralStatisticsCALogger : NSObject

+ (void)_resetGeneralDeviceStatisticToDefaults;
+ (void)_setupInitValuesForGeneralTransactionStatistics;
+ (void)postAnalyticsGeneralTransactionStatistics;
+ (void)postAnalyticsSetupEndpoints:(unsigned int)a0 totalUnknowntoSE:(unsigned int)a1;
+ (void)postGeneralDeviceStatistics;
+ (void)postPlasticCardEnableStatus:(BOOL)a0 aid:(id)a1;
+ (void)updateAnalyticsGeneralTransactionStatistics:(id)a0;
+ (void)updateGeneralDeviceStatistic:(id)a0;

@end
