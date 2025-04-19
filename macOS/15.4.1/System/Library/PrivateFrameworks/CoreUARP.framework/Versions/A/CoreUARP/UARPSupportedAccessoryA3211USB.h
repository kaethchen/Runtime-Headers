@class UARPAccessoryHardwareB2PHID;

@interface UARPSupportedAccessoryA3211USB : UARPSupportedAccessoryBeatsUSB {
    UARPAccessoryHardwareB2PHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
