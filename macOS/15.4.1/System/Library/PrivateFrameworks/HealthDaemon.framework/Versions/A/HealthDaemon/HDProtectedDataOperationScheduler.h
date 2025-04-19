@class HKSynchronousObserverSet, NSString, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDProtectedDataOperationScheduler : NSObject <HDDatabaseProtectedDataObserver, HDProfileReadyObserver, HDDiagnosticObject> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HKSynchronousObserverSet *_clientQueue_allClients;
    HKSynchronousObserverSet *_clientQueue_clientsAwaitingProtectedDataAvailable;
    BOOL _queue_hasNotifiedForProfileReady;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (id)diagnosticDescription;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)registerProtectedDataAvailableObserver:(id)a0;
- (void)startEnqueuedWorkWithName:(id)a0;
- (void)startWorkNow:(BOOL)a0 name:(id)a1 asynchronousBlock:(id /* block */)a2;

@end
