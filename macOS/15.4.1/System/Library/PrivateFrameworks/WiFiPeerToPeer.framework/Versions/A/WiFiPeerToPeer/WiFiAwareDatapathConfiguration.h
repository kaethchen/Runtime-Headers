@class WiFiAwareDiscoveryResult, NSString, WiFiAwarePublishDatapathServiceSpecificInfo, NSData, WiFiAwareInternetSharingConfiguration, WiFiAwarePublishServiceSpecificInfo;

@interface WiFiAwareDatapathConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WiFiAwareDiscoveryResult *discoveryResult;
@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) NSString *passphrase;
@property (readonly, nonatomic) NSData *pmk;
@property (readonly, nonatomic) NSData *pmkID;
@property (copy, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo;
@property (copy, nonatomic) WiFiAwareInternetSharingConfiguration *internetSharingConfiguration;
@property (readonly) long long pairingMethod;
@property (readonly) BOOL pairingCachingEnabled;
@property (readonly) WiFiAwarePublishServiceSpecificInfo *pairSetupServiceSpecificInfo;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDiscoveryResult:(id)a0 serviceType:(long long)a1 passphrase:(id)a2 pmk:(id)a3 pmkID:(id)a4 serviceSpecificInfo:(id)a5 internetSharingConfiguration:(id)a6 pairingMethod:(long long)a7 pairingCachingEnabled:(BOOL)a8 pairSetupServiceSpecificInfo:(id)a9;
- (BOOL)internetSharingEqual:(id)a0;
- (BOOL)pairSetupServiceSpecificInfoEqual:(id)a0;
- (BOOL)passphraseEqual:(id)a0;
- (BOOL)pmkEqual:(id)a0;
- (BOOL)pmkIDEqual:(id)a0;
- (BOOL)serviceSpecificInfoEqual:(id)a0;

@end
