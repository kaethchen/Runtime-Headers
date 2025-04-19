@class NSData, NSString, NSArray, ASAuthorizationPublicKeyCredentialPRFAssertionInput, LAContext, ASPublicKeyCredentialClientData, ASAuthorizationPublicKeyCredentialLargeBlobAssertionInput, ASCPublicKeyCredentialAssertionExtensionInputs, ASCPublicKeyCredentialAssertionOptions;

@interface ASAuthorizationPlatformPublicKeyCredentialAssertionRequest : ASAuthorizationRequest <ASAuthorizationWebBrowserPlatformPublicKeyCredentialAssertionRequest, ASAuthorizationWebBrowserExternallyAuthenticatableRequest, ASAuthorizationPublicKeyCredentialAssertionRequest> {
    NSArray *_allowedCredentials;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) ASAuthorizationPublicKeyCredentialLargeBlobAssertionInput *__largeBlobSwift;
@property (nonatomic, retain) ASAuthorizationPublicKeyCredentialPRFAssertionInput *__prfSwift;
@property (readonly, nonatomic) ASCPublicKeyCredentialAssertionOptions *coreCredentialAssertionOptions;
@property (readonly, nonatomic) ASCPublicKeyCredentialAssertionExtensionInputs *extensions;
@property (copy, nonatomic) NSArray *allowedCredentials;
@property (retain, nonatomic) ASAuthorizationPublicKeyCredentialLargeBlobAssertionInput *largeBlob;
@property (retain, nonatomic) ASAuthorizationPublicKeyCredentialPRFAssertionInput *prf;
@property (readonly, nonatomic) ASPublicKeyCredentialClientData *clientData;
@property (nonatomic) BOOL shouldShowHybridTransport;
@property (retain, nonatomic) LAContext *authenticatedContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSData *challenge;
@property (copy, nonatomic) NSString *relyingPartyIdentifier;
@property (retain, nonatomic) NSString *userVerificationPreference;

@end
