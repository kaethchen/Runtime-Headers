@class NSMutableOrderedSet, CCSharedItem;

@interface CCMutableSetChange : NSObject <NSCopying>

@property (readonly, nonatomic) CCSharedItem *sharedItem;
@property (nonatomic) unsigned short sharedItemChangeType;
@property (readonly, nonatomic) NSMutableOrderedSet *allDevices;
@property (readonly, nonatomic) NSMutableOrderedSet *addedDevices;
@property (readonly, nonatomic) NSMutableOrderedSet *removedDevices;
@property (readonly, nonatomic) NSMutableOrderedSet *allLocalInstances;
@property (readonly, nonatomic) NSMutableOrderedSet *addedLocalInstances;
@property (readonly, nonatomic) NSMutableOrderedSet *removedLocalInstances;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)containsChangesAfterDeduplication;
- (BOOL)containsContentHash:(id)a0;
- (id)initWithSharedItem:(id)a0 changeType:(unsigned short)a1;

@end
