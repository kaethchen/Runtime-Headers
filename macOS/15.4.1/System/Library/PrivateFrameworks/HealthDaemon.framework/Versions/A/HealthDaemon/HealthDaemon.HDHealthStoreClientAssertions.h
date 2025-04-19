@interface HealthDaemon.HDHealthStoreClientAssertions : NSObject {
    void /* unknown type, empty encoding */ _dbAssertionLock;
    void /* unknown type, empty encoding */ databaseAccessibilityAssertions;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)accessibilityAssertions;
- (void)addAssertionMappingWithAssertion:(id)a0;
- (id)assertionForHKDatabaseAccessibilityAssertionWithHkDatabaseAccessibilityAssertion:(id)a0;
- (id)firstAssertion;
- (void)invalidateAssertions;
- (void)removeAssertionMappingWithAssertion:(id)a0;

@end
