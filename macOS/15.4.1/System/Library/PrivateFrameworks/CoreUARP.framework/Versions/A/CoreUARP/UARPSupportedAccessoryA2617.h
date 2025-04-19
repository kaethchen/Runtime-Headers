@class UARPAccessoryHardwareBluetooth;

@interface UARPSupportedAccessoryA2617 : UARPSupportedAccessoryAirPodsCase {
    UARPAccessoryHardwareBluetooth *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
