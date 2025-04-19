@class NSString, NSData;

@interface STSPeerPaymentTransferRequest : STSPaymentRequestBase

@property (retain, nonatomic) NSString *appleTransactionHash;
@property (retain, nonatomic) NSString *publicTransactionHash;
@property (retain, nonatomic) NSData *nonce;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTransactionAmount:(id)a0 currencyCode:(id)a1 countryCode:(id)a2 transactionDate:(id)a3 appleTransactionHash:(id)a4 publicTransactionHash:(id)a5 nonce:(id)a6;
- (id)toNFPeerPaymentTransferRequest;

@end
