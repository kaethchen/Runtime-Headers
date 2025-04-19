@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA2515 : UARPSupportedAccessoryWatchPuck {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
