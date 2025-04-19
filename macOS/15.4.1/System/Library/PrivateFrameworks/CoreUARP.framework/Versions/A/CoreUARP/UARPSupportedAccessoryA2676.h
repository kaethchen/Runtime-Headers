@class UARPAccessoryHardwareUSBPD;

@interface UARPSupportedAccessoryA2676 : UARPSupportedAccessoryUSBPDPowerAdapter {
    UARPAccessoryHardwareUSBPD *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
