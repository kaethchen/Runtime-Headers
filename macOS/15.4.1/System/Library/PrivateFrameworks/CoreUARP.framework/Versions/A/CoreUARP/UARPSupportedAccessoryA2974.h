@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA2974 : UARPSupportedAccessoryMagicKeyboard {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
