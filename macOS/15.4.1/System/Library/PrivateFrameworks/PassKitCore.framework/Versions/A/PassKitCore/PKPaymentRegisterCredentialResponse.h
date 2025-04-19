@class NSURL, NSData, PKSubcredentialEncryptedContainer;

@interface PKPaymentRegisterCredentialResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSURL *passURL;
@property (readonly, nonatomic) NSData *credentialAttestation;
@property (readonly, nonatomic) PKSubcredentialEncryptedContainer *vehicleMobilizationEncryptedContainer;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
