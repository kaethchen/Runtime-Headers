@class NSData, NSString, NSArray, ASAuthorizationPublicKeyCredentialPRFRegistrationInput, ASAuthorizationPublicKeyCredentialLargeBlobRegistrationInput, ASPublicKeyCredentialClientData, ASCPublicKeyCredentialRegistrationExtensionInputs, ASCPublicKeyCredentialCreationOptions;

@interface ASAuthorizationPlatformPublicKeyCredentialRegistrationRequest : ASAuthorizationRequest <ASAuthorizationWebBrowserPlatformPublicKeyCredentialRegistrationRequest, ASAuthorizationPublicKeyCredentialRegistrationRequest> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) ASAuthorizationPublicKeyCredentialLargeBlobRegistrationInput *__largeBlobSwift;
@property (nonatomic, retain) ASAuthorizationPublicKeyCredentialPRFRegistrationInput *__prfSwift;
@property (readonly, nonatomic) ASCPublicKeyCredentialCreationOptions *coreCredentialCreationOptions;
@property (readonly, nonatomic) ASCPublicKeyCredentialRegistrationExtensionInputs *extensions;
@property (retain, nonatomic) ASAuthorizationPublicKeyCredentialLargeBlobRegistrationInput *largeBlob;
@property (retain, nonatomic) ASAuthorizationPublicKeyCredentialPRFRegistrationInput *prf;
@property (nonatomic) long long requestStyle;
@property (readonly, nonatomic) ASPublicKeyCredentialClientData *clientData;
@property (copy, nonatomic) NSArray *excludedCredentials;
@property (nonatomic) BOOL shouldShowHybridTransport;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (copy, nonatomic) NSData *userID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSData *challenge;
@property (retain, nonatomic) NSString *userVerificationPreference;
@property (retain, nonatomic) NSString *attestationPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyExtensions;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setClientData:(id)a0;
- (void)__setLargeBlobSwift:(id)a0;
- (void)__setPRFSwift:(id)a0;
- (id)_initWithProvider:(id)a0 relyingPartyIdentifier:(id)a1 challenge:(id)a2 name:(id)a3 userID:(id)a4 clientData:(id)a5 requestStyle:(long long)a6;
- (BOOL)supportsStyle:(long long)a0;

@end
