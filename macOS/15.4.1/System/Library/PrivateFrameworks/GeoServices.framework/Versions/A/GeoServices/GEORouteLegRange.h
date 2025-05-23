@class PBUnknownFields;

@interface GEORouteLegRange : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _endValidDistanceOffsetCm;
    unsigned int _startValidDistanceOffsetCm;
    struct { unsigned char has_endValidDistanceOffsetCm : 1; unsigned char has_startValidDistanceOffsetCm : 1; } _flags;
}

@property (nonatomic) BOOL hasStartValidDistanceOffsetCm;
@property (nonatomic) unsigned int startValidDistanceOffsetCm;
@property (nonatomic) BOOL hasEndValidDistanceOffsetCm;
@property (nonatomic) unsigned int endValidDistanceOffsetCm;
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
