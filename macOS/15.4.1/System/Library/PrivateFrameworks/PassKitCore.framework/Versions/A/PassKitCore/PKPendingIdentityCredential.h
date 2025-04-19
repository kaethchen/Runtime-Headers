@class NSString, PKIdentityProvisioningAttestations;

@interface PKPendingIdentityCredential : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sharingInstanceIdentifier;
@property (retain, nonatomic) NSString *cardConfigurationIdentifier;
@property (retain, nonatomic) NSString *provisioningCredentialIdentifier;
@property (retain, nonatomic) PKIdentityProvisioningAttestations *attestations;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (copy, nonatomic) NSString *passSerialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSString *accountKeyIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (id)credential;
- (BOOL)representsPass:(id)a0;
- (id)initForDatabase;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithIdentityCredential:(id)a0;
- (id)initWithShareableMetadata:(id)a0;
- (BOOL)representsCredential:(id)a0;

@end
