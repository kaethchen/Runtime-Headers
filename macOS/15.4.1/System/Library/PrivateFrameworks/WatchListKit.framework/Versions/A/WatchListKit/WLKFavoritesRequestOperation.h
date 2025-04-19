@class NSArray;

@interface WLKFavoritesRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSArray *favorites;

- (void).cxx_destruct;
- (id)initWithCaller:(id)a0;
- (void)processResponse;
- (void)prepareURLRequest:(id /* block */)a0;

@end
