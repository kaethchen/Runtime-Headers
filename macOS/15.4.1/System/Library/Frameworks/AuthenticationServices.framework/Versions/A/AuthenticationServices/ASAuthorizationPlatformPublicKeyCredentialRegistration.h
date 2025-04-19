@class ASAuthorizationPublicKeyCredentialPRFRegistrationOutput, NSString, NSData, ASAuthorizationPublicKeyCredentialLargeBlobRegistrationOutput, ASCPlatformPublicKeyCredentialRegistration;

@interface ASAuthorizationPlatformPublicKeyCredentialRegistration : NSObject <ASAuthorizationPublicKeyCredentialRegistration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialLargeBlobRegistrationOutput *__largeBlobSwift;
@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialPRFRegistrationOutput *__prfSwift;
@property (readonly, nonatomic) ASCPlatformPublicKeyCredentialRegistration *coreCredential;
@property (readonly, nonatomic) long long attachment;
@property (readonly, nonatomic) ASAuthorizationPublicKeyCredentialLargeBlobRegistrationOutput *largeBlob;
@property (readonly, nonatomic) ASAuthorizationPublicKeyCredentialPRFRegistrationOutput *prf;
@property (readonly, copy, nonatomic) NSData *rawAttestationObject;
@property (readonly, copy, nonatomic) NSData *rawClientDataJSON;
@property (readonly, copy, nonatomic) NSData *credentialID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCoreCredential:(id)a0;

@end
