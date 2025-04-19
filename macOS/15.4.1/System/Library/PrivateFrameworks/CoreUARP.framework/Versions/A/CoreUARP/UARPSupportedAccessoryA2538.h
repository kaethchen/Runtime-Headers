@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA2538 : UARPSupportedAccessoryPencil {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
