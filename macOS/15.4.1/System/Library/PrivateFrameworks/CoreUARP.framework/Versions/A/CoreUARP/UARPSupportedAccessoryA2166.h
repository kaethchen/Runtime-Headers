@class UARPAccessoryHardwareUSBPD;

@interface UARPSupportedAccessoryA2166 : UARPSupportedAccessoryUSBPDPowerAdapterLegacy {
    UARPAccessoryHardwareUSBPD *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
