@interface MTRDeviceStorageBehaviorConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL disableStorageBehaviorOptimization;
@property (nonatomic) double reportToPersistenceDelayTime;
@property (nonatomic) double reportToPersistenceDelayTimeMax;
@property (nonatomic) unsigned long long recentReportTimesMaxCount;
@property (nonatomic) double timeBetweenReportsTooShortThreshold;
@property (nonatomic) double timeBetweenReportsTooShortMinThreshold;
@property (nonatomic) double reportToPersistenceDelayMaxMultiplier;
@property (nonatomic) double deviceReportingExcessivelyIntervalThreshold;

+ (id)configurationWithDefaultStorageBehavior;
+ (id)configurationWithReportToPersistenceDelayTime:(double)a0 reportToPersistenceDelayTimeMax:(double)a1 recentReportTimesMaxCount:(unsigned long long)a2 timeBetweenReportsTooShortThreshold:(double)a3 timeBetweenReportsTooShortMinThreshold:(double)a4 reportToPersistenceDelayMaxMultiplier:(double)a5 deviceReportingExcessivelyIntervalThreshold:(double)a6;
+ (id)configurationWithStorageBehaviorOptimizationDisabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)checkValuesAndResetToDefaultIfNecessary;

@end
