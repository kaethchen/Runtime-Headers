@class NSDictionary;

@interface SHStreamingProviders : NSObject

@property (readonly) NSDictionary *providersKeyedByBundleID;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (id)availableBundleIdentifiers;
- (long long)availableStreamingProviders;
- (id)buildStreamingProvidersFromResponseArray:(id)a0;
- (id)providerNameForBundleID:(id)a0;
- (id)searchURLForBundleID:(id)a0 title:(id)a1 artist:(id)a2;
- (id)songURIForBundleID:(id)a0;
- (id)streamingProviderForBundleID:(id)a0;

@end
