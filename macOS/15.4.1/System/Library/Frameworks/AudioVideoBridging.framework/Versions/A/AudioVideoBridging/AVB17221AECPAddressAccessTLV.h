@class NSData;

@interface AVB17221AECPAddressAccessTLV : NSObject

@property unsigned char mode;
@property unsigned long long address;
@property (copy) NSData *memoryData;

- (id)description;
- (void).cxx_destruct;

@end
