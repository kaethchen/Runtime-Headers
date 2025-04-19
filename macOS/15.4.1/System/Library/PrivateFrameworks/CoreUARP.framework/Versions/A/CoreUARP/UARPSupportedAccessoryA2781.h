@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA2781 : UARPSupportedAccessoryMagSafe {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
