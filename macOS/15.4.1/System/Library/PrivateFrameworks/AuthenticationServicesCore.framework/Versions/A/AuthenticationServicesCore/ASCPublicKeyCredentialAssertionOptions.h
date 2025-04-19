@class NSString, _TtC26AuthenticationServicesCore46ASCPublicKeyCredentialAssertionExtensionInputs, NSData, NSArray, NSNumber;

@interface ASCPublicKeyCredentialAssertionOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long credentialKind;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSData *challenge;
@property (copy, nonatomic) NSData *clientDataHash;
@property (copy, nonatomic) NSData *clientDataJSON;
@property (copy, nonatomic) NSString *userVerificationPreference;
@property (copy, nonatomic) NSNumber *timeout;
@property (retain, nonatomic) _TtC26AuthenticationServicesCore46ASCPublicKeyCredentialAssertionExtensionInputs *extensions;
@property (readonly, nonatomic) NSData *extensionsCBORForWebKit;
@property (copy, nonatomic) NSArray *allowedCredentials;
@property (copy, nonatomic) NSString *destinationSiteForCrossSiteAssertion;
@property (nonatomic) BOOL shouldHideHybrid;
@property (copy, nonatomic) NSString *appIDForSecurityKeys;
@property (copy, nonatomic) NSString *origin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKind:(unsigned long long)a0 relyingPartyIdentifier:(id)a1 clientDataJSON:(id)a2 userVerificationPreference:(id)a3 allowedCredentials:(id)a4 origin:(id)a5;
- (id)initWithKind:(unsigned long long)a0 relyingPartyIdentifier:(id)a1 challenge:(id)a2 userVerificationPreference:(id)a3 allowedCredentials:(id)a4;
- (id)_initWithKind:(unsigned long long)a0 relyingPartyIdentifier:(id)a1 challenge:(id)a2 clientDataHash:(id)a3 clientDataJSON:(id)a4 userVerificationPreference:(id)a5 allowedCredentials:(id)a6 shouldHideHybrid:(BOOL)a7 extensions:(id)a8 origin:(id)a9 appIDForSecurityKeys:(id)a10;
- (id)initWithKind:(unsigned long long)a0 relyingPartyIdentifier:(id)a1 clientDataHash:(id)a2 userVerificationPreference:(id)a3 allowedCredentials:(id)a4;
- (void)logRequest;

@end
