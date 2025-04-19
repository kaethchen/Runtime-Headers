@class UARPAccessoryHardwareUSBPD;

@interface UARPSupportedAccessoryA3299 : UARPSupportedAccessoryUSBPDDongle {
    UARPAccessoryHardwareUSBPD *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
