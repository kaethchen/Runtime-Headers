@class NSString, SFExternalCredentialIdentityStoreIdentifier, ASCredentialServiceIdentifier;

@interface ASOneTimeCodeCredentialIdentity : NSObject <ASCredentialIdentityPrivate, NSCopying, NSSecureCoding, ASCredentialIdentity>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) SFExternalCredentialIdentityStoreIdentifier *credentialIdentityStoreIdentifier;
@property (readonly, nonatomic) ASCredentialServiceIdentifier *serviceIdentifier;
@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, copy, nonatomic) NSString *recordIdentifier;
@property (nonatomic) long long rank;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithFoundationCredentialIdentity:(id)a0;
- (id)_initWithServiceIdentifier:(id)a0 label:(id)a1 recordIdentifier:(id)a2 rank:(long long)a3 credentialIdentityStoreIdentifier:(id)a4;
- (id)initWithServiceIdentifier:(id)a0 label:(id)a1 recordIdentifier:(id)a2;

@end
