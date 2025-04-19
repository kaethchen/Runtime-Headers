@class NSString, PKEncryptedVPANPaymentCredentials;

@interface PKVPANPaymentCredentialResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *vpanIdentifier;
@property (readonly, copy, nonatomic) NSString *expiration;
@property (readonly, copy, nonatomic) PKEncryptedVPANPaymentCredentials *credentials;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
