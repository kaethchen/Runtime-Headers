@interface _GCBluetoothDeviceIdentifier : NSObject {
    unsigned char _hardwareAddress[6];
}

+ (id)identifierWithHardwareAddress:(id)a0;
+ (id)identifierWithHardwareAddressString:(id)a0;

- (id)description;
- (id)init;

@end
