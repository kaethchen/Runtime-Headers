@class HDSampleAggregateCachingSession, HDProfile, NSCalendar, NSString, NSMutableDictionary, HKQuantitySample;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;

@interface HDSleepDaySummaryEnumerator : NSObject {
    HDProfile *_profile;
    HDSampleAggregateCachingSession *_cachingSession;
    NSCalendar *_gregorianCalendar;
    struct { long long start; long long duration; } _morningIndexRange;
    BOOL _ascending;
    unsigned long long _options;
    NSString *_debugIdentifier;
    NSMutableDictionary *_schedulesByWeekday;
    HKQuantitySample *_sleepDurationGoalSample;
    long long _cachedFirstDayOfWeek;
    id<HDStatisticsCollectionCalculatorSourceOrderProvider> _sourceOrderProvider;
    NSMutableDictionary *_adjustedMorningIndexCache;
}

+ (id)sleepAnalysisQueryDescriptorForDateInterval:(id)a0 options:(unsigned long long)a1;
+ (id)sleepTypesQueryDescriptorsForDateInterval:(id)a0 options:(unsigned long long)a1;

- (void).cxx_destruct;
- (BOOL)enumerateWithError:(id *)a0 handler:(id /* block */)a1;
- (id)initWithProfile:(id)a0 cachingSession:(id)a1 gregorianCalendar:(id)a2 morningIndexRange:(struct { long long x0; long long x1; })a3 ascending:(BOOL)a4 options:(unsigned long long)a5 debugIdentifier:(id)a6;

@end
