@class UARPAccessoryHardwareUSB;

@interface UARPSupportedAccessoryA3046DFUSimulated : UARPSupportedAccessoryUSB {
    UARPAccessoryHardwareUSB *hwID;
}

+ (unsigned short)productID;
+ (id)modelName;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
