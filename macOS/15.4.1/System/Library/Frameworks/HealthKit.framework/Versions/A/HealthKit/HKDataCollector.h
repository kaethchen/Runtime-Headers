@class HKDevice, NSString, NSUUID, HKDataCollectorState, HKTaskServerProxyProvider, HKRetryableOperation, NSMutableDictionary, NSObject, NSMutableArray, HKDataCollectorCollectionConfiguration, HKQuantityType;
@protocol OS_dispatch_queue, HKDataCollectorDelegate, OS_dispatch_source;

@interface HKDataCollector : NSObject <_HKXPCExportable, HKDataCollectorClientInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    HKRetryableOperation *_retryableOperation;
    long long _totalDatumCount;
    NSUUID *_registrationUUID;
    HKDataCollectorCollectionConfiguration *_collectionConfiguration;
    double _unitTest_maxDatumAgeOverride;
    double _unitTest_clientFlushRequestTimeoutOverride;
    id /* block */ _unitTest_registrationCompleteHandler;
    id /* block */ _unitTest_connectionInterruptedHandler;
    id /* block */ _unitTest_preSetStateHandler;
    BOOL _shouldFlushAll;
    NSMutableArray *_flushRequests;
    NSMutableArray *_pendingBatches;
    NSMutableDictionary *_unconfirmedBatchesByUUID;
    NSMutableDictionary *_unpersistedBatchesByUUID;
    NSObject<OS_dispatch_source> *_reconsiderationSource;
    BOOL _requiresRegistration;
    BOOL _hasResumed;
    BOOL _invalidated;
    id /* block */ _resumeCompletion;
    id /* block */ _finishCompletion;
    double _lastLogTime;
}

@property (readonly, copy, nonatomic) HKDataCollectorCollectionConfiguration *collectionConfiguration;
@property (copy, nonatomic) HKDataCollectorState *state;
@property (readonly, copy) HKQuantityType *quantityType;
@property (readonly, copy) HKDevice *device;
@property (readonly, copy) NSString *bundleIdentifier;
@property (weak, nonatomic) id<HKDataCollectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)resumeWithCompletion:(id /* block */)a0;
- (void)finishWithCompletion:(id /* block */)a0;
- (BOOL)_datumsInDateOrder:(id)a0 secondDatum:(id)a1;
- (id)_prunedBatch:(id)a0 maximumLength:(long long)a1;
- (void)_queue_batchDatums:(id)a0 device:(id)a1 metadata:(id)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)_queue_callToDelegateAndEnqueueForClientFlushRequest:(id)a0;
- (void)_queue_checkForFinish;
- (void)_queue_considerCompletingFlushRequests;
- (void)_queue_considerSendingBatches;
- (void)_queue_pruneOldDatums;
- (void)_queue_requestRegistration;
- (void)_queue_resetUnpersistedBatches;
- (void)_queue_sendBatch:(id)a0;
- (void)_queue_sendState:(id)a0;
- (void)_queue_taskServer_insertBatch:(id)a0 completion:(id /* block */)a1;
- (void)_queue_updateReconsiderationTimer;
- (void)_removeBatch:(id)a0;
- (void)_requestRegistration;
- (BOOL)_validateDatums:(id)a0 error:(out id *)a1;
- (void)clientRemote_beginCollectionWithConfiguration:(id)a0 lastPersistedDatum:(id)a1 registrationUUID:(id)a2;
- (void)clientRemote_collectThroughDate:(id)a0 completion:(id /* block */)a1;
- (void)clientRemote_collectionConfigurationDidChange:(id)a0;
- (void)clientRemote_finishedPersistenceForBatch:(id)a0 error:(id)a1;
- (void)clientRemote_receivedBatch:(id)a0 error:(id)a1;
- (void)clientRemote_synchronizeWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0 bundleIdentifier:(id)a1 quantityType:(id)a2;
- (void)insertDatums:(id)a0 device:(id)a1 metadata:(id)a2 completion:(id /* block */)a3;
- (void)insertDatums:(id)a0 device:(id)a1 metadata:(id)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)unitTest_pendingBatches;
- (void)unitTest_preSetStateHandler:(id /* block */)a0;
- (void)unitTest_setClientFlushRequestTimeoutOverride:(double)a0;
- (void)unitTest_setConnectionInterruptedHandler:(id /* block */)a0;
- (void)unitTest_setMaxDatumAgeOverride:(double)a0;
- (void)unitTest_setRegistrationCompleteHandler:(id /* block */)a0;
- (id)unitTest_unconfirmedBatches;
- (id)unitTest_unpersistedBatches;

@end
