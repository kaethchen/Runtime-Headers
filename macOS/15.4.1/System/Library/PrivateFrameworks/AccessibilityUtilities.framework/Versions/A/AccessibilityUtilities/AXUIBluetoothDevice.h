@class NSString, CBPeripheral, AXUIBluetoothHelper;

@interface AXUIBluetoothDevice : NSObject <NSCopying> {
    NSString *_name;
    NSString *_address;
    AXUIBluetoothHelper *_helper;
}

@property (nonatomic) struct BTDeviceImpl { } *device;
@property (retain, nonatomic) CBPeripheral *peripheral;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)identifier;
- (int)type;
- (id)address;
- (void)disconnect;
- (void)connect;
- (BOOL)connected;
- (unsigned int)productId;
- (unsigned int)vendorId;
- (unsigned int)deviceClass;
- (unsigned long long)connectedServices;
- (BOOL)paired;
- (BOOL)isEqualToDevice:(id)a0;
- (BOOL)connecting;
- (BOOL)isServiceSupported:(unsigned int)a0;
- (void)setPIN:(id)a0;
- (void)unpair;
- (unsigned int)majorClass;
- (unsigned int)minorClass;
- (void)acceptSSP:(int)a0;
- (void)connectWithServices:(unsigned int)a0;
- (unsigned long long)connectedServicesCount;
- (unsigned int)authorizedServices;
- (BOOL)isClassicDevice;
- (void)clearName;
- (BOOL)hasAddress:(id)a0;
- (id)initWithDevice:(void *)a0 address:(id)a1 helper:(id)a2;
- (id)initWithPeripheral:(id)a0 helper:(id)a1;
- (BOOL)isAppleHIDDevice;
- (BOOL)isBTLEDevice;
- (BOOL)isNameCached;

@end
