@class PBDataReader, GEOPlaceSearchRequest, GEOLocation, NSMutableArray, PBUnknownFields;

@interface GEOWaypoint : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entryPoints;
    GEOLocation *_location;
    GEOPlaceSearchRequest *_placeSearchRequest;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_entryPoints : 1; unsigned char read_location : 1; unsigned char read_placeSearchRequest : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPlaceSearchRequest;
@property (retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (retain, nonatomic) NSMutableArray *entryPoints;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)entryPointType;
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
- (void)addEntryPoint:(id)a0;
- (void)clearEntryPoints;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)entryPointAtIndex:(unsigned long long)a0;
- (unsigned long long)entryPointsCount;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
