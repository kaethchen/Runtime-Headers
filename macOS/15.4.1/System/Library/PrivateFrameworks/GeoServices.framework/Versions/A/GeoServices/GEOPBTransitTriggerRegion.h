@class GEOLatLng, PBUnknownFields;

@interface GEOPBTransitTriggerRegion : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLatLng *_location;
    unsigned int _delaySeconds;
    int _signalStrength;
    int _transition;
    struct { unsigned char has_delaySeconds : 1; unsigned char has_signalStrength : 1; unsigned char has_transition : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) BOOL hasTransition;
@property (nonatomic) int transition;
@property (nonatomic) BOOL hasSignalStrength;
@property (nonatomic) int signalStrength;
@property (nonatomic) BOOL hasDelaySeconds;
@property (nonatomic) unsigned int delaySeconds;
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
- (int)StringAsTransition:(id)a0;
- (int)StringAsSignalStrength:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)signalStrengthAsString:(int)a0;
- (id)transitionAsString:(int)a0;

@end
