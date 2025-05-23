@class NSString, GEOLocation, GEOStructuredAddress, PBDataReader;

@interface GEOSignificantLocation : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOStructuredAddress *_address;
    double _confidence;
    NSString *_identifier;
    GEOLocation *_location;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _locationIndex;
    unsigned int _numberOfVisitsBucket;
    struct { unsigned char has_confidence : 1; unsigned char has_locationIndex : 1; unsigned char has_numberOfVisitsBucket : 1; unsigned char read_address : 1; unsigned char read_identifier : 1; unsigned char read_location : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) BOOL hasLocationIndex;
@property (nonatomic) unsigned int locationIndex;
@property (nonatomic) BOOL hasNumberOfVisitsBucket;
@property (nonatomic) unsigned int numberOfVisitsBucket;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
@property (readonly, nonatomic) BOOL hasAddress;
@property (retain, nonatomic) GEOStructuredAddress *address;

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
- (void)clearSensitiveFields:(unsigned long long)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
