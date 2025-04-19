@class NSString, HKHealthStore, HKTaskServerProxyProvider;
@protocol NAScheduler;

@interface HKSleepHealthStore : NSObject <HKSleepHealthStoreInterface, _HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (class, readonly, copy, nonatomic) NSString *taskIdentifier;

@property (readonly, nonatomic) id<NAScheduler> scheduler;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_areAllSamples:(id)a0 containedInDateInterval:(id)a1;
+ (BOOL)_areAllSamplesSleepTrackingSamples:(id)a0;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)updateCurrentSleepSchedules:(id)a0 sleepDurationGoal:(id)a1 completion:(id /* block */)a2;
- (void)saveSleepTrackingSamples:(id)a0 completion:(id /* block */)a1;
- (void)saveSleepTrackingSamples:(id)a0 replacingSamplesInDateInterval:(id)a1 completion:(id /* block */)a2;
- (void)startSleepTrackingSession;
- (void)stopSleepTrackingSession;

@end
