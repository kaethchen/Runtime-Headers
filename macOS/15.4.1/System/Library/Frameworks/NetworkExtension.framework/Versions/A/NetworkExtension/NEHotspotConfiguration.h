@class NSString, NEHotspotHS20Settings, NEHotspotEAPSettings, NSNumber;

@interface NEHotspotConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long securityType;
@property (copy) NSString *passphrase;
@property (copy) NEHotspotEAPSettings *eapSettings;
@property (copy) NEHotspotHS20Settings *hs20Settings;
@property BOOL useSSIDPrefix;
@property BOOL isAccessory;
@property (readonly) NSString *SSID;
@property (readonly) NSString *SSIDPrefix;
@property BOOL joinOnce;
@property (copy) NSNumber *lifeTimeInDays;
@property BOOL hidden;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)validate;
- (id)initWithHS20Settings:(id)a0 eapSettings:(id)a1;
- (id)initWithSSID:(id)a0;
- (id)initWithSSID:(id)a0 eapSettings:(id)a1;
- (id)initWithSSID:(id)a0 passphrase:(id)a1 isWEP:(BOOL)a2;
- (id)initWithSSIDPrefix:(id)a0;
- (id)initWithSSIDPrefix:(id)a0 passphrase:(id)a1 isWEP:(BOOL)a2;

@end
