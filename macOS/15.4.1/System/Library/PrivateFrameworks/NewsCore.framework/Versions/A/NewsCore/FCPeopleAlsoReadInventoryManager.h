@class NSString;
@protocol FCOperationThrottler, FCFeedItemInventoryType;

@interface FCPeopleAlsoReadInventoryManager : NSObject <FCOperationThrottlerDelegate, FCReadingHistoryObserving>

@property (readonly, nonatomic) id<FCFeedItemInventoryType> inventory;
@property (readonly, nonatomic) id<FCOperationThrottler> refreshThrottler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (id)initWithInventory:(id)a0 readingHistory:(id)a1;
- (void)readingHistory:(id)a0 didAddArticlesWithIDs:(id)a1;
- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (void)readingHistory:(id)a0 didRemoveArticlesWithIDs:(id)a1;
- (void)readingHistoryDidClear:(id)a0;
- (void)readingHistoryLikelyClearedRemotely:(id)a0;

@end
