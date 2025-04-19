@class CNCDPersistenceStack;

@interface CNCDChangeHistoryStore : NSObject

@property (readonly, nonatomic) CNCDPersistenceStack *persistenceStack;

+ (BOOL)contextHasPersistentStores:(id)a0;

- (void).cxx_destruct;
- (id)resultWithManagedObjectContext:(id /* block */)a0;
- (id)changeHistoryWithFetchRequest:(id)a0 error:(id *)a1;
- (id)currentHistoryAnchor;
- (BOOL)executeChangeHistoryClearRequest:(id)a0 error:(id *)a1;
- (id)initWithPersistenceStack:(id)a0;
- (BOOL)registerChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;
- (BOOL)unregisterChangeHistoryClientIdentifier:(id)a0 forContainerIdentifier:(id)a1 error:(id *)a2;

@end
