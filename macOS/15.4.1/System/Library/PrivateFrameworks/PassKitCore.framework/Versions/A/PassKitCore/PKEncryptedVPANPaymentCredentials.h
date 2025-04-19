@class NSData;

@interface PKEncryptedVPANPaymentCredentials : NSObject

@property (readonly, copy, nonatomic) NSData *ephemeralPublicKey;
@property (readonly, copy, nonatomic) NSData *encryptedCardData;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
