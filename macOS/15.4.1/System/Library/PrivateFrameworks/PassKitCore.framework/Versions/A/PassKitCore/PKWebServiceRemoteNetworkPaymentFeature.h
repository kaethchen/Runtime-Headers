@class NSArray;

@interface PKWebServiceRemoteNetworkPaymentFeature : PKWebServiceRegionFeature

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, copy, nonatomic) NSArray *unsupportedIssuerCardCountryCodes;
@property (readonly, copy, nonatomic) NSArray *unsupportedNetworks;

+ (id)remoteNetworkPaymentFeatureWithWebService:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 region:(id)a1;

@end
