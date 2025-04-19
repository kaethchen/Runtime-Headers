@class NSString, NSSet, NSDictionary;

@interface PKWebServiceVirtualCardFeature : PKWebServiceRegionFeature

@property (readonly, copy, nonatomic) NSString *merchantId;
@property (readonly, copy, nonatomic) NSSet *implicitlySupportedNetworks;
@property (copy, nonatomic) NSDictionary *networks;
@property (readonly, copy, nonatomic) NSDictionary *cashVPANNetworks;

+ (id)virtualCardFeatureWithWebService:(id)a0;

- (void).cxx_destruct;
- (BOOL)doesPaymentApplication:(id)a0 supportVPANOnDevice:(id)a1 associatedAccountFeatureIdentifier:(unsigned long long)a2;
- (id)initWithFeatureType:(long long)a0 dictionary:(id)a1 region:(id)a2;
- (unsigned long long)refreshTypeForPaymentApplication:(id)a0;

@end
