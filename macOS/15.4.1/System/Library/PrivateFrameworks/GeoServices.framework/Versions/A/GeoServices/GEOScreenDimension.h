@class PBUnknownFields;

@interface GEOScreenDimension : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _height;
    double _width;
    struct { unsigned char has_height : 1; unsigned char has_width : 1; } _flags;
}

@property (nonatomic) BOOL hasWidth;
@property (nonatomic) double width;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) double height;
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
