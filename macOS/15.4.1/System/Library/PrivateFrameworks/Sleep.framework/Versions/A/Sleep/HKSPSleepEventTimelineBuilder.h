@class NSCalendar, HKSPSleepEventTimelineResults, HKSPSleepScheduleModel, NSDate;

@interface HKSPSleepEventTimelineBuilder : NSObject

@property (readonly, nonatomic) HKSPSleepEventTimelineResults *results;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) unsigned long long options;

+ (id)builderWithSleepScheduleModel:(id)a0 date:(id)a1;

- (void).cxx_destruct;
- (void)_adjustSessions;
- (void)_gatherSessions;
- (void)_addSessionToTimelineWithWakeUpDate:(id)a0 bedtimeDate:(id)a1 windDownDate:(id)a2 occurrence:(id)a3;
- (void)_adjustSessionForConfirmedWakeUp;
- (void)_adjustSessionForSnoozedWakeUpAlarm;
- (void)_gatherSessionsForOccurrence:(id)a0 overrideOccurrence:(id)a1;
- (void)_gatherSessionsForValidationForOccurrence:(id)a0 overrideOccurrence:(id)a1;
- (void)_validateSessionAdjustmentForSnoozedWakeUpAlarm;
- (void)_validateSessionAdjustments;
- (id)_windDownDateForBedtimeDate:(id)a0;
- (id)buildTimelineWithOptions:(unsigned long long)a0;
- (id)initWithSleepScheduleModel:(id)a0 date:(id)a1;

@end
