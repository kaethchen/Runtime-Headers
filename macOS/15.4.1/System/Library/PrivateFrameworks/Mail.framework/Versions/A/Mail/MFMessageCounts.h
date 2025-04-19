@interface MFMessageCounts : NSObject

@property (readonly, nonatomic) unsigned long long totalCount;
@property (readonly, nonatomic) unsigned long long unreadCount;
@property (readonly, nonatomic) unsigned long long unseenCount;
@property (readonly, nonatomic) unsigned long long deletedCount;
@property (readonly, nonatomic) unsigned long long unreadAdjustedForDuplicates;

- (id)description;
- (id)initWithTotal:(unsigned long long)a0 unread:(unsigned long long)a1 unseen:(unsigned long long)a2 deleted:(unsigned long long)a3 unreadAdjustedForDuplicates:(unsigned long long)a4;

@end
