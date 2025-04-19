@class ASUSQLiteDatabase, ASUSQLiteDatabaseStoreDescriptor;

@interface ASUSQLiteDatabaseStore : NSObject

@property (class, readonly) ASUSQLiteDatabaseStoreDescriptor *storeDescriptor;

@property (readonly) ASUSQLiteDatabase *database;

+ (BOOL)createOrMigrateStoreUsingSchema:(id)a0;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (void)asyncModifyUsingTransaction:(id /* block */)a0 completion:(id /* block */)a1;
- (void)asyncReadUsingSession:(id /* block */)a0 completion:(id /* block */)a1;
- (void)modifyUsingTransaction:(id /* block */)a0;
- (void)readUsingSession:(id /* block */)a0;

@end
