@protocol HMDHouseholdMetricsDataSource;

@interface HMDMetricsAccessoryDetailsManager : HMFObject <HMDHouseholdMetricsLogEventFactory>

@property (readonly, weak, nonatomic) id<HMDHouseholdMetricsDataSource> dataSource;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (id)householdMetricsLogEventFactory;
- (id)accessoryCategoryLogEventsForHomeWithUUID:(id)a0;
- (void)deleteCountersAfterDate:(id)a0;
- (void)deleteCountersBeforeDate:(id)a0;
- (id)logEventsPopulatedForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;

@end
