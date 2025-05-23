@class PBUnknownFields;

@interface GEOSlippyTile : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    struct { unsigned char has_x : 1; unsigned char has_y : 1; unsigned char has_z : 1; } _flags;
}

@property (nonatomic) BOOL hasX;
@property (nonatomic) unsigned int x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) unsigned int y;
@property (nonatomic) BOOL hasZ;
@property (nonatomic) unsigned int z;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
