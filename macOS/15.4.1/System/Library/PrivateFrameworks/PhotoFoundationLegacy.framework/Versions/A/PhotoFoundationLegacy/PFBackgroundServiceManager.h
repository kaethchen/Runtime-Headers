@class PFQoSPolicy, NSMutableDictionary, PFDispatchQueue;

@interface PFBackgroundServiceManager : NSObject {
    PFDispatchQueue *_queue;
}

@property (readonly) PFDispatchQueue *registrationQueue;
@property (retain) NSMutableDictionary *workContexts;
@property (retain) PFQoSPolicy *qosPolicy;

+ (id)sharedInstance;
+ (void)addWorkContext:(id)a0;
+ (BOOL)client:(id)a0 isRegisteredForResource:(id)a1;
+ (void)addManualWorkContext:(id)a0;
+ (void)addedItemsToWorkContext:(id)a0;
+ (id)beginActivityForResource:(id)a0 reason:(id)a1;
+ (void)cancelWork:(id)a0 force:(BOOL)a1;
+ (void)closeWorkContext:(id)a0;
+ (void)endActivityForResourceToken:(id)a0;
+ (void)forceResourceShutdown:(id)a0 whenComplete:(id /* block */)a1;
+ (id)performWorkWithDelegate:(id)a0 serviceType:(id)a1 atEnd:(id /* block */)a2;
+ (unsigned int)qosClassForServiceType:(id)a0;
+ (id)qosLevelStringForServiceType:(id)a0;
+ (BOOL)registerClient:(id)a0 forResource:(id)a1;
+ (void)registerResource:(id)a0;
+ (void)removeManualWorkContext:(id)a0;
+ (void)resumeWork:(id)a0;
+ (void)suspendWork:(id)a0;
+ (void)terminateWorkContext:(id)a0;
+ (void)tryResourceShutdown:(id)a0 ignoreClients:(id)a1 whenComplete:(id /* block */)a2;
+ (void)unregisterClient:(id)a0 forResource:(id)a1;
+ (void)unregisterClientCompletely:(id)a0 forResource:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dispatchAsync:(id /* block */)a0;
- (void)addWorkContext:(id)a0;
- (void)endWorkContext:(id)a0;
- (void)sendRemoveTask:(id)a0;
- (BOOL)client:(id)a0 isRegisteredForResource:(id)a1;
- (BOOL)_registerClient:(id)a0 forResource:(id)a1 isToken:(BOOL)a2;
- (void)_unregisterClient:(id)a0 forResource:(id)a1 isToken:(BOOL)a2;
- (void)addManualWorkContext:(id)a0;
- (void)addedItemsToWorkContext:(id)a0;
- (BOOL)assertOnProcessingQueue;
- (id)beginActivityForResource:(id)a0 reason:(id)a1;
- (void)beginWorkContext:(id)a0;
- (void)cancelWork:(id)a0 force:(BOOL)a1;
- (void)cancelWorkContext:(id)a0;
- (void)closeWorkContext:(id)a0;
- (BOOL)contextIsDormant:(id)a0;
- (void)endActivityForResourceToken:(id)a0;
- (void)finishedEndBatchWork:(id)a0 seq:(long long)a1;
- (void)finishedEndWork:(id)a0 seq:(long long)a1;
- (void)forceResourceShutdown:(id)a0 whenComplete:(id /* block */)a1;
- (void)getNextBatchOrJobForContext:(id)a0;
- (void)notifyParentOfCompletionOfChild:(id)a0;
- (void)performNextStepForContext:(id)a0;
- (void)processNextJobInBatch:(id)a0 forWorkContext:(id)a1;
- (const char *)processingQueueLabel;
- (BOOL)registerClient:(id)a0 forResource:(id)a1;
- (void)registerResource:(id)a0;
- (void)removeManualWorkContext:(id)a0;
- (void)removeWorkContext:(id)a0 from:(id)a1;
- (void)requestNewBatchForWorkContext:(id)a0;
- (id)resourceContextForResource:(id)a0 create:(BOOL)a1;
- (void)resumeWork:(id)a0;
- (void)resumeWorkContext:(id)a0;
- (void)sendAddTask:(id)a0;
- (void)suspendWork:(id)a0;
- (void)suspendWorkContext:(id)a0;
- (void)terminateWorkContext:(id)a0;
- (void)tryResourceShutdown:(id)a0 ignoreClients:(id)a1 whenComplete:(id /* block */)a2;
- (void)unregisterClient:(id)a0 forResource:(id)a1;
- (void)unregisterClientCompletely:(id)a0 forResource:(id)a1;
- (id)workContextForId:(id)a0;
- (void)workContextStalled:(id)a0;

@end
