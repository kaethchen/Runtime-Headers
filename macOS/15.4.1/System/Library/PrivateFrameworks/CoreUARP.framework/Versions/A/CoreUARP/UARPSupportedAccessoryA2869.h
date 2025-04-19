@class UARPAccessoryHardwareUSBPD;

@interface UARPSupportedAccessoryA2869 : UARPSupportedAccessoryUSBPDDongle {
    UARPAccessoryHardwareUSBPD *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
