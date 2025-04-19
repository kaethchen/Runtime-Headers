@class WCDeviceLookup;

@interface WCCloudMigrator : NSObject

@property (readonly, nonatomic) WCDeviceLookup *deviceLookup;

+ (BOOL)isRunningInTheWeatherAppProcess;

- (id)init;
- (void).cxx_destruct;
- (void)eraseStoreIfNeeded:(id)a0;
- (void)migrateStore:(id)a0 toStore:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)storeRequiresMigration:(id)a0;

@end
