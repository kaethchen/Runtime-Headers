@class GEOLatLng, PBUnknownFields;

@interface GEOVLFLocation : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct GEOECEFCoordinate { double _x; double _y; double _z; struct { unsigned char x : 1; unsigned char y : 1; unsigned char z : 1; } _has; } _ecefLocation;
    double _heading;
    double _horizontalAccuracy;
    GEOLatLng *_location;
    double _verticalAccuracy;
    int _type;
    BOOL _isFused;
    struct { unsigned char has_ecefLocation : 1; unsigned char has_heading : 1; unsigned char has_horizontalAccuracy : 1; unsigned char has_verticalAccuracy : 1; unsigned char has_type : 1; unsigned char has_isFused : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) BOOL hasEcefLocation;
@property (nonatomic) struct GEOECEFCoordinate { double x0; double x1; double x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } ecefLocation;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) BOOL hasVerticalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) BOOL hasHeading;
@property (nonatomic) double heading;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasIsFused;
@property (nonatomic) BOOL isFused;
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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
