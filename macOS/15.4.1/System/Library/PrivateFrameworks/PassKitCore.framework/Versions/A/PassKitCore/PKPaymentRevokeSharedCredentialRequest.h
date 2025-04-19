@class NSDictionary, PKAppletSubcredential;

@interface PKPaymentRevokeSharedCredentialRequest : PKPaymentWebServiceRequest {
    NSDictionary *_revocationAttestation;
    PKAppletSubcredential *_credential;
}

- (void).cxx_destruct;
- (id)requestBody;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithCredential:(id)a0 revocationAttestation:(id)a1;

@end
