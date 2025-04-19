@class NWURLError, NSString, NWURLSessionTaskConfiguration, NWURLSessionReadRequest, NSURLResponse, NSURLCache, NSURLProtocol, NSCachedURLResponse, NSURLRequest, NSObject;
@protocol OS_dispatch_queue, OS_sec_trust, OS_dispatch_data, OS_nw_http_fields, OS_nw_connection, NWURLLoaderClient;

@interface NWURLLoader : NSObject <NWURLLoader, NSURLProtocolClient> {
    BOOL _complete;
    NSURLRequest *_request;
    NWURLSessionTaskConfiguration *_configuration;
    id<NWURLLoaderClient> _client;
    NSObject<OS_dispatch_queue> *_queue;
    Class _protocolClass;
    NSURLCache *_cache;
    NSURLProtocol *_protocol;
    unsigned long long _cacheStoragePolicy;
    NSObject<OS_dispatch_data> *_dataToCache;
    NSCachedURLResponse *_cachedResponseInternal;
    unsigned long long _maxItemSizeToCache;
    id /* block */ _awaitingResponse;
    NSURLResponse *_response;
    NWURLSessionReadRequest *_readRequest;
    NWURLError *_error;
}

@property (readonly, nonatomic) NSString *multipartMixedReplaceBoundary;
@property (readonly, nonatomic) NSObject<OS_sec_trust> *peerTrust;
@property (readonly, nonatomic) BOOL requestComplete;
@property (readonly, nonatomic) NSObject<OS_nw_http_fields> *trailerFields;
@property (readonly, nonatomic) NSObject<OS_nw_connection> *underlyingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stop;
- (void)start:(id /* block */)a0;
- (void)URLProtocol:(id)a0 cachedResponseIsValid:(id)a1;
- (void)URLProtocol:(id)a0 didCancelAuthenticationChallenge:(id)a1;
- (void)URLProtocol:(id)a0 didFailWithError:(id)a1;
- (void)URLProtocol:(id)a0 didLoadData:(id)a1;
- (void)URLProtocol:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)URLProtocol:(id)a0 didReceiveResponse:(id)a1 cacheStoragePolicy:(unsigned long long)a2;
- (void)URLProtocol:(id)a0 wasRedirectedToRequest:(id)a1 redirectResponse:(id)a2;
- (void)URLProtocolDidFinishLoading:(id)a0;
- (BOOL)allowsWriteAfterBecomingStream;
- (BOOL)canHandleRedirectionToRequest:(id)a0;
- (void)notifyRequestCompletion:(id /* block */)a0;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)a0 maximumLength:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)readResponse:(id /* block */)a0;
- (id)takeCachedResponse;
- (void)updateClient:(id)a0;
- (void)writeData:(id)a0 complete:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
