@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FLTSSUMetadata : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SSUMetadata { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *data_version;
@property (readonly, nonatomic) long long timestamp;
@property (readonly, nonatomic) NSArray *user_data;
@property (readonly, nonatomic) NSString *encoder_version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)user_data_count;
- (struct Offset<SSUMetadata> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUMetadata { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SSUMetadata { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (void)user_data_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)user_data_objectAtIndex:(unsigned long long)a0;

@end
