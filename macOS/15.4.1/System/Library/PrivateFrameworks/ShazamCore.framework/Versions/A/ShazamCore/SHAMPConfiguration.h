@class SHStreamingProviders, SHOffers;

@interface SHAMPConfiguration : NSObject

@property (readonly) SHOffers *offers;
@property (readonly) SHStreamingProviders *streamingProviders;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (id)offerResponseFromResponse:(id)a0;
- (id)streamingProvidersResponseFromResponse:(id)a0;

@end
