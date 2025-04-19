@class NSDictionary;

@interface PKPaymentRegisterPreTrackCredentialRequest : PKPaymentRegisterCredentialRequest {
    NSDictionary *_encryptedVehicleDataRequest;
    NSDictionary *_encryptedShareData;
}

- (void).cxx_destruct;
- (void)buildRequestBody:(id)a0;
- (id)initWithCredential:(id)a0 encryptedVehicleDataRequest:(id)a1 encryptedShareData:(id)a2 metadata:(id)a3;
- (id)initWithCredential:(id)a0 metadata:(id)a1;

@end
