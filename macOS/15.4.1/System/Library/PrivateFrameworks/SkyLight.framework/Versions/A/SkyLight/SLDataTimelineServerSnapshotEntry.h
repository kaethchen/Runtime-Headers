@class NSArray;

@interface SLDataTimelineServerSnapshotEntry : NSObject <SLDataTimelineServerSnapshot, SLXPCConvertible>

@property (readonly, nonatomic) NSArray *sessionsArray;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) NSArray *sessions;

+ (id)entryWithXPCObject:(id)a0;

- (void)dealloc;
- (id)createXPCObject;
- (id)initWithXPCObject:(id)a0;
- (void)sessionsApplyBlock:(id /* block */)a0;

@end
