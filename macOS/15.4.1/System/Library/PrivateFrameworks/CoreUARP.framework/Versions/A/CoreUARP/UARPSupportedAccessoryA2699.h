@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA2699 : UARPSupportedAccessoryAirPodsBud {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)appleModelNumber;
+ (id)mobileAssetAppleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
