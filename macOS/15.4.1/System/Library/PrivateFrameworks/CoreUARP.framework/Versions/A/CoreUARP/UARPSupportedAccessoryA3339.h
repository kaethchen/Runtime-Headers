@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA3339 : UARPSupportedAccessoryMagicKeyboard {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
