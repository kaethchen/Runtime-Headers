@class NSString, PKContact, NSData, NSDictionary, PKPeerPaymentQuote;

@interface PKAuthorizedPeerPaymentQuote : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPeerPaymentQuote *peerPaymentQuote;
@property (retain, nonatomic) PKContact *contact;
@property (readonly, nonatomic) NSData *transactionData;
@property (readonly, nonatomic) NSDictionary *certificates;
@property (nonatomic) unsigned long long paymentMethodType;
@property (nonatomic) unsigned long long senderAddressType;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSString *encryptedRecipientData;
@property (nonatomic) unsigned long long encryptionScheme;
@property (copy, nonatomic) NSString *publicKeyHash;
@property (copy, nonatomic) NSString *ephemeralPublicKey;

- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithQuote:(id)a0 transactionData:(id)a1 certificates:(id)a2;

@end
