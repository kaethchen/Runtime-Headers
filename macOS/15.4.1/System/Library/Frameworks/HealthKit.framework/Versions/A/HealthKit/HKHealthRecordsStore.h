@class HKObserverSet, NSString, HKHealthStore, HKTaskServerProxyProvider;

@interface HKHealthRecordsStore : NSObject <HKHealthRecordsStoreClientInterface, _HKXPCExportable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
    HKTaskServerProxyProvider *_proxyProvider;
    unsigned long long _lastKnownIngestionStatus;
}

@property (class, readonly, copy, nonatomic) NSString *taskIdentifier;

@property (retain, nonatomic) HKObserverSet *chrSupportedStateChangeObservers;
@property (retain, nonatomic) HKObserverSet *accountsEventObservers;
@property (copy, nonatomic) id /* block */ unitTesting_didCallReestablishProxyConnectionIfObserversArePresent;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)pingWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0;
- (void)fetchIsImproveHealthRecordsDataSubmissionAllowedWithCompletion:(id /* block */)a0;
- (id /* block */)_actionCompletionWithObjectOnClientQueue:(id /* block */)a0;
- (void)_executeCheapCallOnPluginServerProxy:(id)a0;
- (void)_fetchHealthRecordsPluginServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)_getSynchronousHealthRecordsPluginServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)_reestablishProxyConnectionIfObserversArePresentWithPluginServerProxy:(id)a0;
- (void)_withLock_notifyAccountsEventsListenerOfEvent:(unsigned long long)a0;
- (void)addHealthRecordsSupportedChangeListener:(id)a0;
- (void)clientRemote_healthRecordsAccountsEventObserved:(unsigned long long)a0;
- (void)clientRemote_healthRecordsSupportedDidChangeTo:(BOOL)a0;
- (void)deregisterAppSourceFromClinicalUnlimitedAuthorizationModeConfirmation:(id)a0 completion:(id /* block */)a1;
- (void)fetchClinicalConnectedAccountsWithCompletion:(id /* block */)a0;
- (void)fetchClinicalOptInDataCollectionFilePathsWithCompletion:(id /* block */)a0;
- (void)fetchCurrentDeviceSupportsImproveHealthRecordsDataSubmissionOptionWithCompletion:(id /* block */)a0;
- (void)fetchCurrentIngestionStatusWithCompletion:(id /* block */)a0;
- (void)fetchExportedPropertiesForHealthRecord:(id)a0 completion:(id /* block */)a1;
- (void)fetchFHIRJSONDocumentWithAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchLogoForBrand:(id)a0 scale:(id)a1 completion:(id /* block */)a2;
- (void)fetchRawSourceStringForHealthRecord:(id)a0 completion:(id /* block */)a1;
- (void)fetchShouldPromptForImproveHealthRecordsDataSubmissionWithCompletion:(id /* block */)a0;
- (void)fetchUserHasAgreedToHealthRecordsDataSubmissionWithCompletion:(id /* block */)a0;
- (void)registerAccountsEventListener:(id)a0;
- (void)registerAppSourceForClinicalUnlimitedAuthorizationModeConfirmation:(id)a0 completion:(id /* block */)a1;
- (void)removeAccountsEventListener:(id)a0;
- (void)removeHealthRecordsSupportedChangeListener:(id)a0;
- (void)resetClinicalContentAnalyticsAnchorsWithCompletion:(id /* block */)a0;
- (void)resetClinicalOptInDataCollectionAnchorsWithCompletion:(id /* block */)a0;
- (void)stringifyExtractionFailureReasonsForRecord:(id)a0 completion:(id /* block */)a1;
- (void)triggerClinicalContentAnalyticsForReason:(long long)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)triggerClinicalOptInDataCollectionForReason:(long long)a0 completion:(id /* block */)a1;
- (void)triggerHealthCloudUploadWithCompletion:(id /* block */)a0;

@end
