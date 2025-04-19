@class NSArray;

@interface FCMyArticlesRequest : NSObject {
    void /* unknown type, empty encoding */ dateRange;
    void /* unknown type, empty encoding */ isFullFetch;
    void /* unknown type, empty encoding */ feeds;
    void /* unknown type, empty encoding */ maxItemsPerFeed;
}

@property (class, nonatomic, retain) FCMyArticlesRequest *lastRequestIssued;

@property (nonatomic, readonly) NSArray *feedIDs;

- (id)init;
- (void).cxx_destruct;

@end
