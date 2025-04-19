@class NSDictionary, NSPersistentStoreCoordinator, NSObject, NSManagedObjectContext;
@protocol OS_dispatch_queue, OS_os_log;

@interface AssetCacheMetricsReader : NSObject

@property (retain) NSDictionary *databaseOptions;
@property BOOL isSetup;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSPersistentStoreCoordinator *coordinator;
@property (retain) NSManagedObjectContext *context;
@property (retain) NSObject<OS_os_log> *logHandle;

- (id)init;
- (void).cxx_destruct;
- (id)_fetchManagedObjectsSinceDate:(id)a0 withError:(id *)a1;
- (id)_metricForManagedObject:(id)a0;
- (id)_readMetricsSinceDate:(id)a0 withError:(id *)a1;
- (BOOL)_setupMetricsReaderWithError:(id *)a0;
- (id)metricsSinceDate:(id)a0 withError:(id *)a1;

@end
