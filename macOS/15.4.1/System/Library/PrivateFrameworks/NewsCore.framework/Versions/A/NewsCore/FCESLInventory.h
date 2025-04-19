@class NSArray;
@protocol FCFeedItemInventoryType;

@interface FCESLInventory : NSObject <FCFeedItemInventoryType>

@property (readonly, nonatomic) id<FCFeedItemInventoryType> globalInventory;
@property (readonly, nonatomic) id<FCFeedItemInventoryType> tagInventory;
@property (readonly, nonatomic) NSArray *allFeedItems;
@property (readonly, nonatomic) NSArray *allNetworkEvents;

- (void).cxx_destruct;
- (id)_childInventories;
- (void)_enumerateChildInventories:(id /* block */)a0;
- (id)allFeedItemScoreProfilesForConfigurationSet:(long long)a0 scoringVersion:(unsigned long long)a1;
- (id)allFeedItemsWithTopic:(id)a0;
- (id)initWithGlobalInventory:(id)a0 tagInventory:(id)a1;
- (void)prewarmScoreCache:(id)a0 configuration:(id)a1;
- (void)refreshIfNeededWithCompletion:(id /* block */)a0;

@end
