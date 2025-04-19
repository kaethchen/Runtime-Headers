@interface PIRPoint : PBCodable <NSCopying> {
    struct { unsigned char lat : 1; unsigned char lng : 1; } _has;
}

@property (nonatomic) BOOL hasLat;
@property (nonatomic) double lat;
@property (nonatomic) BOOL hasLng;
@property (nonatomic) double lng;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
