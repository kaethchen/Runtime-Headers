@interface GEOAPUtils : NSObject

+ (int)myAppType;
+ (id)GEOAPCachePath;
+ (id)GEOAPApplicationIdentifier;
+ (void)appTypeForAppId:(id)a0 resultBlock:(id /* block */)a1;
+ (id)currentDailyAggregationRepresentativeString;
+ (id)currentDailyAggregationTimestamp;
+ (id)daemonIdAdditions;
+ (id)daemonSet;
+ (id)dailyAggregationRepresentativeStringFromDate:(id)a0;
+ (id)dailyAggregationTimestampFromDate:(id)a0;
+ (id)dailyAggregationTimestampFromDate:(id)a0 inAggTimestampFormat:(BOOL)a1;
+ (id)firstPartySet;
+ (int)functionalAppGroup;

@end
