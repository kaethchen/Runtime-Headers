@class NSString, NSArray, NSData, NSNumber, _TtC26AuthenticationServicesCore49ASCPublicKeyCredentialRegistrationExtensionInputs;

@interface ASCPublicKeyCredentialCreationOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldRequireResidentKey;
@property (copy, nonatomic) NSData *challenge;
@property (copy, nonatomic) NSData *clientDataHash;
@property (copy, nonatomic) NSData *clientDataJSON;
@property (copy, nonatomic) NSString *relyingPartyIdentifier;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSData *userIdentifier;
@property (copy, nonatomic) NSString *userDisplayName;
@property (copy, nonatomic) NSArray *supportedAlgorithmIdentifiers;
@property (copy, nonatomic) NSString *userVerificationPreference;
@property (copy, nonatomic) NSString *attestationPreference;
@property (copy, nonatomic) NSNumber *timeout;
@property (retain, nonatomic) _TtC26AuthenticationServicesCore49ASCPublicKeyCredentialRegistrationExtensionInputs *extensions;
@property (readonly, nonatomic) NSData *extensionsCBORForWebKit;
@property (copy, nonatomic) NSArray *excludedCredentials;
@property (nonatomic) long long residentKeyPreference;
@property (nonatomic) BOOL shouldHideHybrid;
@property (copy, nonatomic) NSString *origin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithChallenge:(id)a0 clientDataJSON:(id)a1 clientDataHash:(id)a2 relyingPartyIdentifier:(id)a3 userName:(id)a4 userIdentifier:(id)a5 userDisplayName:(id)a6 supportedAlgorithmIdentifiers:(id)a7 attestationPreference:(id)a8 userVerificationPreference:(id)a9 excludedCredentials:(id)a10 extensions:(id)a11 origin:(id)a12;
- (void)logRequest;

@end
