@class NSData;

@interface HAPFragmentationPacket : HMFObject

@property (readonly, nonatomic) unsigned short transactionIdentifier;
@property (readonly, nonatomic) unsigned int length;
@property (readonly, nonatomic) unsigned int offset;
@property (readonly, copy, nonatomic) NSData *data;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)serialize;
- (id)initWithData:(id)a0 transactionIdentifier:(unsigned short)a1 length:(unsigned int)a2 offset:(unsigned int)a3;
- (id)initWithFragmentedPacketData:(id)a0;

@end
