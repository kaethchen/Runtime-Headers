@interface NTPBCKDate : PBCodable <NSCopying> {
    struct { unsigned char time : 1; } _has;
}

@property (nonatomic) BOOL hasTime;
@property (nonatomic) double time;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
