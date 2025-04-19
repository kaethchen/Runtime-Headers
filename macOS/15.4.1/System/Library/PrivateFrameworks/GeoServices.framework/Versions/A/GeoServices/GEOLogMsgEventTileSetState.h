@class PBUnknownFields;

@interface GEOLogMsgEventTileSetState : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _durationInOldState;
    double _newCoverage;
    double _oldCoverage;
    int _tileSetStateType;
    struct { unsigned char has_durationInOldState : 1; unsigned char has_newCoverage : 1; unsigned char has_oldCoverage : 1; unsigned char has_tileSetStateType : 1; } _flags;
}

@property (nonatomic) BOOL hasDurationInOldState;
@property (nonatomic) double durationInOldState;
@property (nonatomic) BOOL hasTileSetStateType;
@property (nonatomic) int tileSetStateType;
@property (nonatomic) BOOL hasOldCoverage;
@property (nonatomic) double oldCoverage;
@property (nonatomic) BOOL hasNewCoverage;
@property (nonatomic) double newCoverage;
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
- (int)StringAsTileSetStateType:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)tileSetStateTypeAsString:(int)a0;

@end
