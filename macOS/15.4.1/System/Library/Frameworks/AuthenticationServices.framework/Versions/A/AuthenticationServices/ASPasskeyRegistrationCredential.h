@class NSArray, _TtC26AuthenticationServicesCore50ASCPublicKeyCredentialRegistrationExtensionOutputs, NSString, NSData, ASPasskeyRegistrationCredentialExtensionOutput;

@interface ASPasskeyRegistrationCredential : NSObject <ASAuthorizationCredential>

@property (class, nonatomic, readonly) NSArray *_defaultTransports;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) _TtC26AuthenticationServicesCore50ASCPublicKeyCredentialRegistrationExtensionOutputs *coreExtensions;
@property (readonly, nonatomic) NSString *relyingParty;
@property (readonly, nonatomic) NSData *clientDataHash;
@property (readonly, nonatomic) NSData *credentialID;
@property (readonly, nonatomic) NSData *attestationObject;
@property (copy, nonatomic) ASPasskeyRegistrationCredentialExtensionOutput *extensionOutput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)credentialWithRelyingParty:(id)a0 clientDataHash:(id)a1 credentialID:(id)a2 attestationObject:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_validateWithError:(id *)a0;
- (id)initWithRelyingParty:(id)a0 clientDataHash:(id)a1 credentialID:(id)a2 attestationObject:(id)a3;
- (id)initWithRelyingParty:(id)a0 clientDataHash:(id)a1 credentialID:(id)a2 attestationObject:(id)a3 extensionOutput:(id)a4;

@end
