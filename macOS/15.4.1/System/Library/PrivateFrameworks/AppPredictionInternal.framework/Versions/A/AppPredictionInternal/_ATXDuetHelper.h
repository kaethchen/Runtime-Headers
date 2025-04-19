@class _PASLock;

@interface _ATXDuetHelper : NSObject {
    _PASLock *_deletionHandlerLock;
    _PASLock *_rootOfAppDataLock;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_queryDuetStream:(id)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4;
- (void)_computeRootOfAppDataWithLockWitness:(id)a0;
- (unsigned long long)_countDuetStream:(id)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4;
- (void)_enumerateBatchesInDuetStream:(id)a0 creationDateStart:(id)a1 creationDateEnd:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4 ascending:(BOOL)a5 block:(id /* block */)a6;
- (void)_enumerateBatchesInDuetStream:(id)a0 creationDateStart:(id)a1 creationDateEnd:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4 batchSize:(unsigned long long)a5 ascending:(BOOL)a6 block:(id /* block */)a7;
- (void)_enumerateBatchesInDuetStream:(id)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4 ascending:(BOOL)a5 block:(id /* block */)a6;
- (void)_enumerateBatchesInDuetStream:(id)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4 batchSize:(unsigned long long)a5 ascending:(BOOL)a6 block:(id /* block */)a7;
- (void)_handleTombstoneCreationWithNotification:(id)a0;
- (id)_queryDuetStreamUnbatched:(id)a0 creationDateStart:(id)a1 creationDateEnd:(id)a2 ascending:(BOOL)a3 otherPredicates:(id)a4 limit:(unsigned long long)a5 offset:(unsigned long long)a6;
- (id)_queryDuetStreamUnbatched:(id)a0 startDate:(id)a1 endDate:(id)a2 ascending:(BOOL)a3 otherPredicates:(id)a4 limit:(unsigned long long)a5 offset:(unsigned long long)a6;
- (void)deregisterDeletionHandlerWithToken:(unsigned long long)a0;
- (void)enumerateBatchedEligibleActivityDeletionUUIDsAndDatesBetweenStartDate:(id)a0 endDate:(id)a1 batchSize:(unsigned long long)a2 block:(id /* block */)a3;
- (void)enumerateBatchedIntentDeletionUUIDsAndDatesBetweenStartdate:(id)a0 endDate:(id)a1 batchSize:(unsigned long long)a2 block:(id /* block */)a3;
- (void)enumerateRelevantShortcutsAndBundleIdsBetweenStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2 block:(id /* block */)a3;
- (id)getAppLaunchesBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)getAppLaunchesBetweenStartDate:(id)a0 endDate:(id)a1 batchSize:(unsigned long long)a2;
- (id)getAppLaunchesBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 limit:(unsigned long long)a3;
- (id)getAppLaunchesBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 limit:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)getAppLaunchesFromUsageBetweenStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2;
- (unsigned long long)getDocFreqFor:(id)a0 contentKey:(id)a1;
- (id)getFirstAppLaunchBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2;
- (id)getLastAppLaunchBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2;
- (id)getMicroLocationsFromLastMonth;
- (id)getMostRecentMicroLocation;
- (id)getScreenTransitionsBetweenStartDate:(id)a0 endDate:(id)a1;
- (unsigned long long)registerDeletionHandler:(id /* block */)a0 queue:(id)a1;

@end
