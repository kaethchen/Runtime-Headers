@class UARPAccessoryHardwareUSBPD;

@interface UARPSupportedAccessoryA3328 : UARPSupportedAccessoryUSBPDPowerAdapter {
    UARPAccessoryHardwareUSBPD *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
