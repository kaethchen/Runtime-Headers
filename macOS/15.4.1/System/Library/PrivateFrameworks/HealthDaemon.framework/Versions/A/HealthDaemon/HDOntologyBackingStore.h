@class NSString, HKObserverSet, HDDatabaseConnectionPool, NSURL, NSConditionLock, HDDaemon, NSObject, NSMutableSet, HDAssertionManager;
@protocol OS_dispatch_queue;

@interface HDOntologyBackingStore : NSObject <HDContentProtectionObserver, HDHealthDaemonReadyObserver, HDProtectedResourceStoreProvider, HDProtectedResourceStore, HDAssertionObserver, HDDatabaseConnectionPoolDelegate> {
    NSURL *_ontologyURL;
    _Atomic BOOL _invalidated;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_threadLocalTransactionKey;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _availabilityLock;
    BOOL _available;
    long long _observedContentProtectionState;
    HKObserverSet *_observers;
    HDDatabaseConnectionPool *_databaseConnectionPool;
    NSConditionLock *_activeDatabaseConnectionLock;
    NSMutableSet *_activeDatabaseConnections;
    HDAssertionManager *_protectedResourceAssertionManager;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *protectedResourceIdentifier;

+ (id)unitTesting_ontologyBackingStoreForDaemon:(id)a0 baseURL:(id)a1;
+ (id)unitTesting_ontologyURLWithBaseURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)invalidate;
- (id)initWithDaemon:(id)a0;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (id)sizeOfUnderlyingDatabaseInBytes;
- (id)_initWithDaemon:(id)a0 baseURL:(id)a1;
- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (void)checkInProtectedResource:(id)a0;
- (id)checkOutProtectedResourceWithAssertion:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void)daemonReady:(id)a0;
- (void)databasePool:(id)a0 didFlushConnections:(id)a1;
- (id)newConnectionForPool:(id)a0 error:(id *)a1;
- (void)obliterateWithReason:(id)a0;
- (BOOL)obliterateWithReason:(id)a0 error:(id *)a1;
- (BOOL)performOntologyTransactionForWrite:(BOOL)a0 profile:(id)a1 databaseTransaction:(id)a2 error:(id *)a3 transactionHandler:(id /* block */)a4;
- (id)protectedResourceStoreForProfile:(id)a0;
- (void)registerOntologyDatabase:(id)a0;
- (id)requestProtectedResourceAccessAssertionForOwnerIdentifier:(id)a0 error:(id *)a1;

@end
