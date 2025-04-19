@interface PLSearchIndexPendingWorkItem : NSObject <NSCopying>

@property (nonatomic) BOOL rebuildInProgress;
@property (nonatomic) short jobType;
@property (nonatomic) long long jobFlags;

+ (id)pendingWorkItemWithType:(short)a0 flags:(long long)a1;
+ (id)rebuildInProgressPendingWorkItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
