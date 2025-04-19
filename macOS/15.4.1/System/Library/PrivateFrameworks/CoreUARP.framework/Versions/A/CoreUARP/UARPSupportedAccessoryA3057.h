@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA3057 : UARPSupportedAccessoryAirPodsBud {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;
+ (id)mobileAssetAppleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
