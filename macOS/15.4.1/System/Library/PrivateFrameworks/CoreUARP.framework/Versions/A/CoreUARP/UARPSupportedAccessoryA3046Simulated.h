@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA3046Simulated : UARPSupportedAccessoryUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (unsigned short)productID;
+ (unsigned short)vendorID;
+ (id)modelName;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
