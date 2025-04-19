@class NSString, NSData;

@interface PKApplePayTrustSignatureRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *keyIdentifier;
@property (readonly, copy, nonatomic) NSData *nonce;
@property (readonly, copy, nonatomic) NSData *manifestHash;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyIdentifier:(id)a0 manifestHash:(id)a1 nonce:(id)a2;

@end
