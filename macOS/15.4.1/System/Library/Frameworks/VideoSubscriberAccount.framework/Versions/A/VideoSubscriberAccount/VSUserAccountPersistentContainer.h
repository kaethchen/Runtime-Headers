@interface VSUserAccountPersistentContainer : NSPersistentCloudKitContainer

+ (id)loadStoreURL;

- (void)configureDescriptonInMemory:(BOOL)a0;
- (id)initInMemory:(BOOL)a0;

@end
