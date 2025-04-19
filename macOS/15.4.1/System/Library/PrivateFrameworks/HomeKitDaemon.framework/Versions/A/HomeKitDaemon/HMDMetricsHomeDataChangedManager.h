@class NSObject, NSString, NSNotificationCenter, HMMDateProvider, HMDEventCountersManager;
@protocol OS_dispatch_queue, HMDCurrentResidentDeviceDataSource;

@interface HMDMetricsHomeDataChangedManager : HMFObject <HMFLogging, HMDHouseholdDistributedMetricsLogEventFactory>

@property (readonly, weak, nonatomic) HMDEventCountersManager *countersManager;
@property (readonly, weak, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, weak, nonatomic) id<HMDCurrentResidentDeviceDataSource> currentHomeDataSource;
@property (readonly, weak, nonatomic) HMMDateProvider *dateProvider;
@property (readonly) unsigned long long maxNumberEventsToReport;
@property (readonly, nonatomic) BOOL started;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)householdMetricsLogEventFactory;
- (void)_handleChangeSetSummary:(id)a0 homeUUID:(id)a1;
- (void)_handleGeneratedHomeDataChangedNotification:(id)a0;
- (void)_handleHDCDueToBecamePrimaryForHome:(id)a0;
- (void)_handleHomeDataChangedReasonBecamePrimaryLogEvent:(id)a0 becamePrimaryHouseholdLogEventsByName:(id)a1 homeUUID:(id)a2;
- (void)_handleHomeDataChangedReasonInsertedLogEvent:(id)a0 insertedHouseholdLogEventsByName:(id)a1 homeUUID:(id)a2;
- (void)_handleHomeDataChangedReasonUpdatedLogEvent:(id)a0 updatedHouseholdLogEventsByName:(id)a1 homeUUID:(id)a2;
- (BOOL)_shouldExcludeUpdateForModelName:(id)a0 propertyName:(id)a1;
- (id)coalescedLogEventsFromLogEvents:(id)a0 homeUUID:(id)a1;
- (void)deleteCountersAfterDate:(id)a0;
- (void)deleteCountersBeforeDate:(id)a0;
- (id)initWithCountersManager:(id)a0 currentHomeDataSource:(id)a1 dateProvider:(id)a2;
- (id)initWithCountersManager:(id)a0 currentHomeDataSource:(id)a1 dateProvider:(id)a2 notificationCenter:(id)a3 maxNumberEventsToReport:(unsigned long long)a4 workQueue:(id)a5;
- (id)logEventsFromDictionary:(id)a0;
- (id)logEventsPopulatedForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;
- (id)serializeLogEvents:(id)a0;

@end
