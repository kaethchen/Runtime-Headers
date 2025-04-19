@interface HKDatabaseAccessibilityAssertionStore : NSObject <_HKXPCExportable> {
    void /* unknown type, empty encoding */ $__lazy_storage_$__proxyProvider;
    void /* unknown type, empty encoding */ _healthStore;
}

- (id)init;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)fetchDatabaseAccessibilityAssertionForOwnerIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)invalidateDatabaseAccessibilityAssertionWithAssertion:(id)a0;

@end
