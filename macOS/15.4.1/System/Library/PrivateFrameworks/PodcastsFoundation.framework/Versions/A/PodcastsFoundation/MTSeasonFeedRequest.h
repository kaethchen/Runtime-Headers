@class NSArray;

@interface MTSeasonFeedRequest : MTPartialFeedRequest {
    void /* unknown type, empty encoding */ seasons;
}

@property (nonatomic, copy) NSArray *seasons;

- (void).cxx_destruct;
- (id)initWithStoreID:(long long)a0;
- (id)initWithStoreID:(long long)a0 seasons:(id)a1;

@end
