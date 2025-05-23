@class HKSleepDaySummaryQueryConfiguration;

@interface HDSleepDaySummaryQueryServer : HDQueryServer {
    HKSleepDaySummaryQueryConfiguration *_configuration;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)objectTypes;
- (id)_newCachingSessionWithProfile:(id)a0 cachingIdentifier:(id)a1 sourceEntity:(id)a2 queryDescriptor:(id)a3 cachedClass:(Class)a4 queryInterval:(id)a5 anchorDate:(id)a6 intervalComponents:(id)a7 timeIntervalToBucketIndex:(id /* block */)a8;
- (id)_newGregorianCalendar;
- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;

@end
