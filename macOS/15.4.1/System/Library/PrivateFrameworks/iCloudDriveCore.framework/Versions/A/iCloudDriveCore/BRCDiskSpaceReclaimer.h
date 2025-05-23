@class BRCAccountSession, NSObject;
@protocol OS_dispatch_queue;

@interface BRCDiskSpaceReclaimer : NSObject {
    BRCAccountSession *_session;
    BOOL _isClosed;
    BOOL _computingPurgable;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (double)accessTimeDeltaForUrgency:(int)a0;
+ (int)simpleUrgencyForCacheDeleteUrgency:(int)a0;

- (void).cxx_destruct;
- (void)close;
- (unsigned long long)totalSize;
- (void)computePurgeableSpaceForAllUrgenciesWithReply:(id /* block */)a0;
- (void)_cleanFPCreationItemIdentifier:(id)a0;
- (long long)_dbSizeInBytes:(id)a0;
- (long long)cachedPurgeableSpaceForUrgency:(int)a0;
- (void)_asyncAutovacuumIfNeeds:(id)a0;
- (long long)_computeCiconiaSizeInBytes:(BOOL)a0;
- (long long)_dbAutovacuumableSpaceInBytes:(id)a0;
- (long long)_doIncrementalVacuum:(id)a0 amount:(long long)a1;
- (long long)_fullVacuumIfPossible:(id)a0;
- (long long)_garbageCollectGroupContainerStage;
- (long long)_garbageCollectGroupContainersStageOfType:(short)a0 maxAgeDelta:(long long)a1;
- (long long)_purgeSpaceUnderQueue:(long long)a0 withUrgency:(int)a1;
- (long long)_vacuumDB:(id)a0 amount:(long long)a1 withUrgency:(int)a2;
- (long long)cachedNonPurgeableSpace;
- (id)initWithAccountSession:(id)a0;
- (unsigned long long)nonPurgeableSizeWithPurgeableSize:(unsigned long long)a0;
- (BOOL)performOptimizeStorageWithTimeDelta:(double)a0 onDiskAccessTimeDelta:(double)a1 error:(id *)a2;
- (long long)periodicReclaimSpace;
- (long long)purgeSpace:(long long)a0 withUrgency:(int)a1;
- (BOOL)renameAndUnlinkInBackgroundItemAt:(int)a0 path:(id)a1;
- (int)urgencyForCacheDeleteUrgency:(int)a0;

@end
