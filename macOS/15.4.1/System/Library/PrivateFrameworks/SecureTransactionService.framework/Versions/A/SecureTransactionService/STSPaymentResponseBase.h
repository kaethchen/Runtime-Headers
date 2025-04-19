@class NSString, NSData, NSDictionary;

@interface STSPaymentResponseBase : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *transactionIdentifier;
@property (readonly, nonatomic) NSData *transactionData;
@property (readonly, nonatomic) NSDictionary *certificates;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initFromNFECommercePaymentResponse:(id)a0;
- (id)initFromNFPeerPaymentResponse:(id)a0;

@end
