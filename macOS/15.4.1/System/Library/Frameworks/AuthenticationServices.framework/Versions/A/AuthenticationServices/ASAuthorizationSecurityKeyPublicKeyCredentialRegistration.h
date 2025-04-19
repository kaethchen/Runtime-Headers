@class ASPublicKeyCredentialBase, NSArray, NSString, NSData;

@interface ASAuthorizationSecurityKeyPublicKeyCredentialRegistration : NSObject <ASAuthorizationPublicKeyCredentialRegistration> {
    ASPublicKeyCredentialBase *_baseCredential;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *transports;
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
- (id)_initWithBaseCredential:(id)a0 rawAttestationObject:(id)a1 transports:(id)a2;
- (id)initWithCoreCredential:(id)a0;

@end
