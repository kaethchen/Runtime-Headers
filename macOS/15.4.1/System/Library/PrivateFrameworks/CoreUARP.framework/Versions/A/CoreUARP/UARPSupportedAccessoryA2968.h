@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA2968 : UARPSupportedAccessoryAirPodsCase {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
