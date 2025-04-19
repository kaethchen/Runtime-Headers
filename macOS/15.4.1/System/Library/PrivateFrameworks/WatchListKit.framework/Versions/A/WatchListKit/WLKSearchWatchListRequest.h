@class NSDictionary;

@interface WLKSearchWatchListRequest : WLKRequest

@property (readonly, copy, nonatomic) NSDictionary *query;

- (void).cxx_destruct;
- (id)initWithQuery:(id)a0;
- (void)makeRequestWithCompletion:(id /* block */)a0;

@end
