@class NSString, NSURL, NSData, NSNumber, NSLocale;

@interface AKDevice : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    BOOL _shouldUpdateUniqueDeviceIdentifier;
    BOOL _shouldUpdateServerFriendlyDescription;
    BOOL _shouldUpdateColor;
    BOOL _shouldUpdateEnclosureColor;
    BOOL _shouldUpdateCoverGlassColor;
    BOOL _shouldUpdateHousingColor;
    BOOL _shouldUpdateBackingColor;
    BOOL _shouldUpdateLocale;
    BOOL _shouldUpdateROMAddress;
    BOOL _shouldUpdateMLBSerialNumber;
    BOOL _shouldUpdateModelNumber;
    BOOL _shouldUpdateProvisioningDeviceIdentifier;
    NSData *_sfrManifest;
}

@property (class, readonly, copy, nonatomic) NSURL *systemContainerURL;
@property (class, readonly, copy, nonatomic) NSURL *systemContainerCacheURL;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *userChosenName;
@property (readonly, nonatomic) NSString *userFullName;
@property (readonly, nonatomic) NSString *internationalMobileEquipmentIdentity;
@property (readonly, nonatomic) NSString *internationalMobileEquipmentIdentity2;
@property (readonly, nonatomic) BOOL isBiometricAuthCapable;
@property (readonly, nonatomic) BOOL isFaceIDCapable;
@property (readonly, nonatomic) BOOL isBiometricIDCapable;
@property (readonly, nonatomic) BOOL usesTouchID;
@property (readonly, nonatomic) BOOL isUnlocked;
@property (readonly, nonatomic) BOOL isInCircle;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *mobileEquipmentIdentifier;
@property (readonly, nonatomic) NSString *integratedCircuitCardIdentifier;
@property (readonly, nonatomic) BOOL isInternalBuild;
@property (readonly, nonatomic) BOOL isSeedBuild;
@property (readonly, nonatomic) BOOL isMultiUserMode;
@property (readonly, nonatomic) BOOL isInRestrictedSharingMode;
@property (readonly, nonatomic) NSData *sfrManifest;
@property (readonly, nonatomic) long long biometryType;
@property (readonly, nonatomic) NSData *serializedData;
@property (copy, nonatomic) NSString *serverFriendlyDescription;
@property (copy, nonatomic) NSString *uniqueDeviceIdentifier;
@property (copy, nonatomic) NSString *provisioningDeviceIdentifier;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *enclosureColor;
@property (copy, nonatomic) NSNumber *coverGlassColor;
@property (copy, nonatomic) NSNumber *housingColor;
@property (copy, nonatomic) NSNumber *backingColor;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *MLBSerialNumber;
@property (copy, nonatomic) NSString *ROMAddress;
@property (copy, nonatomic) NSString *modelNumber;
@property (nonatomic, setter=setLinkType:) unsigned long long linkType;
@property (readonly, nonatomic) NSString *localUserUUID;
@property (readonly, nonatomic) BOOL isProtectedWithPasscode;
@property (readonly, nonatomic) BOOL isStrongDeviceIdentitySupported;
@property (readonly, nonatomic) BOOL isVirtualMachine;

+ (long long)currentDeviceAuthenticationMode;
+ (id)_osName;
+ (id)_buildNumber;
+ (long long)_currentDeviceAuthenticationMode;
+ (id)_dataForNVRAMKey:(id)a0;
+ (id)_generateAuthInfoKey:(const char *)a0;
+ (id)_hardwareModel;
+ (id)_hexAddressDescriptionForData:(id)a0;
+ (id)_nvramStyleDescriptionForData:(id)a0;
+ (id)_osVersion;
+ (id)_serverFriendlyDeviceColorForArea:(struct __CFString { } *)a0;
+ (id)_systemVersionDictionary;
+ (id)activeIDSPeerDevice;
+ (id)currentDevice;
+ (long long)currentDeviceAuthenticationModeForAuthContext:(id)a0;
+ (id)deviceSpecificLocalizedStringWithKey:(id)a0;
+ (id)deviceSpecificLocalizedStringWithKey:(id)a0 inTable:(id)a1;
+ (id)deviceWithSerializedData:(id)a0;
+ (BOOL)hasUniqueDeviceIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_appleSiliconROMAddress;
- (void)_setCurrentSharingMode;
- (void)_setShouldUpdateToValue:(BOOL)a0;
- (id)_uniqueChipID;
- (id)_volumeGroupUUID;
- (BOOL)currentUserIsLocal;

@end
