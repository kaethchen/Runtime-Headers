@class NSData, NSString, NSArray, AKAuthorizationRequest, NSURL, WBSGlobalFrameIdentifier, NSMutableArray, _TtC26AuthenticationServicesCore31ASCCredentialRequestTestOptions, ASCPublicKeyCredentialAssertionOptions, NSNumber, ASCPublicKeyCredentialCreationOptions;

@interface ASCAuthorizationPresentationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long _passkeyURLType;
@property (readonly, nonatomic) BOOL hasPlatformCredentialRequest;
@property (readonly, nonatomic) long long iCloudKeychainPasskeyLoginChoiceCount;
@property (readonly, nonatomic) long long externalPasskeyLoginChoiceCount;
@property (readonly, copy, nonatomic) NSArray *credentialLoginChoices;
@property (readonly, copy, nonatomic) NSArray *otherAccountsLoginChoices;
@property (readonly, nonatomic) long long _passkeyURLType;
@property (readonly, nonatomic) BOOL hasPlatformCredentialRequest;
@property (readonly, nonatomic) long long iCloudKeychainPasskeyLoginChoiceCount;
@property (readonly, nonatomic) long long externalPasskeyLoginChoiceCount;
@property (readonly, copy, nonatomic) NSArray *credentialLoginChoices;
@property (readonly, copy, nonatomic) NSArray *otherAccountsLoginChoices;
@property (readonly, copy, nonatomic) NSString *appIdentifier;
@property (readonly, copy, nonatomic) WBSGlobalFrameIdentifier *frameIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (readonly, copy, nonatomic) NSMutableArray *loginChoices;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *destinationSiteForCrossSiteAssertion;
@property (readonly, nonatomic) unsigned long long serviceType;
@property (readonly, nonatomic) unsigned long long requestTypes;
@property (readonly, nonatomic) BOOL isRegistrationRequest;
@property (readonly, nonatomic) BOOL isCombinedPublicKeyCredentialRegistrationRequest;
@property (nonatomic) BOOL isProxiedRequest;
@property (copy, nonatomic) NSArray *proxiedAssociatedDomains;
@property (copy, nonatomic) NSData *proxiedIconData;
@property (copy, nonatomic) NSNumber *proxiedIconScale;
@property (copy, nonatomic) NSString *proxiedOriginDeviceName;
@property (retain, nonatomic) AKAuthorizationRequest *appleIDAuthorizationRequest;
@property (readonly, copy, nonatomic) NSString *platformUserVerificationPreference;
@property (readonly, copy, nonatomic) _TtC26AuthenticationServicesCore31ASCCredentialRequestTestOptions *testOptions;
@property (readonly, nonatomic) BOOL hasExternalPasswords;
@property (readonly, nonatomic) NSArray *localAccountLoginChoices;
@property (readonly, nonatomic) NSURL *cableAuthenticatorURL;
@property (readonly, nonatomic) BOOL isCABLEAuthenticatorRequest;
@property (readonly, nonatomic) BOOL shouldRequireCABLEAuthenticatorConsent;
@property (readonly, nonatomic) BOOL shouldAllowSecurityKeysFromCABLEView;
@property (readonly, nonatomic) long long cableAuthenticatorRequirement;
@property (readonly, nonatomic) NSString *overrideHeader;
@property (readonly, nonatomic) NSString *overrideTitle;
@property (readonly, nonatomic) NSString *overrideSubtitle;
@property (readonly, nonatomic) NSString *overrideNoCredentialsErrorTitle;
@property (readonly, nonatomic) NSString *overrideNoCredentialsErrorMessage;
@property (readonly, nonatomic) BOOL useAlternativeSecurityKeysIcon;
@property (readonly, nonatomic) BOOL shouldUseFallbackPasskeyUI;
@property (readonly, copy, nonatomic) NSArray *allowedCredentialsForSecurityKeyAssertion;
@property (readonly, nonatomic) ASCPublicKeyCredentialCreationOptions *passkeyCreationOptionsForExternalProvider;
@property (readonly, nonatomic) ASCPublicKeyCredentialAssertionOptions *passkeyAssertionOptionsForExternalProvider;
@property (readonly, nonatomic) BOOL isConditionalRegistrationRequest;
@property (readonly, nonatomic) NSData *auditTokenData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addLoginChoice:(id)a0;
- (void)_getPrimaryLoginChoices:(id *)a0 otherLoginChoices:(id *)a1;
- (id)_initWithCABLEAuthenticatorURL:(id)a0 shouldRequireConsent:(BOOL)a1 passkeyURLType:(long long)a2;
- (id)_passkeyLoginChoices;
- (BOOL)_passwordLoginChoice:(id)a0 hasSameHighLevelDomainAndUsernameAsPasskeyLoginChoice:(id)a1;
- (id)initWithRequestContext:(id)a0 appIdentifier:(id)a1;
- (id)initWithRequestContext:(id)a0 appIdentifier:(id)a1 frameIdentifier:(id)a2 shouldUseRelyingPartyForServiceName:(BOOL)a3;
- (id)initWithRequestContext:(id)a0 appIdentifier:(id)a1 frameIdentifier:(id)a2 shouldUseRelyingPartyForServiceName:(BOOL)a3 auditTokenData:(id)a4;
- (id)initWithRequestContext:(id)a0 appIdentifier:(id)a1 shouldUseRelyingPartyForServiceName:(BOOL)a2;
- (id)initWithRequestContext:(id)a0 appIdentifier:(id)a1 shouldUseRelyingPartyForServiceName:(BOOL)a2 auditTokenData:(id)a3;
- (void)updateLoginChoices:(id)a0;

@end
