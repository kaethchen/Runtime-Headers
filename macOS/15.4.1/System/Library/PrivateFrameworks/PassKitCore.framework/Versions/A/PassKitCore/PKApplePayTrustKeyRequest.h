@class NSString, NSData;

@interface PKApplePayTrustKeyRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) NSData *subjectIdentifier;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyIdentifier:(id)a0 subjectIdentifier:(id)a1;

@end
