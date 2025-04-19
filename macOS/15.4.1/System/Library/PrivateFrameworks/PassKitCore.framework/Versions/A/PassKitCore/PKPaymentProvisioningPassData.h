@class PKAppletSubcredential, NSString, NSURL, PKSecureElementPass;

@interface PKPaymentProvisioningPassData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *passURL;
@property (retain, nonatomic) PKSecureElementPass *secureElementPass;
@property (retain, nonatomic) PKAppletSubcredential *deviceCredential;
@property (nonatomic) BOOL willProvisionWithAuthenticationDisabled;
@property (readonly, nonatomic) BOOL suppressMakeDefaultPaymentPassOffer;
@property (readonly, copy, nonatomic) NSString *ownershipToken;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithPassURL:(id)a0;
- (id)initWithSecureElementPass:(id)a0;

@end
