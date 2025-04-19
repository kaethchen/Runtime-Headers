@class PBUnknownFields;

@interface GEOStopAddedDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _stopAddedAction;
    struct { unsigned char has_stopAddedAction : 1; } _flags;
}

@property (nonatomic) BOOL hasStopAddedAction;
@property (nonatomic) int stopAddedAction;
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
- (int)StringAsStopAddedAction:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)stopAddedActionAsString:(int)a0;

@end
