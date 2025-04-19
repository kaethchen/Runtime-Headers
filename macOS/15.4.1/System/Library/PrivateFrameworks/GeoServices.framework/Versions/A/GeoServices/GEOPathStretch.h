@class PBUnknownFields;

@interface GEOPathStretch : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _endOffsetCm;
    unsigned int _startOffsetCm;
    struct { unsigned char has_endOffsetCm : 1; unsigned char has_startOffsetCm : 1; } _flags;
}

@property (nonatomic) BOOL hasStartOffsetCm;
@property (nonatomic) unsigned int startOffsetCm;
@property (nonatomic) BOOL hasEndOffsetCm;
@property (nonatomic) unsigned int endOffsetCm;
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
