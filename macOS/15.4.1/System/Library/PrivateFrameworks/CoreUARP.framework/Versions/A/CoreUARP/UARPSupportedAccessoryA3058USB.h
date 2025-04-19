@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA3058USB : UARPSupportedAccessoryAirPodsCaseUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
