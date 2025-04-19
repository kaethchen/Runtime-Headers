@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryA3085 : UARPSupportedAccessoryPencil {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (unsigned short)vendorID;
+ (id)appleModelNumber;

- (id)init;
- (void).cxx_destruct;

@end
