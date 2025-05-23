@class NSString, NSArray, CBPeripheral, NSDate, NSMutableArray;

@interface AXFakeHearingAidDevice : AXHearingAidDevice {
    NSMutableArray *_leftFakePrograms;
    NSMutableArray *_rightFakePrograms;
    id /* block */ _writeBlock;
}

@property (nonatomic) int type;
@property (nonatomic) BOOL connected;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *manufacturer;
@property (retain, nonatomic) NSArray *model;
@property (retain, nonatomic) NSString *leftUUID;
@property (retain, nonatomic) NSString *rightUUID;
@property (nonatomic) double rightBatteryLevel;
@property (nonatomic) double leftBatteryLevel;
@property (nonatomic) BOOL isConnecting;
@property (retain, nonatomic) NSString *leftFirmwareVersion;
@property (retain, nonatomic) NSString *rightFirmwareVersion;
@property (retain, nonatomic) NSString *leftHardwareVersion;
@property (retain, nonatomic) NSString *rightHardwareVersion;
@property (retain, nonatomic) NSDate *leftBatteryLowDate;
@property (retain, nonatomic) NSDate *rightBatteryLowDate;
@property (nonatomic) short leftMicrophoneVolumeSteps;
@property (nonatomic) short rightMicrophoneVolumeSteps;
@property (nonatomic) unsigned long long excludedProperties;
@property (retain) CBPeripheral *leftPeripheral;
@property (retain) CBPeripheral *rightPeripheral;

- (void)dealloc;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (BOOL)isConnected;
- (id)valueForProperty:(unsigned long long)a0;
- (BOOL)isPersistent;
- (id)initWithDeviceType:(int)a0;
- (void)setValue:(id)a0 forProperty:(unsigned long long)a1;
- (id)persistentRepresentation;
- (BOOL)hasConnection;
- (void)persist;
- (BOOL)isLeftConnected;
- (unsigned long long)availablePropertiesForPeripheral:(id)a0;
- (void)createPrograms;
- (BOOL)deviceSupportsProperty:(unsigned long long)a0;
- (BOOL)didLoadBasicProperties;
- (BOOL)didLoadRequiredProperties;
- (BOOL)isFakeDevice;
- (BOOL)isRightConnected;
- (BOOL)leftAvailable;
- (id)leftPrograms;
- (id)manufacturerForType;
- (id)modelForType;
- (BOOL)programsListsAreEqual;
- (BOOL)propertyIsAvailable:(unsigned long long)a0 forEar:(int)a1;
- (void)registerWriteBlock:(id /* block */)a0;
- (BOOL)rightAvailable;
- (id)rightPrograms;
- (void)setNewName:(id)a0;
- (BOOL)showCombinedPrograms;
- (BOOL)supportsCombinedVolumesForProperty:(unsigned long long)a0;
- (void)writeInt:(unsigned char)a0 toEar:(int)a1 forProperty:(unsigned long long)a2;
- (void)writeSignedInt:(char)a0 toEar:(int)a1 forProperty:(unsigned long long)a2;

@end
