@class ASUSQLiteQueryDescriptor, ASUSQLiteConnection;

@interface ASUSQLiteQuery : NSObject {
    ASUSQLiteConnection *_connection;
    ASUSQLiteQueryDescriptor *_descriptor;
}

@property (readonly) ASUSQLiteConnection *connection;
@property (readonly) ASUSQLiteQueryDescriptor *queryDescriptor;
@property (readonly) long long countOfEntities;

- (void).cxx_destruct;
- (void)applyBinding:(id)a0 atIndex:(inout int *)a1;
- (id)copyEntityIdentifiers;
- (id)copySelectSQLWithProperties:(id)a0;
- (BOOL)createTemporaryTableWithName:(id)a0 properties:(id)a1;
- (BOOL)deleteAllEntities;
- (void)enumerateMemoryEntitiesUsingBlock:(id /* block */)a0;
- (void)enumerateMemoryEntitiesWithProperties:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePersistentIDsAndProperties:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)a0;
- (id)initOnConnection:(id)a0 descriptor:(id)a1;

@end
