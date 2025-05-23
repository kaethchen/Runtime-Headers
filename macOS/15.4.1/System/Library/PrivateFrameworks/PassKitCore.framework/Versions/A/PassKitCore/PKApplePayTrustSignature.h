@class PKApplePayTrustSignatureRequest, NSData;

@interface PKApplePayTrustSignature : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKApplePayTrustSignatureRequest *signatureRequest;
@property (readonly, copy, nonatomic) NSData *signatureData;
@property (readonly, copy, nonatomic) NSData *paymentData;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSignatureRequest:(id)a0 signature:(id)a1;

@end
