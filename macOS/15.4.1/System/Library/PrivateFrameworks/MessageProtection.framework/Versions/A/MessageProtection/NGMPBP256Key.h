@class NSString, NSData;

@interface NGMPBP256Key : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasKeychainTag;
@property (retain, nonatomic) NSString *keychainTag;
@property (nonatomic) int keystore;
@property (readonly, nonatomic) BOOL hasKeyData;
@property (retain, nonatomic) NSData *keyData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsKeystore:(id)a0;
- (id)keystoreAsString:(int)a0;

@end
