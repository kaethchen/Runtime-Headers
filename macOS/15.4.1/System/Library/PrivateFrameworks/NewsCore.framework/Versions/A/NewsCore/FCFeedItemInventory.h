@class FCOnce, NSString, NSURL, NFUnfairLock, NSArray, FCAsyncSerialQueue, NSMutableSet, FCThreadSafeMutableArray, FCPBFeedItemInventory;
@protocol FCOperationThrottler, FCFeedItemServiceType, FCFeedPersonalizing;

@interface FCFeedItemInventory : NSObject <FCOperationThrottlerDelegate, FCReadingHistoryObserving, FCFeedItemInventoryType>

@property (readonly, nonatomic) id<FCFeedItemServiceType> feedItemService;
@property (readonly, nonatomic) id<FCFeedPersonalizing> feedPersonalizer;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) double refreshInterval;
@property (readonly, nonatomic) NSString *loggingKey;
@property (readonly, nonatomic) FCOnce *loadFromCacheOnce;
@property (retain) FCPBFeedItemInventory *latestInventory;
@property (readonly, nonatomic) FCAsyncSerialQueue *feedItemsRefreshSerialQueue;
@property (readonly, nonatomic) FCThreadSafeMutableArray *networkEvents;
@property (readonly, nonatomic) NSMutableSet *articleIDsToRescore;
@property (readonly, nonatomic) NFUnfairLock *articleIDsToRescoreLock;
@property (readonly, nonatomic) id<FCOperationThrottler> targetedRescoreThrottler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *allFeedItems;
@property (readonly, nonatomic) NSArray *allNetworkEvents;

- (id)init;
- (void).cxx_destruct;
- (id)_refreshIfNeeded;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (void)_adoptInventory:(id)a0;
- (BOOL)_isRefreshNeeded;
- (id)_loadInventoryFromCache;
- (void)_populateScoreProfilesForFeedItems:(id)a0;
- (void)_populateScoreProfilesForFeedItems:(id)a0 configurationSet:(long long)a1;
- (void)_prepareForUse;
- (void)_rescoreInventoryIfNeeded:(id)a0 forScoringVersion:(unsigned long long)a1;
- (id)allFeedItemScoreProfilesForConfigurationSet:(long long)a0 scoringVersion:(unsigned long long)a1;
- (id)allFeedItemsWithTopic:(id)a0;
- (id)initWithFeedItemService:(id)a0 feedPersonalizer:(id)a1 readingHistory:(id)a2 fileURL:(id)a3 version:(unsigned int)a4 refreshInterval:(double)a5 loggingKey:(id)a6;
- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (void)refreshIfNeededWithCompletion:(id /* block */)a0;

@end
