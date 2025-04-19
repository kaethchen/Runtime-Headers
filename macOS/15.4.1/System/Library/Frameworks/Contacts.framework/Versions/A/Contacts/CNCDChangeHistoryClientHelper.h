@class NSManagedObjectContext;

@interface CNCDChangeHistoryClientHelper : NSObject

@property (readonly, nonatomic) NSManagedObjectContext *context;

+ (BOOL)contextHasPersistentStores:(id)a0;

- (void).cxx_destruct;
- (id)save;
- (id)initWithManagedObjectContext:(id)a0;
- (id)clientWithIdentifier:(id)a0 error:(id *)a1;
- (id)insertNewClientWithIdentifier:(id)a0;
- (id)updateClientWithIdentifier:(id)a0 withBlock:(id /* block */)a1;

@end
