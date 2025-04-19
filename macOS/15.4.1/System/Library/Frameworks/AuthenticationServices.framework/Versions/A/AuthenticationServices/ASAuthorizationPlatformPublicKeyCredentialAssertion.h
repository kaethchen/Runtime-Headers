@class ASAuthorizationPublicKeyCredentialPRFAssertionOutput, ASAuthorizationPublicKeyCredentialLargeBlobAssertionOutput, NSString, NSData, ASCPlatformPublicKeyCredentialAssertion;

@interface ASAuthorizationPlatformPublicKeyCredentialAssertion : NSObject <ASAuthorizationPublicKeyCredentialAssertion>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialLargeBlobAssertionOutput *__largeBlobSwift;
@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialPRFAssertionOutput *__prfSwift;
@property (readonly, nonatomic) ASCPlatformPublicKeyCredentialAssertion *coreCredential;
@property (readonly, nonatomic) long long attachment;
@property (readonly, nonatomic) ASAuthorizationPublicKeyCredentialLargeBlobAssertionOutput *largeBlob;
@property (readonly, nonatomic) ASAuthorizationPublicKeyCredentialPRFAssertionOutput *prf;
@property (readonly, copy, nonatomic) NSData *rawAuthenticatorData;
@property (readonly, copy, nonatomic) NSData *userID;
@property (readonly, copy, nonatomic) NSData *signature;
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
