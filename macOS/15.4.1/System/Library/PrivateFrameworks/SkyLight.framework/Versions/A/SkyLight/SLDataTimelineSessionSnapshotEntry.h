@class NSArray;
@protocol SLDataTimelineSessionProcessCollection;

@interface SLDataTimelineSessionSnapshotEntry : SLDataTimelineSessionEntry <SLDataTimelineSession, SLDataTimelineSessionProcessCollection, SLXPCConvertible>

@property (readonly, nonatomic) NSArray *processesArray;
@property (readonly, nonatomic) unsigned int cgID;
@property (readonly, nonatomic) int auditID;
@property (readonly, nonatomic) BOOL currentSnapshotMember;
@property (readonly, nonatomic) id<SLDataTimelineSessionProcessCollection> processData;
@property (readonly, nonatomic) double sessionSnapshotTimestamp;
@property (readonly, nonatomic) unsigned long long sessionSnapshotIndex;
@property (readonly, nonatomic) int foregroundAppPID;
@property (readonly, nonatomic) NSArray *processes;

+ (id)entryWithXPCObject:(id)a0;

- (void)dealloc;
- (id)createXPCObject;
- (id)initWithXPCObject:(id)a0;
- (void)processesApplyBlock:(id /* block */)a0;

@end
