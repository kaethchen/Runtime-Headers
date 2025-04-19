@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreDocumentationDataManager : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain, nonatomic) NSString *documentationPath;

+ (id)sharedManager;
+ (void)setupSharedManagerWithStashPath:(id)a0;
+ (id)_sharedManagerInitWithPath:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)getDocumentationForInstalledUpdateType:(unsigned long long)a0 withError:(id *)a1;
- (BOOL)cleanupNonInstalledDocumentationWithError:(id *)a0;
- (id)getDocumentationDataForInstalledUpdateType:(unsigned long long)a0 withError:(id *)a1;
- (id)initWithStashPath:(id)a0;
- (id)installedBuildVersionsWithError:(id *)a0;
- (BOOL)queue_cleanupNonInstalledDocumentationWithError:(id *)a0;
- (BOOL)queue_evictStashIfNecessary:(id *)a0;
- (BOOL)queue_getDocumentation:(id *)a0 documentationData:(id *)a1 forInstalledUpdateType:(unsigned long long)a2 withError:(id *)a3;
- (BOOL)queue_stashDocumentationAssetData:(id)a0 forBuildVersion:(id)a1 error:(id *)a2;
- (BOOL)stashDocumentationAssetData:(id)a0 forBuildVersion:(id)a1 error:(id *)a2;
- (id)stashedDataDirectoryForBuildVersion:(id)a0;

@end
