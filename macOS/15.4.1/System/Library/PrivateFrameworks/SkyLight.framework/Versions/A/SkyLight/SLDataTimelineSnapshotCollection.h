@class NSArray, NSMutableArray;

@interface SLDataTimelineSnapshotCollection : NSObject <SLDataTimelineSnapshotCollection, SLXPCExportable>

@property (readonly, nonatomic) NSMutableArray *snapshotsArray;
@property (readonly, nonatomic) NSArray *snapshots;
@property (readonly, nonatomic) unsigned long long snapshotCount;
@property (readonly, nonatomic) unsigned long long oldestSnapshotIndex;
@property (readonly, nonatomic) unsigned long long newestSnapshotIndex;
@property (readonly, nonatomic) double oldestSnapshotTimestamp;
@property (readonly, nonatomic) double newestSnapshotTimestamp;

+ (id)snapshotArrayFromXPCObject:(id)a0;

- (void)dealloc;
- (id)init;
- (id)createXPCObject;
- (void)mergeInNewSnapshots:(id)a0;
- (void)snapshotsApplyBlock:(id /* block */)a0;

@end
