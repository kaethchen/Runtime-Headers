@class UARPAccessoryHardwareB2PHID;

@interface UARPSupportedAccessoryA2924USB : UARPSupportedAccessoryBeatsUSB {
    UARPAccessoryHardwareB2PHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
