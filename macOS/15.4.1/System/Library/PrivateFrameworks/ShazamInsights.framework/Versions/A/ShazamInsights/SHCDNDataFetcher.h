@class NSString;
@protocol SHNetworkRequester;

@interface SHCDNDataFetcher : NSObject <SHDataFetcher>

@property (readonly) id<SHNetworkRequester> networkRequester;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)clusterDataAtURL:(id)a0 forLocation:(id)a1 date:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)doesRequestEtag:(id)a0 matchInResponse:(id)a1;
- (void)fetchClusterURL:(id)a0 forCurrentStorefront:(id)a1 cachedUniqueHash:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithNetworkRequester:(id)a0;

@end
