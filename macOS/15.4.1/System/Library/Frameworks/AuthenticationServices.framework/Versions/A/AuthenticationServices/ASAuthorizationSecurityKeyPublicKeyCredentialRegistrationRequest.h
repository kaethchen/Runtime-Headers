@class NSArray, NSString, ASCPublicKeyCredentialCreationOptions, NSData, ASPublicKeyCredentialClientData;

@interface ASAuthorizationSecurityKeyPublicKeyCredentialRegistrationRequest : ASAuthorizationRequest <ASAuthorizationWebBrowserSecurityKeyPublicKeyCredentialRegistrationRequest, ASAuthorizationPublicKeyCredentialRegistrationRequest> {
    NSArray *_credentialParameters;
    NSArray *_excludedCredentials;
    NSString *_residentKeyPreference;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ASCPublicKeyCredentialCreationOptions *coreCredentialCreationOptions;
@property (copy, nonatomic) NSArray *credentialParameters;
@property (copy, nonatomic) NSArray *excludedCredentials;
@property (retain, nonatomic) NSString *residentKeyPreference;
@property (readonly, nonatomic) ASPublicKeyCredentialClientData *clientData;
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


@end
