@interface UARPSupportedAccessoryUSBPD : UARPSupportedAccessory

+ (unsigned short)productID;
+ (unsigned short)vendorID;
+ (long long)deviceClass;
+ (long long)locationType;
+ (id)appleModelNumber;

- (id)init;

@end
