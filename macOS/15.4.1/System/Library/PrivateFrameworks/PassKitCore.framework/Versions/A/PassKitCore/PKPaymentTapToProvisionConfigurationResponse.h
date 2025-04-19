@class NSData;

@interface PKPaymentTapToProvisionConfigurationResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSData *nonce;
@property (readonly, nonatomic) long long countryCode;
@property (readonly, nonatomic) long long currencyCode;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
