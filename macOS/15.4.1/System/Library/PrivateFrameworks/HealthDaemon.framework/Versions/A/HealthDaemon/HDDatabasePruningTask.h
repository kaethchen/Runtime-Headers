@class HDProfile;

@interface HDDatabasePruningTask : NSObject {
    HDProfile *_profile;
}

+ (id)_maximumPruningAnchorWithRestrictionPredicates:(id)a0;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (id)_minimumFrozenAnchorMapForPruningDate:(id)a0 error:(id *)a1;
- (id)_untypedEntityClasses;
- (void)enqueueMaintenanceOperationOnCoordinator:(id)a0 takeAccessibilityAssertion:(BOOL)a1 nowDate:(id)a2 completion:(id /* block */)a3;
- (void)enqueueMaintenanceOperationOnCoordinator:(id)a0 takeAccessibilityAssertion:(BOOL)a1 nowDate:(id)a2 shouldDefer:(id /* block */)a3 completion:(id /* block */)a4;
- (BOOL)pruneDatabaseWithAccessibilityAssertion:(id)a0 nowDate:(id)a1 error:(id *)a2;
- (BOOL)pruneDatabaseWithAccessibilityAssertion:(id)a0 nowDate:(id)a1 prunedObjectLimit:(unsigned long long)a2 prunedObjectTransactionLimit:(unsigned long long)a3 error:(id *)a4;
- (long long)pruneDatabaseWithAccessibilityAssertion:(id)a0 nowDate:(id)a1 prunedObjectLimit:(unsigned long long)a2 prunedObjectTransactionLimit:(unsigned long long)a3 shouldDefer:(id /* block */)a4 error:(id *)a5;

@end
