@interface IAServerStats : NSObject

+ (void)logShutdown;
+ (void)logStart;
+ (void)reportConnectionStatusSuccessful:(BOOL)a0;
+ (void)reportDailyStats;

@end
