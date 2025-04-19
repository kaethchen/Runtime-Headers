@class NSPersistentStore, NSString, NSPersistentStoreCoordinator;

@interface CNAddPersistentStoreResult : NSObject <CNAddPersistentStoreResult>

@property (readonly) NSPersistentStoreCoordinator *coordinator;
@property (readonly) NSPersistentStore *store;
@property (readonly) BOOL shouldCache;
@property (readonly, getter=isPristineDatabase) BOOL pristineDatabase;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly) BOOL didMigrate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoordinator:(id)a0 store:(id)a1 pristineDatabase:(BOOL)a2 shouldCache:(BOOL)a3 readOnly:(BOOL)a4 didMigrate:(BOOL)a5;

@end
