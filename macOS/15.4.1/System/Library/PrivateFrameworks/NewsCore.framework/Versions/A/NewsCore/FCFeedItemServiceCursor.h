@class NTPBDate, NSArray;

@interface FCFeedItemServiceCursor : NSObject <NSCopying>

@property (readonly, nonatomic) NTPBDate *lastRefreshed;
@property (readonly, nonatomic) NSArray *feedItems;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLastRefreshed:(id)a0 feedItems:(id)a1;

@end
