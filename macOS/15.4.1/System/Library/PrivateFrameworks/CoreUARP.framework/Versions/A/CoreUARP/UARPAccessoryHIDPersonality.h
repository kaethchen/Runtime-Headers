@interface UARPAccessoryHIDPersonality : NSObject

@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;
@property (readonly) unsigned long long hash;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)getHash;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1;
- (id)personalityIdentifier:(id)a0;

@end
