@interface HKMCPregnancyDatesFactory : NSObject {
    void /* unknown type, empty encoding */ pregnancySample;
    void /* unknown type, empty encoding */ state;
}

@property (class, nonatomic, readonly) long long recentPregnancyEndThresholdInDays;
@property (class, nonatomic, readonly) long long recentPregnancyStartThresholdInDays;

+ (id)calculatePhysiologicalWashoutFromPregnancySample:(id)a0;
+ (id)calculatePregnancyStartForEstimatedDueDate:(id)a0;
+ (long long)estimatedDueDateNumberOfDays;
+ (id)gestationalAgeCompactStringOnDate:(id)a0 pregnancySample:(id)a1;
+ (id)gestationalAgeCompactStringOnDate:(id)a0 pregnancyStartDate:(id)a1 startTimeZoneName:(id)a2;
+ (id)gestationalAgeInComponentsOnDate:(id)a0 pregnancyStartDate:(id)a1 startTimeZoneName:(id)a2;
+ (id)gestationalAgeStringOnDate:(id)a0 pregnancySample:(id)a1;
+ (id)gestationalAgeStringOnDate:(id)a0 pregnancyStartDate:(id)a1 startTimeZoneName:(id)a2;
+ (BOOL)isPregnancyDurationPhysiologicallyPossibleForPregnancyStartDate:(id)a0;
+ (BOOL)isPregnancyDurationPhysiologicallyPossibleForPregnancyStartDate:(id)a0 pregnancyEndDate:(id)a1;
+ (long long)maximumNumberOfWeeksPregnant;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPregnancySample:(id)a0 state:(long long)a1;

@end
