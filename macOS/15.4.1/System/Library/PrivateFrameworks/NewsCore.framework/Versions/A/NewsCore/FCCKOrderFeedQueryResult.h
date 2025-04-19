@class NSArray;

@interface FCCKOrderFeedQueryResult : NSObject {
    NSArray *_feedItemAndArticleRecords;
    NSArray *_feedResponses;
    NSArray *_tagRecords;
    NSArray *_issueRecords;
    NSArray *_networkEvents;
}

- (void).cxx_destruct;

@end
