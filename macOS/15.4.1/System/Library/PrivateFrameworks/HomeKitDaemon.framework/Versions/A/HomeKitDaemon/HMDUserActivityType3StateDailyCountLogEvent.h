@class NSString, NSDictionary, NSUUID;

@interface HMDUserActivityType3StateDailyCountLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) unsigned long long totalManualScheduleUpdateCount;
@property (readonly, nonatomic) unsigned long long totalAutomaticScheduleStateUpdateCount;
@property (readonly, nonatomic) unsigned long long totalManualFocusUpdateCount;
@property (readonly, nonatomic) unsigned long long enterType5ByManualScheduleUpdateCount;
@property (readonly, nonatomic) unsigned long long enterType5ByAutomaticScheduleStateUpdateCount;
@property (readonly, nonatomic) unsigned long long enterType5ByManualFocusUpdateCount;
@property (readonly, nonatomic) unsigned long long enterTransitionByManualScheduleUpdateCount;
@property (readonly, nonatomic) unsigned long long enterTransitionByAutomaticScheduleStateUpdateCount;
@property (readonly, nonatomic) unsigned long long enterTransitionByManualFocusUpdateCount;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTotalManualScheduleUpdateCount:(unsigned long long)a0 totalAutomaticScheduleStateUpdateCount:(unsigned long long)a1 totalManualFocusUpdateCount:(unsigned long long)a2 enterType5ByManualScheduleUpdateCount:(unsigned long long)a3 enterType5ByAutomaticScheduleStateUpdateCount:(unsigned long long)a4 enterType5ByManualFocusUpdateCount:(unsigned long long)a5 enterTransitionByManualScheduleUpdateCount:(unsigned long long)a6 enterTransitionByAutomaticScheduleStateUpdateCount:(unsigned long long)a7 enterTransitionByManualFocusUpdateCount:(unsigned long long)a8;

@end
