@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA3157 : UARPSupportedAccessoryBeatsBluetooth {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
