@class NEAppPush, NERelayConfiguration, NEPathController, NEDNSSettingsBundle, NEProfileIngestionPayloadInfo, NSString, NEVPNApp, NEDNSProxy, NEContentFilter, NEAOVPN, NEVPN, NSArray, NSUUID;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEProfileIngestionPluginDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying> {
    BOOL _resolvedProviderMachOUUIDs;
    NSArray *_providerMachOUUIDs;
    long long _appPermissionType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *pluginType;
@property (readonly, getter=isTransparentProxy) BOOL transparentProxy;
@property (readonly, nonatomic) BOOL usesPolicyBasedRouting;
@property (readonly) long long grade;
@property (readonly) NSUUID *identifier;
@property (copy) NSString *application;
@property (copy) NSString *name;
@property (copy) NSString *applicationName;
@property (copy) NSString *applicationIdentifier;
@property (copy) NSString *externalIdentifier;
@property (copy) NEProfileIngestionPayloadInfo *payloadInfo;
@property (copy) NEVPN *VPN;
@property (copy) NEAOVPN *alwaysOnVPN;
@property (copy) NEVPNApp *appVPN;
@property (copy) NEContentFilter *contentFilter;
@property (copy) NEPathController *pathController;
@property (copy) NEDNSProxy *dnsProxy;
@property (copy) NEDNSSettingsBundle *dnsSettings;
@property (copy) NEAppPush *appPush;
@property (copy) NERelayConfiguration *relay;
@property (readonly, nonatomic) BOOL isEnabled;

+ (id)configurationWithProfilePayload:(id)a0;
+ (id)configurationWithProfilePayload:(id)a0 grade:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)setCertificates:(id)a0;
- (BOOL)setAssociatedDomains:(id)a0;
- (id)getCertificates;
- (BOOL)setProfileInfo:(id)a0;
- (void)copyPasswordsFromSystemKeychain;
- (BOOL)setMailDomains:(id)a0;
- (BOOL)setPerAppUUID:(id)a0 andSafariDomains:(id)a1;
- (void)applyOverrides;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (void)clearSystemKeychain;
- (id)copyProviderMachOUUIDs;
- (id)descriptionWithOptions:(unsigned long long)a0;
- (id)generateSignature;
- (id)getConfigurationIdentifier;
- (id)getInstalledSystemCertificatePersistentRef;
- (id)getPendingCertificateInfo:(id)a0;
- (id)getPendingCertificateUUIDs:(id)a0;
- (id)initWithName:(id)a0 grade:(long long)a1;
- (BOOL)setAppLayerVPNUUID:(id)a0 andSafariDomains:(id)a1;
- (BOOL)setCalendarDomains:(id)a0;
- (BOOL)setCalendarDomains:(id)a0 accountIdentifiers:(id)a1;
- (BOOL)setCertificates:(id)a0 keyRefs:(id)a1 specs:(id)a2;
- (BOOL)setContactsDomains:(id)a0;
- (BOOL)setContactsDomains:(id)a0 accountIdentifiers:(id)a1;
- (BOOL)setExcludedDomains:(id)a0;
- (BOOL)setMailDomains:(id)a0 accountIdentifiers:(id)a1;
- (BOOL)setPayloadInfoCommon:(id)a0 payloadOrganization:(id)a1;
- (BOOL)setPayloadInfoIdentity:(id)a0;
- (BOOL)setPerAppRuleSettings:(id)a0 withAppIdentifier:(id)a1;
- (BOOL)setRestrictDomains:(BOOL)a0;
- (BOOL)setSMBDomains:(id)a0;
- (void)setSystemCertificateData:(id)a0;

@end
