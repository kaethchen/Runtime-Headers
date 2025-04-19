@class NSManagedObjectContext;

@interface MADSystemDataStore : NSObject {
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)defaultDatabasePath;
+ (id)systemDataStore;

- (void).cxx_destruct;
- (id)initWithManagedObjectModel:(id)a0;
- (id)managedObjectContext;
- (BOOL)commitChangesOrRollback:(id *)a0;
- (BOOL)commitChangesOrRollbackAndResetContext:(id *)a0;
- (void)rollbackAndResetContext;

@end
