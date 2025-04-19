@class NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface CNCDTestPersistenceStack : NSObject

@property (readonly) NSManagedObjectModel *model;
@property (readonly) NSPersistentStoreCoordinator *coordinator;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (id)addInMemoryStore;
- (id)addSQLiteStoreWithURL:(id)a0;
- (id)makeContext;
- (id)makeDeprecatedLockableContext;
- (void)performWithSession:(id /* block */)a0;
- (id)resultWithSession:(id /* block */)a0;

@end
