@class UARPAccessoryHardwareUSBPD;

@interface UARPSupportedAccessoryA2290 : UARPSupportedAccessoryUSBPDPowerAdapterLegacy {
    UARPAccessoryHardwareUSBPD *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
