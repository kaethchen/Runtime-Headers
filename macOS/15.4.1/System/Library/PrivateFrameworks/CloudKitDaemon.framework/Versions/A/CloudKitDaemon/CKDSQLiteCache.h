@class CKDLogicalDeviceContext;

@interface CKDSQLiteCache : CKSQLite

@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

+ (id)sharedCache;
+ (id)cacheDirectory;
+ (id)dbFileName;
+ (id)cacheDatabaseSchema;

- (void).cxx_destruct;
- (id)initWithDeviceContext:(id)a0;
- (id)initOrExitWithPath:(id)a0 isSharedCache:(BOOL)a1;
- (id)initWithCacheDir:(id)a0;

@end
