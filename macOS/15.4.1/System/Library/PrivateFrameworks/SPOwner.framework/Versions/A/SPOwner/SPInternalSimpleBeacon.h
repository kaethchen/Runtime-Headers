@class NSUUID, NSString, SPKeySyncRecord, SPDiscoveredAccessoryProductInformation, SPLostModeInfo, NSSet, NSDictionary, SPRawAccessoryMetadata, SPBeaconRole, SPHandle, NSNumber;

@interface SPInternalSimpleBeacon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSUUID *groupIdentifier;
@property (copy, nonatomic) NSUUID *ownerBeaconIdentifier;
@property (nonatomic) long long partIdentifier;
@property (nonatomic) BOOL connectionAllowed;
@property (copy, nonatomic) NSString *systemVersion;
@property (nonatomic) double txPower;
@property (copy, nonatomic) NSUUID *productUUID;
@property (nonatomic) long long internalShareType;
@property (nonatomic) long long connectableDeviceCount;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *manufacturerName;
@property (copy, nonatomic) SPKeySyncRecord *keySyncRecord;
@property (copy, nonatomic) NSString *serialNumber;
@property (nonatomic) long long batteryLevel;
@property (copy, nonatomic) SPLostModeInfo *lostModeInfo;
@property (copy, nonatomic) NSDictionary *taskInformation;
@property (copy, nonatomic) SPHandle *owner;
@property (copy, nonatomic) SPBeaconRole *role;
@property (copy, nonatomic) NSSet *safeLocations;
@property (copy, nonatomic) SPDiscoveredAccessoryProductInformation *accessoryProductInfo;
@property (nonatomic) long long vendorId;
@property (nonatomic) long long productId;
@property (nonatomic) BOOL isAppleAudioAccessory;
@property (nonatomic) BOOL isZeus;
@property (nonatomic) BOOL canBeLeashedByHost;
@property (nonatomic) BOOL connected;
@property (copy, nonatomic) NSString *discoveryId;
@property (copy, nonatomic) NSSet *multipartStatus;
@property (copy, nonatomic) NSString *deviceColor;
@property (copy, nonatomic) NSString *deviceClass;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *deviceDisplayName;
@property (copy, nonatomic) NSNumber *lowPowerMode;
@property (copy, nonatomic) NSNumber *thisDevice;
@property (copy, nonatomic) NSNumber *isMine;
@property (copy, nonatomic) NSNumber *batteryPercentage;
@property (nonatomic) BOOL online;
@property (copy, nonatomic) SPRawAccessoryMetadata *rawMetadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
