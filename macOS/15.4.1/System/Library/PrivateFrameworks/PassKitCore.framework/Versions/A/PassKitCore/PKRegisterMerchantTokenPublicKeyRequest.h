@class NSString, NSData;

@interface PKRegisterMerchantTokenPublicKeyRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *primaryAccountIdentifier;
@property (copy, nonatomic) NSString *merchantTokenIdentifier;
@property (copy, nonatomic) NSData *currentMerchantTokenPublicKeyHash;
@property (copy, nonatomic) NSData *merchantTokenPublicKey;

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)a0 secureElementID:(id)a1 appleAccountInformation:(id)a2 webService:(id)a3 completion:(id /* block */)a4;

@end
