@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA2968USB : UARPSupportedAccessoryAirPodsCaseUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
