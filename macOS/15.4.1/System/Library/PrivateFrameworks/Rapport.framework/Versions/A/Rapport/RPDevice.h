@class NSData, NSString, CUPairedPeer, NSUUID, NSDate, SFDevice, NSDictionary, CURangingMeasurement, CUMobileDevice;

@interface RPDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFDevice *bleDevice;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) CUMobileDevice *mobileDevice;
@property (copy, nonatomic) NSString *name;
@property (retain) CURangingMeasurement *relativeLocation;
@property (readonly, copy, nonatomic) NSData *authTag;
@property (readonly, copy, nonatomic) NSData *bleAdvertisementData;
@property (readonly, copy, nonatomic) NSData *bleDeviceAddress;
@property (readonly, nonatomic) unsigned int blePairState;
@property (readonly, nonatomic) unsigned char deviceActionType;
@property (copy, nonatomic) NSUUID *identifierUUID;
@property (readonly, nonatomic) BOOL needsSetup;
@property (retain, nonatomic) CUPairedPeer *pairedPeer;
@property (copy, nonatomic) NSUUID *pairingIdentifier;
@property (readonly, nonatomic) int rawRSSI;
@property (readonly, nonatomic) int smoothedRSSI;
@property (nonatomic) unsigned int systemPairState;
@property (readonly, copy, nonatomic) NSData *txtData;
@property (readonly, copy, nonatomic) NSDictionary *txtDictionary;
@property (copy, nonatomic) NSString *udid;
@property (copy, nonatomic) NSData *wifiAddress;
@property (copy, nonatomic) NSData *wifiBSSID;
@property (copy, nonatomic) NSData *wifiDeviceIEDeviceID;
@property (readonly, nonatomic) unsigned int wifiDeviceIEFlags;
@property (copy, nonatomic) NSData *wifiDeviceIEName;
@property (copy, nonatomic) NSData *wifiIEData;
@property (retain, nonatomic) id wifiPlatformObject;
@property (copy, nonatomic) NSString *wifiSSID;
@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) int activityLevel;
@property (readonly, nonatomic) NSDate *activityLevelTimeStamp;
@property (readonly, copy, nonatomic) NSData *bleAuthTag;
@property (readonly, copy, nonatomic) NSString *contactID;
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, copy, nonatomic) NSString *idsDeviceIdentifier;
@property (readonly, nonatomic) BOOL idsDeviceIdentifierConflict;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, nonatomic) int proximity;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateTXTDictionary:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (double)timeSinceLastActivityLevelChange;
- (unsigned int)updateWithBonjourDevice:(id)a0;
- (unsigned int)updateWithMobileDevice:(id)a0;
- (unsigned int)updateWithSFDevice:(id)a0 changes:(unsigned int)a1;
- (void)updateWithSystemInfo:(id)a0;
- (void)updateWithWiFiDevice:(id)a0 changes:(unsigned int)a1;

@end
