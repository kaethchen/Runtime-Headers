@class NSMutableArray, PBUnknownFields;

@interface GEOCameraInput : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_eventPositions;
}

@property (retain, nonatomic) NSMutableArray *eventPositions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)eventPositionType;
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
- (void)addEventPosition:(id)a0;
- (void)clearEventPositions;
- (void)clearUnknownFields:(BOOL)a0;
- (id)eventPositionAtIndex:(unsigned long long)a0;
- (unsigned long long)eventPositionsCount;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
