@interface WebStorageManager : NSObject

+ (void)setStorageDatabaseIdleInterval:(double)a0;
+ (id)_storageDirectoryPath;
+ (void)closeIdleLocalStorageDatabases;
+ (id)sharedWebStorageManager;

- (id)init;
- (id)origins;
- (void)deleteAllOrigins;
- (void)deleteOrigin:(id)a0;
- (unsigned long long)diskUsageForOrigin:(id)a0;
- (void)syncFileSystemAndTrackerDatabase;
- (void)syncLocalStorage;

@end
