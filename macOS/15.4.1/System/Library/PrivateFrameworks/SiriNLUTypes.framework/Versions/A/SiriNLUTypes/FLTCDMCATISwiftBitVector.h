@class NSData, NSMutableDictionary;

@interface FLTCDMCATISwiftBitVector : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct CDMCATISwiftBitVector { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) unsigned long long number_of_bits;
@property (readonly, nonatomic) unsigned long long number_of_bytes;
@property (readonly, nonatomic) unsigned long long bits_per_block;
@property (readonly, nonatomic) unsigned long long bit_shift;
@property (readonly, nonatomic) NSData *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)data:(id /* block */)a0;
- (struct Offset<CDMCATISwiftBitVector> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CDMCATISwiftBitVector { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CDMCATISwiftBitVector { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
