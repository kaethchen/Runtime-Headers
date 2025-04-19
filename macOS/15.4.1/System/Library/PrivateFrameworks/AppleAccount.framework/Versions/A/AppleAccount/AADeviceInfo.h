@interface AADeviceInfo : NSObject

@property (class, readonly) AADeviceInfo *currentInfo;
@property (class, readonly, nonatomic) BOOL locationServicesRestricted;

+ (id)infoDictionary;
+ (id)serialNumber;
+ (id)productVersion;
+ (BOOL)isInternalBuild;
+ (id)udid;
+ (id)osVersion;
+ (BOOL)isMultiUserMode;
+ (id)userAgentHeader;
+ (id)apnsToken;
+ (id)appleIDClientIdentifier;
+ (id)clientInfoHeader;
+ (BOOL)hasiCloudSignOutRestriction;

- (id)regionCode;
- (id)serialNumber;
- (id)deviceName;
- (id)productVersion;
- (id)deviceClass;
- (id)productType;
- (id)buildVersion;
- (id)modelNumber;
- (id)udid;
- (id)osVersion;
- (id)deviceColor;
- (id)deviceEnclosureColor;
- (id)internationalMobileEquipmentIdentity;
- (id)mobileEquipmentIdentifier;
- (id)localSecretType;
- (id)userAgentHeader;
- (id)storageCapacity;
- (id)apnsToken;
- (id)appleIDClientIdentifier;
- (id)bluetoothMacAddress;
- (id)chipIdentifier;
- (id)clientInfoHeader;
- (id)deviceBackingColor;
- (id)deviceCoverGlassColor;
- (id)deviceHousingColor;
- (id)deviceInfoDictionary;
- (BOOL)hasCellularCapability;
- (id)osName;
- (id)uniqueChipIdentifier;
- (id)wifiMacAddress;

@end
