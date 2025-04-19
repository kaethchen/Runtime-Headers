@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDThreadNetworkMetadataStore : HMFObject <HMFLogging, HMDThreadNetworkMetadataStore>

@property (class, readonly, nonatomic) HMDThreadNetworkMetadataStore *_testOnlyStore;
@property (class, readonly, nonatomic) HMDThreadNetworkMetadataStore *defaultStore;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueueNetworkChanged;
@property (nonatomic) unsigned long long networkChangedHandlingLastUpdatedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)initInternal;
- (void)_checkIfThreadNetworkIsRunningWithCompletion:(id /* block */)a0;
- (void)_removePreferredNetworkWithCompletion:(id /* block */)a0;
- (void)_retrieveBorderRouterPreferredNetworkWithCompletion:(id /* block */)a0;
- (void)_retrieveMetadataOnController:(id)a0 homeHasResident:(BOOL)a1 completion:(id /* block */)a2;
- (void)_retrieveMetadataOnThreadCapableController:(id)a0 threadClient:(id)a1 homeHasResident:(BOOL)a2 completion:(id /* block */)a3;
- (void)_retrievePreferredNetwork:(id)a0 completion:(id /* block */)a1;
- (void)_retrievePreferredNetworkOnThreadCapableController:(id)a0 threadClient:(id)a1 completion:(id /* block */)a2;
- (void)_scheduleTriggerPreferredNetworkUpdateWithCompletion:(id /* block */)a0;
- (void)_triggerPreferredNetworkUpdateWithCompletion:(id /* block */)a0;
- (void)_validateOperationalDatasetWithTHClient:(id)a0 operationalDataset:(id)a1 storeCachedAOD:(BOOL)a2 completion:(id /* block */)a3;
- (void)checkIfThreadNetworkIsRunningWithCompletion:(id /* block */)a0;
- (void)removePreferredNetworkWithCompletion:(id /* block */)a0;
- (void)retrieveBorderRouterPreferredNetworkWithCompletion:(id /* block */)a0;
- (void)retrieveMetadata:(id)a0 homeHasResident:(BOOL)a1 completion:(id /* block */)a2;
- (void)retrievePreferredNetwork:(id)a0 completion:(id /* block */)a1;
- (void)triggerPreferredNetworkUpdateWithCompletion:(id /* block */)a0;

@end
