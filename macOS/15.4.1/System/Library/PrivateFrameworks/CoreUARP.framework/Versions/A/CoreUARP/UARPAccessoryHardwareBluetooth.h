@interface UARPAccessoryHardwareBluetooth : UARPAccessoryHardwareID

@property (readonly) long long vendorIDSource;
@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;
@property (readonly) unsigned short productVersion;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithVendorIDSource:(long long)a0 vendorID:(unsigned short)a1 productID:(unsigned short)a2 productVersion:(unsigned short)a3;

@end
