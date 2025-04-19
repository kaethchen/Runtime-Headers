@interface HDDatabaseAccessibilityAssertionStoreServer : HDStandardTaskServer <HKDatabaseAccessibilityAssertionServerInterface> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_queue;
}

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_invalidateDatabaseAccessibilityAssertion:(id)a0;
- (void)remote_requestDatabaseAccessibilityAssertionForOwnerIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;

@end
