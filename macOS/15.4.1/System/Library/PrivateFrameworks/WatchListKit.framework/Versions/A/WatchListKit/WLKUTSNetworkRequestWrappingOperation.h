@class WLKUTSNetworkRequestOperation;

@interface WLKUTSNetworkRequestWrappingOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKUTSNetworkRequestOperation *underlyingOperation;

- (void).cxx_destruct;
- (id)data;
- (id)error;
- (long long)resourceFetchType;
- (long long)responseStatusCode;
- (id)httpResponse;
- (id)responseDictionary;
- (void)executionDidBegin;
- (id)initWithRequestProperties:(id)a0 underlyingOperation:(id)a1;

@end
