@class CIFilter, NURenderNodeCache, NURenderResultCache, VNSession, NUScheduler, NUCacheNodeRegistry, NURenderResourcePool, NSObject, NUMLModelRegistry, NSDate, NSString, NURenderPipelineRegistry, NUPurgeableStoragePool, NUSchemaRegistry, NUPlatform;
@protocol NUStorageFactory, OS_dispatch_queue;

@interface NUFactory : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_visionSessionLastUseTime;
}

@property (retain, nonatomic) NUSchemaRegistry *schemaRegistry;
@property (retain, nonatomic) NURenderPipelineRegistry *renderPipelineRegistry;
@property (copy, nonatomic) NSString *defaultNamespace;
@property (retain, nonatomic) NUScheduler *scheduler;
@property (retain, nonatomic) NUPurgeableStoragePool *bufferStoragePool;
@property (retain, nonatomic) NUPurgeableStoragePool *surfaceStoragePool;
@property (retain, nonatomic) id<NUStorageFactory> bufferFactory;
@property (retain, nonatomic) id<NUStorageFactory> surfaceFactory;
@property (retain, nonatomic) NURenderNodeCache *renderNodeCache;
@property (retain, nonatomic) NURenderResultCache *renderResultCache;
@property (retain, nonatomic) NURenderResourcePool *renderResourcePool;
@property (retain, nonatomic) NUPlatform *platform;
@property (retain, nonatomic) NUCacheNodeRegistry *cacheNodeRegistry;
@property (retain, nonatomic) CIFilter *repairMLFilter;
@property (retain, nonatomic) NUMLModelRegistry *modelRegistry;
@property (retain, nonatomic) VNSession *visionSession;

+ (void)reset;
+ (id)sharedFactory;
+ (void)freeAllResources:(BOOL)a0;
+ (BOOL)hasSharedFactory;
+ (void)reapAllStoragePools;
+ (void)setSharedFactory:(id)a0;
+ (void)shutdownSharedFactory;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)_evictVisionSessionIfNotUsedSince:(id)a0;
- (void)_scheduleEvictionOfVisionSession;

@end
