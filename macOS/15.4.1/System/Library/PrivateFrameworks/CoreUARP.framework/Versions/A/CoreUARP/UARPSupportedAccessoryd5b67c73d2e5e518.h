@class UARPAccessoryHardwareHID;

@interface UARPSupportedAccessoryd5b67c73d2e5e518 : UARPSupportedAccessoryHID {
    UARPAccessoryHardwareHID *hwID;
}

+ (unsigned short)productID;
+ (unsigned short)vendorID;
+ (id)appleModelNumber;
+ (id)productGroup;
+ (id)productNumber;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
