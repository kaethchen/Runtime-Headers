@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA3140 : UARPSupportedAccessoryBeatsBluetooth {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
