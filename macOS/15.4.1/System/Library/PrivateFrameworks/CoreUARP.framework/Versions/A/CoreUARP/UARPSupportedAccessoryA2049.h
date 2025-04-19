@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA2049 : UARPSupportedAccessoryUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (unsigned short)productID;
+ (id)modelName;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
