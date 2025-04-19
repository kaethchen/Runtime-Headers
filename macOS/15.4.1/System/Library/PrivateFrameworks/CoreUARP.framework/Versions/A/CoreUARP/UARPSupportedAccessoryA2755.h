@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA2755 : UARPSupportedAccessoryWatchPuck {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
