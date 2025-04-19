@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA2049DFU : UARPSupportedAccessoryUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (unsigned short)productID;
+ (id)modelName;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
