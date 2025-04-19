@class SHStorefront;

@interface SHAMPConfigurationRequester : NSObject

@property (readonly) SHStorefront *storefront;

- (void).cxx_destruct;
- (void)configurationEndpoint:(id /* block */)a0;
- (id)endpointURLWithHost:(id)a0 path:(id)a1 storefront:(id)a2;
- (void)fetchOffersAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchShazamAMPConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchStreamingProvidersAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)offersWithCompletion:(id /* block */)a0;
- (void)streamingProvidersWithCompletion:(id /* block */)a0;

@end
