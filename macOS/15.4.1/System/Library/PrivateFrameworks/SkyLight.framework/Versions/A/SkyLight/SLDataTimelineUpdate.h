@class SLDataTimelineSnapshotCollection, SLDataTimelineConnection;

@interface SLDataTimelineUpdate : NSObject <SLDataTimelineUpdate>

@property (nonatomic) BOOL collectionClaimed;
@property (readonly, nonatomic) SLDataTimelineSnapshotCollection *collection;
@property (readonly, nonatomic) SLDataTimelineConnection *connection;
@property (readonly, nonatomic) unsigned int action;
@property (readonly, nonatomic) unsigned long long snapshotCount;
@property (readonly, nonatomic) unsigned long long oldestSnapshotIndex;
@property (readonly, nonatomic) unsigned long long newestSnapshotIndex;
@property (readonly, nonatomic) double oldestSnapshotTimestamp;
@property (readonly, nonatomic) double newestSnapshotTimestamp;

+ (id)updateWithConnection:(id)a0 collection:(id)a1 action:(unsigned int)a2;

- (void)dealloc;
- (id)claimSnapshotCollection;
- (id)initWithConnection:(id)a0 collection:(id)a1 action:(unsigned int)a2;

@end
