@class NSData, ICEncryptionMetadata;

@interface ICEncryptionKey : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSData *keyData;
@property (readonly, nonatomic) ICEncryptionMetadata *metadata;
@property (readonly, nonatomic) NSData *serializedData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)validate;
- (BOOL)serialize;
- (id)initWithSerializedData:(id)a0;
- (BOOL)deserializeWithData:(id)a0;
- (id)initWithKeyData:(id)a0 metadata:(id)a1;

@end
