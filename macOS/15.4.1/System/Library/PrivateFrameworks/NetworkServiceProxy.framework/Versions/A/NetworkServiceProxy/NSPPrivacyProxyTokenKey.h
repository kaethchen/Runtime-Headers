@class NSData;

@interface NSPPrivacyProxyTokenKey : PBCodable <NSCopying> {
    struct { unsigned char expiration : 1; unsigned char rotation : 1; } _has;
}

@property (retain, nonatomic) NSData *key;
@property (nonatomic) BOOL hasExpiration;
@property (nonatomic) unsigned long long expiration;
@property (nonatomic) BOOL hasRotation;
@property (nonatomic) unsigned long long rotation;

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

@end
