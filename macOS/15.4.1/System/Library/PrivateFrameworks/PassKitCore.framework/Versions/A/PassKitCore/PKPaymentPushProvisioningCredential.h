@class NSString;

@interface PKPaymentPushProvisioningCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long securityOptions;
@property (retain, nonatomic) NSString *sharingInstanceIdentifier;
@property (nonatomic) long long source;
@property (readonly, nonatomic) NSString *provisioningCredentialIdentifierHash;
@property (retain, nonatomic) NSString *credentialAuthorityIdentifier;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) unsigned long long feature;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDict:(id)a0;

@end
