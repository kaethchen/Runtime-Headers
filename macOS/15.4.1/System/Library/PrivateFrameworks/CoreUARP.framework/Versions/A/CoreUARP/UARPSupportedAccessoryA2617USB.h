@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA2617USB : UARPSupportedAccessoryAirPodsCaseUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (unsigned short)productID;
+ (id)alternativeAppleModelNumbers;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
