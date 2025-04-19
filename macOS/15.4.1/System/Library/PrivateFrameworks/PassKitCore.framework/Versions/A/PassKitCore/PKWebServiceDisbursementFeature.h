@class NSSet;

@interface PKWebServiceDisbursementFeature : PKWebServiceRegionFeature

@property (readonly, copy, nonatomic) NSSet *supportedNetworks;

+ (id)disbursementFeatureWithWebService:(id)a0;
+ (id)fallbackSupportedNetworksIfNoFeatureFound;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 region:(id)a1;
- (id)initWithSupportedNetworks:(id)a0;

@end
