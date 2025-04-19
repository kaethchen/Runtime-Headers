@class UARPAccessoryHardwareUSBPD;

@interface UARPSupportedAccessoryA2363 : UARPSupportedAccessoryUSBPDMagSafe {
    UARPAccessoryHardwareUSBPD *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
