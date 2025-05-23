@class RTPersistenceManager, NSMutableDictionary, RTInvocationDispatcher;

@interface RTStore : RTService

@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (nonatomic) unsigned long long availability;
@property (retain, nonatomic) NSMutableDictionary *contexts;
@property (retain, nonatomic) RTPersistenceManager *persistenceManager;

+ (id)availabilityToString:(unsigned long long)a0;
+ (id)contextTypeToString:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_updateWritableObjects:(id)a0 handler:(id /* block */)a1;
- (void)_fetchReadableObjectsOfType:(Class)a0 fetchRequest:(id)a1 handler:(id /* block */)a2;
- (void)_onPersistenceManagerNotification:(id)a0;
- (void)_performBlock:(id /* block */)a0 contextType:(unsigned long long)a1 errorHandler:(id /* block */)a2;
- (void)_purgeDateInterval:(id)a0 predicateMappings:(id)a1 limit:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)_removeAll:(id)a0 handler:(id /* block */)a1;
- (void)_setupContextsHandler:(id /* block */)a0;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_storeWritableObjects:(id)a0 handler:(id /* block */)a1;
- (void)enumerateType:(Class)a0 fetchRequest:(id)a1 enumerationBlock:(id /* block */)a2;
- (void)executeDeleteRequests:(id)a0 context:(id)a1 handler:(id /* block */)a2;
- (void)fetchAvailabilityWithHandler:(id /* block */)a0;
- (void)fetchEnumerableObjectsWithOptions:(id)a0 offset:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)fetchReadableObjectsOfType:(Class)a0 fetchRequest:(id)a1 handler:(id /* block */)a2;
- (id)initWithPersistenceManager:(id)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)onPersistenceManagerNotification:(id)a0;
- (void)purgeDateInterval:(id)a0 predicateMappings:(id)a1 handler:(id /* block */)a2;
- (void)purgeDateInterval:(id)a0 predicateMappings:(id)a1 purgeLimit:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)purgePredating:(id)a0 predicateMappings:(id)a1 handler:(id /* block */)a2;
- (void)purgePredating:(id)a0 predicateMappings:(id)a1 purgeLimit:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)removeAll:(id)a0 handler:(id /* block */)a1;
- (void)storeWritableObjects:(id)a0 handler:(id /* block */)a1;
- (void)updateWritableObjects:(id)a0 handler:(id /* block */)a1;

@end
