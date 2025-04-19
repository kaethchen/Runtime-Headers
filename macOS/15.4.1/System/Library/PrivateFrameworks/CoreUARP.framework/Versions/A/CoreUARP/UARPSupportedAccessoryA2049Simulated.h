@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA2049Simulated : UARPSupportedAccessoryUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (unsigned short)productID;
+ (unsigned short)vendorID;
+ (id)modelName;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
