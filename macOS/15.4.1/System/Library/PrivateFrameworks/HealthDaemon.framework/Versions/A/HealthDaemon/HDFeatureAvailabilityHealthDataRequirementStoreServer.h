@class NSString, HDFeatureAvailabilityHealthDataRequirementEvaluationManager;

@interface HDFeatureAvailabilityHealthDataRequirementStoreServer : HDStandardTaskServer <HKFeatureAvailabilityHealthDataRequirementStoreServer, HKFeatureAvailabilityRequirementSatisfactionObserver> {
    HDFeatureAvailabilityHealthDataRequirementEvaluationManager *_manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)featureAvailabilityRequirement:(id)a0 didUpdateSatisfaction:(BOOL)a1;
- (void)remote_getEvaluationOfRequirements:(id)a0 completion:(id /* block */)a1;
- (void)remote_startObservingChangesInRequirements:(id)a0 completion:(id /* block */)a1;
- (void)remote_stopObservingChanges;

@end
