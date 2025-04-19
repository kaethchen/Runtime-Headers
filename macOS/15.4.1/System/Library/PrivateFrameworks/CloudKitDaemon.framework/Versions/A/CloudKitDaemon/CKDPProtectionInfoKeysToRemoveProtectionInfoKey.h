@class NSData;

@interface CKDPProtectionInfoKeysToRemoveProtectionInfoKey : PBCodable <NSCopying> {
    struct { unsigned char keyType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKeyId;
@property (retain, nonatomic) NSData *keyId;
@property (nonatomic) BOOL hasKeyType;
@property (nonatomic) int keyType;

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
- (int)StringAsKeyType:(id)a0;
- (id)keyTypeAsString:(int)a0;

@end
