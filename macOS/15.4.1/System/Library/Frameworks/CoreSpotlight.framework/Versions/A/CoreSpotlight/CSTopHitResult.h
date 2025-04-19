@class CSSearchableItem;

@interface CSTopHitResult : TopHitResult

@property (readonly, nonatomic) CSSearchableItem *resultItem;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRankingItem:(id)a0 resultItem:(id)a1;

@end
