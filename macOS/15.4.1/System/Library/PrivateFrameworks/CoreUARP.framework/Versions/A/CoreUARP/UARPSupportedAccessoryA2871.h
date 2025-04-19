@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA2871 : UARPSupportedAccessoryBeatsBluetooth {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)appleModelNumber;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
