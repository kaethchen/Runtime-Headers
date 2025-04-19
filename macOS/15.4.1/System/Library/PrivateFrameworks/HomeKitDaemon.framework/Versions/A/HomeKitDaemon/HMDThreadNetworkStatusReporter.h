@class HMDHome, NSString, NSObject;
@protocol OS_dispatch_queue, HMDThreadRadioClient;

@interface HMDThreadNetworkStatusReporter : NSObject <HMFLogging, HMDThreadNetworkStateChangeObserver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) HMDHome *home;
@property (nonatomic) unsigned long long threadNetworkPeriodicCheckFrequencyInMins;
@property (readonly, nonatomic) id<HMDThreadRadioClient> threadRadioClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)run;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)_registerForThreadNetworkEvents;
- (void)_checkIfThreadNetworkIsRunningWithCompletion:(id /* block */)a0;
- (void)_runThreadNetworkStateCapture;
- (void)_runThreadNetworkStatusPeriodicUpdate;
- (void)_scheduleThreadNetworkStatusPeriodicUpdate;
- (void)_unregisterForThreadNetworkEvents;
- (void)registerForThreadNetworkEvents;
- (void)threadBTCallStateChange:(id)a0;
- (void)threadNetworkStateChange:(id)a0;
- (void)threadPeripheralDeviceNodeTypeChange:(id)a0;
- (void)threadPreferredNetworkUpdated:(id)a0;
- (void)threadWakeOnDeviceConnectionStateChange:(id)a0;
- (void)unregisterForThreadNetworkEvents;

@end
