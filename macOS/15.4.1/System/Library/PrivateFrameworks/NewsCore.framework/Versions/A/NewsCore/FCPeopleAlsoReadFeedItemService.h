@protocol FCReadingHistoryType, FCNewsAppConfigurationManager, FCContentContext;

@interface FCPeopleAlsoReadFeedItemService : NSObject <FCFeedItemServiceType>

@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> configurationManager;
@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) id<FCReadingHistoryType> readingHistory;

- (id)init;
- (void).cxx_destruct;
- (void)fetchFeedItemsWithCursor:(id)a0 feedItemHandler:(id /* block */)a1 networkEventHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)initWithConfigurationManager:(id)a0 contentContext:(id)a1 readingHistory:(id)a2;

@end
