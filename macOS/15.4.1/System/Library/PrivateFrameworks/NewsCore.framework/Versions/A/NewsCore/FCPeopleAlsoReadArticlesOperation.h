@class FCFeedItemServiceCursor, FCPeopleAlsoReadConfiguration, NSArray, NSDate;
@protocol FCReadingHistoryType, FCContentContext;

@interface FCPeopleAlsoReadArticlesOperation : FCOperation

@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (retain, nonatomic) FCPeopleAlsoReadConfiguration *configuration;
@property (retain, nonatomic) id<FCReadingHistoryType> readingHistory;
@property (copy, nonatomic) FCFeedItemServiceCursor *cursor;
@property (copy, nonatomic) NSDate *referenceDate;
@property (retain, nonatomic) NSArray *networkEvents;
@property (copy, nonatomic) id /* block */ feedItemHandler;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (BOOL)validateOperation;
- (void)_continueOperation;
- (void)_continueOperationWithArticleListIDs:(id)a0;
- (void)_continueOperationWithArticleListIDsNoCache:(id)a0;
- (void)_continueOperationWithCandidateSeedArticleIDs:(id)a0;
- (void)_continueOperationWithSeedArticleIDs:(id)a0;
- (id)_feedItemFromArticleRecord:(id)a0 articleListsByArticleID:(id)a1;
- (BOOL)_shouldBypassCache;
- (id)initWithContentContext:(id)a0 configuration:(id)a1 readingHistory:(id)a2 cursor:(id)a3;

@end
