@class NSMutableSet;

@interface UARPAccessoryHardwareHID : UARPAccessoryHardwareID {
    NSMutableSet *_personalities;
}

@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)personalities;
- (void)addPersonality:(id)a0;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1;

@end
