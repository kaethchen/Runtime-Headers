@class NSString, LACDTOFeatureEnablementModeCoder, NSObject;
@protocol OS_dispatch_queue, LACDTOFeatureRequirementsDataSource, LACDTOEventBus, LACDTOKVStore, LACFeatureFlagsProviderDTO;

@interface LACDTOFeatureController : NSObject <LACDTOFeatureControlling, LACDTOEventProducer> {
    id<LACDTOKVStore> _kvStore;
    id<LACDTOFeatureRequirementsDataSource> _requirementsDataSource;
    id<LACFeatureFlagsProviderDTO> _featureFlags;
    LACDTOFeatureEnablementModeCoder *_enablementModeCoder;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<LACDTOEventBus> eventBus;

- (void).cxx_destruct;
- (void)checkCanEnableFeatureWithCompletion:(id /* block */)a0;
- (void)disableFeatureStrictModeWithContext:(id)a0 completion:(id /* block */)a1;
- (void)disableFeatureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)enableFeatureStrictModeWithCompletion:(id /* block */)a0;
- (void)enableFeatureWithCompletion:(id /* block */)a0;
- (void)fetchStateWithCompletion:(id /* block */)a0;
- (void)_checkIsFeatureEnabledWithCompletion:(id /* block */)a0;
- (void)_enableFeatureActivatingGracePeriod:(BOOL)a0 completion:(id /* block */)a1;
- (void)_fetchDeviceHintsCurrentConnection:(id)a0 completion:(id /* block */)a1;
- (void)_fetchRequirementsWithCompletion:(id /* block */)a0;
- (void)_setFeatureEnablementMode:(id)a0 context:(id)a1 connection:(id)a2 completion:(id /* block */)a3;
- (void)_setFeatureStrictModeEnabled:(BOOL)a0 context:(id)a1 connection:(id)a2 completion:(id /* block */)a3;
- (void)_setValue:(id)a0 forKey:(long long)a1 contextUUID:(id)a2 connection:(id)a3 completion:(id /* block */)a4;
- (void)checkIsFeatureAvailableWithCompletion:(id /* block */)a0;
- (void)checkIsFeatureEnabledWithCompletion:(id /* block */)a0;
- (void)checkIsFeatureStrictModeEnabledWithCompletion:(id /* block */)a0;
- (void)checkIsFeatureSupportedWithCompletion:(id /* block */)a0;
- (void)enableFeatureActivatingGracePeriodWithCompletion:(id /* block */)a0;
- (id)initWithKVStore:(id)a0 requirementsDataSource:(id)a1 featureFlags:(id)a2 workQueue:(id)a3;

@end
