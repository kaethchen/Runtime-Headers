@class PBUnknownFields;

@interface GEOWaypointRouteFeatures : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _avoidsHighways;
    BOOL _avoidsTolls;
    BOOL _avoidsTraffic;
    struct { unsigned char has_avoidsHighways : 1; unsigned char has_avoidsTolls : 1; unsigned char has_avoidsTraffic : 1; } _flags;
}

@property (nonatomic) BOOL hasAvoidsTolls;
@property (nonatomic) BOOL avoidsTolls;
@property (nonatomic) BOOL hasAvoidsHighways;
@property (nonatomic) BOOL avoidsHighways;
@property (nonatomic) BOOL hasAvoidsTraffic;
@property (nonatomic) BOOL avoidsTraffic;
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
