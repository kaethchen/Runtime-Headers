@class HMDHouseholdMetricsMessagingProvider, NSObject, HMDHouseholdMetricsServer, NSString, NSUUID, HMMDateProvider, HMDHouseholdMetricsClient;
@protocol OS_dispatch_queue;

@interface HMDHouseholdMetricsManager : HMFObject <HMDLogEventHomeutilTaskRunner, HMFMessageReceiver, HMDLogEventDailyTaskRunner>

@property (readonly, nonatomic) HMMDateProvider *dateProvider;
@property (readonly, nonatomic) HMDHouseholdMetricsClient *client;
@property (readonly, nonatomic) HMDHouseholdMetricsServer *server;
@property (readonly, nonatomic) HMDHouseholdMetricsMessagingProvider *messagingProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)handleRequest:(id)a0;
- (void)runHomeutilTask;
- (id)initWithCountersManager:(id)a0 dataSource:(id)a1 accessoryDetailsManager:(id)a2 metricsHomeDataChangedManager:(id)a3 dailyScheduler:(id)a4 logEventSubmitter:(id)a5 dateProvider:(id)a6 activityContributors:(id)a7;
- (id)initWithCountersManager:(id)a0 dataSource:(id)a1 dailyScheduler:(id)a2 logEventSubmitter:(id)a3 dateProvider:(id)a4 requestCountProvider:(id)a5 logEventFactories:(id)a6;
- (void)runDailyTask;

@end
