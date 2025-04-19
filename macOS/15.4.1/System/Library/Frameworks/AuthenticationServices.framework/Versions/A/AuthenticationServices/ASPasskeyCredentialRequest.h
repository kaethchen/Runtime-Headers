@class ASPasskeyAssertionCredentialExtensionInput, NSString, NSArray, NSData, ASPasskeyRegistrationCredentialExtensionInput;
@protocol ASCredentialIdentity;

@interface ASPasskeyCredentialRequest : NSObject <ASCredentialRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *clientDataHash;
@property (retain, nonatomic) NSString *userVerificationPreference;
@property (readonly, nonatomic) NSArray *supportedAlgorithms;
@property (readonly, nonatomic) NSArray *excludedCredentials;
@property (readonly, nonatomic) ASPasskeyAssertionCredentialExtensionInput *assertionExtensionInput;
@property (readonly, nonatomic) ASPasskeyRegistrationCredentialExtensionInput *registrationExtensionInput;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id<ASCredentialIdentity> credentialIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithCredentialIdentity:(id)a0 clientDataHash:(id)a1 userVerificationPreference:(id)a2 supportedAlgorithms:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithCredentialIdentity:(id)a0 clientDataHash:(id)a1 userVerificationPreference:(id)a2 supportedAlgorithms:(id)a3 credentialType:(long long)a4 excludedCredentials:(id)a5 registrationExtensionInput:(id)a6 assertionExtensionInput:(id)a7;
- (id)initWithCredentialIdentity:(id)a0 clientDataHash:(id)a1 userVerificationPreference:(id)a2 supportedAlgorithms:(id)a3;
- (id)initWithCredentialIdentity:(id)a0 clientDataHash:(id)a1 userVerificationPreference:(id)a2 supportedAlgorithms:(id)a3 assertionExtensionInput:(id)a4;
- (id)initWithCredentialIdentity:(id)a0 clientDataHash:(id)a1 userVerificationPreference:(id)a2 supportedAlgorithms:(id)a3 registrationExtensionInput:(id)a4;
- (id)initWithLoginChoice:(id)a0 assertionExtensionInput:(id)a1;
- (id)initWithLoginChoice:(id)a0 registrationExtensionInput:(id)a1;

@end
