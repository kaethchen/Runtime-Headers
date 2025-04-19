@class NSString, GEOPDPlaceResponse, GEOPDPlaceRequest, PBDataReader;

@interface GEORPPlaceInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlaceResponse *_placeResponse;
    NSString *_sourceApplication;
    NSString *_sourceUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_placeRequest : 1; unsigned char read_placeResponse : 1; unsigned char read_sourceApplication : 1; unsigned char read_sourceUrl : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (readonly, nonatomic) BOOL hasPlaceResponse;
@property (retain, nonatomic) GEOPDPlaceResponse *placeResponse;
@property (readonly, nonatomic) BOOL hasSourceApplication;
@property (retain, nonatomic) NSString *sourceApplication;
@property (readonly, nonatomic) BOOL hasSourceUrl;
@property (retain, nonatomic) NSString *sourceUrl;

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
- (void)clearLocations;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearSessionId;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
