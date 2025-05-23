@class NSString, GEOLocation, PBDataReader;

@interface GEOAddressCorrectionAddress : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_addressID;
    GEOLocation *_addressLocation;
    double _radiusInMeters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_radiusInMeters : 1; unsigned char read_addressID : 1; unsigned char read_addressLocation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasAddressLocation;
@property (retain, nonatomic) GEOLocation *addressLocation;
@property (readonly, nonatomic) BOOL hasAddressID;
@property (retain, nonatomic) NSString *addressID;
@property (nonatomic) BOOL hasRadiusInMeters;
@property (nonatomic) double radiusInMeters;

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
