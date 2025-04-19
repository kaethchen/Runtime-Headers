@interface HKDatabaseAccessibilityAssertionStoreKeeper : NSObject {
    void /* unknown type, empty encoding */ _healthStore;
    void /* unknown type, empty encoding */ _dbAccessibilityAssertionsLock;
    void /* unknown type, empty encoding */ _dbAccessibilityAssertions;
    void /* unknown type, empty encoding */ _pendingRequestsTimer;
    void /* unknown type, empty encoding */ _pendingRequests;
    void /* unknown type, empty encoding */ _healthdRequests;
    void /* unknown type, empty encoding */ _didBecomeAvailableNotificationToken;
    void /* unknown type, empty encoding */ $__lazy_storage_$__queue;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithHealthStore:(id)a0;
- (void)connectionConfigured;
- (void)fetchDatabaseAccessibilityAssertionForOwnerIdentifier:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)invalidateAllDatabaseAccessibilityAssertions;
- (void)invalidateDatabaseAccessibilityAssertionWithAssertion:(id)a0;

@end
