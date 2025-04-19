@class FCFeedRange, NSString, NSArray, NSError;

@interface FCFeedResponse : NSObject

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSArray *feedItems;
@property (nonatomic) BOOL exhaustedRequestRange;
@property (copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) FCFeedRange *feedRange;

- (id)init;
- (void).cxx_destruct;
- (long long)compareFeedItemCount:(id)a0;
- (id)feedResponseByMergingWithResponse:(id)a0;

@end
