@class GEOLatLng;

@interface GEONavigationTransitStopSummary : PBCodable <NSCopying> {
    GEOLatLng *_coordinate;
    unsigned long long _stopID;
    struct { unsigned char has_stopID : 1; } _flags;
}

@property (nonatomic) BOOL hasStopID;
@property (nonatomic) unsigned long long stopID;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;

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
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithTransitStop:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
