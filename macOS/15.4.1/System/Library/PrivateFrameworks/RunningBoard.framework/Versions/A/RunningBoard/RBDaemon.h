@class RBProcess, RBPowerAssertionManager, RBProcessReconnectManager, RBAssertionManager, RBBundlePropertiesManager, RBEntitlementManager, RBThrottleBestEffortNetworkingManager, RBThermalResponseManager, RBAssertionDescriptorValidator, RBHistoricalStatistics, NSString, RBProcessManager, RBConnectionListener, RBCoalitionManager, RBAssertionOriginatorPidStore, RBStateCaptureManager, RBProcessMonitor, RBDomainAttributeManager, RBJetsamPropertyManager;
@protocol RBExtensionDataProviding, RBRequestManaging;

@interface RBDaemon : NSObject <RBAssertionManagerDelegate, RBProcessManagerDelegate, RBBundlePropertiesManagerDelegate, RBPowerAssertionManagerDelegate, RBDaemonContextProviding> {
    RBAssertionDescriptorValidator *_assertionDescriptorValidator;
    RBBundlePropertiesManager *_bundlePropertiesManager;
    RBConnectionListener *_listener;
    RBPowerAssertionManager *_powerAssertionManager;
    RBProcessReconnectManager *_reconnectManager;
    RBThrottleBestEffortNetworkingManager *_throttleBestEffortNetworkingManager;
    RBThermalResponseManager *_thermalResponseManager;
    RBCoalitionManager *_coalitionManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) RBAssertionManager *assertionManager;
@property (readonly, nonatomic) RBEntitlementManager *entitlementManager;
@property (readonly, nonatomic) RBProcessManager *processManager;
@property (readonly, nonatomic) RBProcessMonitor *processMonitor;
@property (readonly, nonatomic) RBStateCaptureManager *stateCaptureManager;
@property (readonly, nonatomic) RBDomainAttributeManager *domainAttributeManager;
@property (readonly, nonatomic) RBAssertionOriginatorPidStore *assertionOriginatorPidStore;
@property (readonly, nonatomic) RBJetsamPropertyManager *jetsamPropertyManager;
@property (readonly, nonatomic) id<RBExtensionDataProviding> extensionDataProvider;
@property (readonly, nonatomic) id<RBRequestManaging> requestManager;
@property (readonly, nonatomic) RBHistoricalStatistics *historicalStatistics;
@property (readonly, nonatomic) RBProcess *process;

+ (void)run;

- (id)init;
- (void).cxx_destruct;
- (void)assertionManager:(id)a0 didAddProcess:(id)a1 withState:(id)a2;
- (void)assertionManager:(id)a0 didBeginTrackingInFightUpdatesForProcessIdentity:(id)a1;
- (void)assertionManager:(id)a0 didBeginTrackingStateForProcessIdentity:(id)a1;
- (void)assertionManager:(id)a0 didEndTrackingInFightUpdatesForProcessIdentity:(id)a1;
- (void)assertionManager:(id)a0 didEndTrackingStateForProcessIdentity:(id)a1;
- (void)assertionManager:(id)a0 didInvalidateAssertions:(id)a1;
- (void)assertionManager:(id)a0 didRejectAcquisitionFromOriginatorWithExcessiveAssertions:(id)a1;
- (void)assertionManager:(id)a0 didRemoveProcess:(id)a1 withState:(id)a2;
- (void)assertionManager:(id)a0 didResolveSystemState:(id)a1;
- (void)assertionManager:(id)a0 didUpdateProcessStates:(id)a1 completion:(id /* block */)a2;
- (void)assertionManager:(id)a0 willExpireAssertionsSoonForProcess:(id)a1 expirationTime:(double)a2;
- (void)assertionManager:(id)a0 willInvalidateAssertion:(id)a1;
- (void)bundlePropertiesManager:(id)a0 didChangePropertiesForProcessIdentities:(id)a1;
- (void)powerAssertionManagerDidAllowIdleSleep:(id)a0;
- (void)powerAssertionManagerDidPreventIdleSleep:(id)a0;
- (void)processManager:(id)a0 didAddProcess:(id)a1 withState:(id)a2;
- (void)processManager:(id)a0 didReconnectProcesses:(id)a1;
- (void)processManager:(id)a0 didRemoveProcess:(id)a1;

@end
