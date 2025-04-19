@class HKObserverSet, NSString, HKTaskServerProxyProvider, NSMapTable;

@interface HKFeatureAvailabilityHealthDataRequirementStore : NSObject <HKFeatureAvailabilityHealthDataRequirementStoreClient, _HKXPCExportable, HKFeatureAvailabilityHealthDataRequirementEvaluationProviding> {
    HKObserverSet *_observers;
    HKTaskServerProxyProvider *_proxyProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_lock_requirementsByObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)unregisterObserver:(id)a0;
- (id)initWithHealthStore:(id)a0;
- (void)_notifyObservers:(id /* block */)a0;
- (id)evaluationOfRequirements:(id)a0 error:(id *)a1;
- (id)_allObservedRequirements;
- (void)_handleAutomaticProxyReconnection;
- (void)_reevaluateAllObservedRequirementsAndNotifyObservers;
- (void)_startObservingRequirements:(id)a0 activationHandler:(id /* block */)a1;
- (BOOL)_synchronouslyStartObservingWithError:(id *)a0;
- (void)client_featureAvailabilityRequirement:(id)a0 didUpdateSatisfaction:(BOOL)a1;
- (void)registerObserver:(id)a0 forRequirements:(id)a1 queue:(id)a2;
- (void)registerObserver:(id)a0 forRequirements:(id)a1 queue:(id)a2 activationHandler:(id /* block */)a3;

@end
