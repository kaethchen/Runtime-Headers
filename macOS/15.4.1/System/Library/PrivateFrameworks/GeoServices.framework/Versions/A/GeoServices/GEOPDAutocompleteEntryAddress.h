@class PBDataReader, GEOPDMapsIdentifier, GEOLatLng, PBUnknownFields;

@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_center;
    double _disambiguationRadiusMeters;
    double _distance;
    GEOPDMapsIdentifier *_mapsId;
    unsigned long long _opaqueGeoId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _placeType;
    BOOL _shouldCallPlacesForClientization;
    struct { unsigned char has_disambiguationRadiusMeters : 1; unsigned char has_distance : 1; unsigned char has_opaqueGeoId : 1; unsigned char has_placeType : 1; unsigned char has_shouldCallPlacesForClientization : 1; unsigned char read_unknownFields : 1; unsigned char read_center : 1; unsigned char read_mapsId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) BOOL hasOpaqueGeoId;
@property (nonatomic) unsigned long long opaqueGeoId;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) double distance;
@property (nonatomic) BOOL hasPlaceType;
@property (nonatomic) int placeType;
@property (nonatomic) BOOL hasDisambiguationRadiusMeters;
@property (nonatomic) double disambiguationRadiusMeters;
@property (readonly, nonatomic) BOOL hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (nonatomic) BOOL hasShouldCallPlacesForClientization;
@property (nonatomic) BOOL shouldCallPlacesForClientization;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPlaceType:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)placeTypeAsString:(int)a0;
- (void)readAll:(BOOL)a0;

@end
