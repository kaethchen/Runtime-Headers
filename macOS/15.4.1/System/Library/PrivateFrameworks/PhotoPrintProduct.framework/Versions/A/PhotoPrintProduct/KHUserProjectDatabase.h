@class NSMutableDictionary, NSString, NSURL, KHDBDatabaseManager, NSLock;

@interface KHUserProjectDatabase : KHDBDatabase <KHBehaviorCacheProtocol> {
    NSString *_databaseName;
    NSLock *_behaviorMapLock;
    NSLock *_behaviorAttributeLock;
}

@property (readonly, nonatomic) KHDBDatabaseManager *databaseManager;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSMutableDictionary *behaviorMap;
@property (readonly, nonatomic) NSMutableDictionary *treatmentBehaviorMap;
@property (readonly, nonatomic) NSMutableDictionary *behaviorAttributeCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)mergeProjectsFromDBAtPath:(id)a0 toDBAtPath:(id)a1;
+ (id)sharedUserProjectScratchDatabase;
+ (void)shutdownSharedUserProjectScratchDatabase;

- (void)dealloc;
- (id)initWithDatabasePath:(id)a0;
- (void)clearBehaviorAttributeCache;
- (void)loadBehaviorMaps;
- (BOOL)openDatabaseWithOptions:(unsigned int)a0;
- (void)unloadBehaviorMaps;

@end
