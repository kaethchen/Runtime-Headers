@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA2458 : UARPSupportedAccessoryMagSafe {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
