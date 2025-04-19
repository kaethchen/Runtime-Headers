@class NSPersistentStoreCoordinator;

@interface CNPersistentStoreCoordinatorResult : NSObject

@property (readonly) NSPersistentStoreCoordinator *coordinator;
@property (readonly, getter=isPristineDatabase) BOOL pristineDatabase;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly) BOOL didMigrate;

+ (id)resultsWithCoordinator:(id)a0 pristineDatabase:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithCoordinator:(id)a0 pristineDatabase:(BOOL)a1 readOnly:(BOOL)a2 didMigrate:(BOOL)a3;

@end
