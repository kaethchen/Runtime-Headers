@class PKAppletSubcredential, NSString, PKPaymentPass, PKPassEntitlement;

@interface PKAppletSubcredentialSharingRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKAppletSubcredential *credential;
@property (readonly, copy, nonatomic) NSString *passIdentifier;
@property (readonly, copy, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) PKPassEntitlement *entitlement;
@property (copy, nonatomic) NSString *recipientIdentifier;
@property (copy, nonatomic) NSString *recipientName;
@property (nonatomic, getter=isForLocalDevice) BOOL forLocalDevice;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)credentialForPass:(id)a0;
- (id)credentialWithIdentifier:(id)a0;
- (id)initWithPaymentPass:(id)a0 entitlements:(id)a1;
- (id)invitations;

@end
