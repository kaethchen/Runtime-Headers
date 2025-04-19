@interface ATXDayZeroDeterminer : NSObject

+ (BOOL)doesBiomeAppLaunchDataGoBackAtLeastNumberOfDaysAgo:(unsigned long long)a0;
+ (BOOL)isDayZeroByFirstAppLaunchDateWithThresholdDateFromDaysAgo:(unsigned long long)a0;

@end
