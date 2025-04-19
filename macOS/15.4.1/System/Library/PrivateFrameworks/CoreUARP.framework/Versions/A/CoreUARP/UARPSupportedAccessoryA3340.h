@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA3340 : UARPSupportedAccessoryMagicKeyboard {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
