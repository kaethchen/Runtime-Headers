@class NSArray;

@interface MTPartialFeedRequest : MTBaseFeedRequest {
    void /* unknown type, empty encoding */ sections;
}

@property (nonatomic) void /* unknown type, empty encoding */ limit;
@property (nonatomic, copy) NSArray *sections;
@property (nonatomic) void /* unknown type, empty encoding */ showTypeIsSerial;

- (void).cxx_destruct;
- (id)initWithStoreID:(long long)a0;

@end
