@class NUStoragePoolStats, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NUPurgeableStoragePool : NSObject {
    NUStoragePoolStats *_stats;
    unsigned long long _nonPurgeableActivityCounter;
    BOOL _migrationTimerScheduled;
    NSMutableArray *_sharedStoragesToBeReclaimedList;
}

@property (readonly, nonatomic) long long nonPurgeableLimit;
@property (readonly, nonatomic) long long purgeableLimit;
@property (readonly, nonatomic) double migrationDelay;
@property (readonly, nonatomic) NSMutableArray *volatileList;
@property (readonly, nonatomic) NSMutableArray *nonPurgeableList;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *migrationQueue;
@property (readonly, copy, nonatomic) NUStoragePoolStats *stats;
@property (readonly, nonatomic) Class storageClass;

+ (void)initialize;
+ (void)purge:(BOOL)a0;
+ (void)reapAllVolatile;
+ (void)reapAllPurged;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)purge:(BOOL)a0;
- (void)_returnStorage:(id)a0;
- (id)_allocateStorageWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)_enforcePurgableLimit;
- (void)_migrateAllNonPurgeableStorageIfNoRecentActivity:(unsigned long long)a0;
- (void)_migrateOldestNonPurgeableStorageToPurgeable;
- (void)_migrateStorageToPurgeable:(id)a0;
- (void)_migrationTimer:(unsigned long long)a0;
- (id)_popOldestNonPurgeableStorage;
- (void)_reapPurged;
- (void)_reapVolatile;
- (void)_reclaimSharedStorages;
- (void)_resetNonPurgeableStorageMigrationTimer;
- (void)_returnNonPurgeableStorage:(id)a0;
- (void)_returnPurgedStorage:(id)a0;
- (void)_returnVolatileStorage:(id)a0;
- (void)_scheduleMigrationTimer;
- (id)_storageFromPoolWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1 exactMatch:(BOOL)a2;
- (id)initWithStorageClass:(Class)a0;
- (void)migrateAllNonPurgeableStorage;
- (id)newStorageWithMinimumSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (id)newStorageWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (id)newStorageWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1 exactMatch:(BOOL)a2;
- (id)reapPurged;
- (id)reapVolatile;
- (void)returnStorage:(id)a0;
- (void)waitForMigration;

@end
