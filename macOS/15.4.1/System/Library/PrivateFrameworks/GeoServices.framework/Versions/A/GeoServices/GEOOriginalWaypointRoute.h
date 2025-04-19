@class NSMutableArray, PBUnknownFields;

@interface GEOOriginalWaypointRoute : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_routeLegs;
    int _creationMethod;
    unsigned int _identifier;
    unsigned int _lastValidUserOffsetCm;
    int _purpose;
    int _source;
    struct { unsigned char has_creationMethod : 1; unsigned char has_identifier : 1; unsigned char has_lastValidUserOffsetCm : 1; unsigned char has_purpose : 1; unsigned char has_source : 1; } _flags;
}

@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSMutableArray *routeLegs;
@property (nonatomic) BOOL hasPurpose;
@property (nonatomic) int purpose;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasLastValidUserOffsetCm;
@property (nonatomic) unsigned int lastValidUserOffsetCm;
@property (nonatomic) BOOL hasCreationMethod;
@property (nonatomic) int creationMethod;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)routeLegType;

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
- (id)sourceAsString:(int)a0;
- (int)StringAsSource:(id)a0;
- (int)StringAsCreationMethod:(id)a0;
- (int)StringAsPurpose:(id)a0;
- (void)addRouteLeg:(id)a0;
- (void)clearRouteLegs;
- (void)clearUnknownFields:(BOOL)a0;
- (id)creationMethodAsString:(int)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)purposeAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (id)routeLegAtIndex:(unsigned long long)a0;
- (unsigned long long)routeLegsCount;

@end
