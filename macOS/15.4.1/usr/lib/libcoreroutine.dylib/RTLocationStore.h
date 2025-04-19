@class NSString, RTTimer, RTTimerManager, NSMutableArray, NSObject;
@protocol OS_os_transaction;

@interface RTLocationStore : RTStore <RTEnumerableStore, RTLocationStoreProtocol> {
    RTTimerManager *_timerManager;
    NSObject<OS_os_transaction> *_flushTransaction;
}

@property (readonly, nonatomic) NSMutableArray *locations;
@property (readonly, nonatomic) RTTimer *flushTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchLastLocationWithHandler:(id /* block */)a0;
- (void)_fetchMetricsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchStoredLocationsCountFromDate:(id)a0 toDate:(id)a1 uncertainty:(double)a2 limit:(unsigned long long)a3 handler:(id /* block */)a4;
- (void)_fetchStoredLocationsWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchStoredLocationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_flushCachedLocationsWithHandler:(id /* block */)a0;
- (void)_invalidateFlushTimer;
- (void)_removeLocationsPredating:(id)a0 handler:(id /* block */)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_startFlushTimer;
- (void)_storeLocations:(id)a0 handler:(id /* block */)a1;
- (void)enumerateStoredLocationsWithContext:(id)a0 usingBlock:(id /* block */)a1;
- (void)fetchLastLocationWithHandler:(id /* block */)a0;
- (void)fetchMetricsWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (id)fetchRequestFromStoredLocationOptions:(id)a0;
- (void)fetchStoredLocationsCountFromDate:(id)a0 toDate:(id)a1 uncertainty:(double)a2 limit:(unsigned long long)a3 handler:(id /* block */)a4;
- (void)fetchStoredLocationsWithContext:(id)a0 handler:(id /* block */)a1;
- (void)fetchStoredLocationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)flushCachedLocationsWithHandler:(id /* block */)a0;
- (id)initWithPersistenceManager:(id)a0;
- (id)initWithPersistenceManager:(id)a0 timerManager:(id)a1;
- (void)removeLocationsPredating:(id)a0 handler:(id /* block */)a1;
- (void)storeLocations:(id)a0 handler:(id /* block */)a1;

@end
