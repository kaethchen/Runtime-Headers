@class NSRecursiveLock, NSString, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface KHProjectGroup : KHModel <KHAssetGeneration> {
    NSString *_name;
    NSDate *_date;
    long long _status;
    NSMutableArray *_projects;
    NSRecursiveLock *_projectLock;
    NSObject<OS_dispatch_queue> *_workerQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *price;
@property (readonly, nonatomic) NSString *themeIdentifier;

+ (id)createInDatabase:(id)a0 withName:(id)a1 uuid:(id)a2;
+ (id)createInDatabase:(id)a0 withName:(id)a1;
+ (unsigned long long)maximumNumberOfProjects;
+ (void)setMaximumNumberOfProjects:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (id)name;
- (id)date;
- (void)setName:(id)a0;
- (long long)status;
- (void)remove;
- (void)unload;
- (id)creationDate;
- (void)setDate:(id)a0;
- (id)clone;
- (id)recipientAddresses;
- (void)setStatus:(long long)a0;
- (id)projects;
- (void)setRecipientAddresses:(id)a0;
- (id)projectsWithContentIssueOfType:(unsigned long long)a0;
- (id)generateAssetsInDirectoryAtPath:(id)a0 assetIdentifier:(id)a1 progress:(id)a2 error:(id *)a3;
- (id)_projectForAssetId:(id)a0;
- (void)addProject:(id)a0;
- (void)addProject:(id)a0 notify:(BOOL)a1;
- (void)cacheDate:(id)a0;
- (void)cacheDateWithString:(id)a0;
- (void)cacheName:(id)a0;
- (void)cacheStatus:(long long)a0;
- (BOOL)canAddProject;
- (BOOL)canRemoveProject;
- (void)clearProjectCache;
- (id)cloneInDatabase:(id)a0 withUuid:(id)a1;
- (id)firstProject;
- (id)generateAssetThumbnailsInDirectoryAtPath:(id)a0 assetIdentifier:(id)a1 progress:(id)a2 error:(id *)a3;
- (id)initWithUuid:(id)a0 forEntity:(id)a1;
- (BOOL)isProjectModel;
- (unsigned long long)numberOfResourcesThatRequireGenerationWithinDirectory:(id)a0 assetIdentifier:(id)a1;
- (id)photoIds;
- (void)reevaluateName;
- (void)removeProject:(id)a0;
- (void)removeProject:(id)a0 notify:(BOOL)a1;
- (void)setReturnAddress:(id)a0;
- (long long)sortByDate:(id)a0;
- (long long)sortByDateDescending:(id)a0;
- (long long)sortById:(id)a0;

@end
