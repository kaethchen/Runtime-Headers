@class NSURLRequest, NSHTTPURLResponse, NSURLCache, NSObject;
@protocol OS_dispatch_data;

@interface NWURLLoaderCache : NSObject {
    NSURLCache *_cache;
    unsigned long long _cacheStoragePolicy;
    NSObject<OS_dispatch_data> *_dataToCache;
    unsigned long long _maxItemSizeToCache;
    NSHTTPURLResponse *_response;
    NSURLRequest *_request;
}

- (void).cxx_destruct;

@end
