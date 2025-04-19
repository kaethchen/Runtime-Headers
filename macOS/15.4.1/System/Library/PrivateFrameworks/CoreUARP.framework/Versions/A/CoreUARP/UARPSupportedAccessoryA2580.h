@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA2580 : UARPSupportedAccessoryMagSafe {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
