@class HKHealthStore;

@interface HKSHSleepMetricsEngine : NSObject {
    HKHealthStore *_healthStore;
}

+ (id)_computeStandardDeviationFor:(id)a0;
+ (id)_dateComponentsForInterval:(double)a0 sinceDate:(id)a1 calendar:(id)a2;
+ (id)_firstAsleepSegment:(id)a0;
+ (id)_firstInBedSegment:(id)a0;
+ (id)_firstSegmentMatchingSleepValues:(id)a0 inPeriods:(id)a1;
+ (id)_lastAsleepSegment:(id)a0;
+ (id)_lastInBedSegment:(id)a0;
+ (id)_lastSegmentMatchingSleepValues:(id)a0 inPeriods:(id)a1;
+ (double)_timeIntervalForDate:(id)a0 sinceDate:(id)a1 calendar:(id)a2;
+ (id)sleepMetricsForDaySummaries:(id)a0;
+ (id)sleepMetricsForDaySummaries:(id)a0 inMorningIndexRange:(struct { long long x0; long long x1; })a1;

- (void).cxx_destruct;
- (id)initWithHealthStore:(id)a0;
- (void)fetchSleepMetricsForMorningIndexRange:(struct { long long x0; long long x1; })a0 completion:(id /* block */)a1;

@end
