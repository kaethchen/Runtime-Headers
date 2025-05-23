@class GEOLatLng, PBUnknownFields;

@interface GEOLatLngE7 : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _latE7;
    int _lngE7;
}

@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) GEOLatLng *latLng;
@property (nonatomic) int latE7;
@property (nonatomic) int lngE7;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (int)toE7Coordinate:(double)a0;
+ (double)fromE7Coordinate:(int)a0;
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
- (id)initWithCoordinate:(struct { double x0; double x1; })a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (id)initWithLatLng:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithE7Latitude:(int)a0 longitude:(int)a1;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
