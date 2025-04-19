@protocol SLDataTimelineSessionProcessCollection;

@interface SLDataTimelineSessionEntry : NSObject <SLDataTimelineSession, SLXPCConvertible>

@property (readonly, nonatomic) unsigned int cgID;
@property (readonly, nonatomic) int auditID;
@property (readonly, nonatomic) BOOL currentSnapshotMember;
@property (readonly, nonatomic) id<SLDataTimelineSessionProcessCollection> processData;

+ (id)entryWithXPCObject:(id)a0;

- (id)createXPCObject;
- (id)initWithXPCObject:(id)a0;

@end
