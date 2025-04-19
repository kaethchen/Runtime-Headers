@class UARPAccessoryHardwareUSBPD;

@interface UARPSupportedAccessoryA2571 : UARPSupportedAccessoryUSBPDPowerAdapter {
    UARPAccessoryHardwareUSBPD *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
