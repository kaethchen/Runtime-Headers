@class NSString, GEOLocation, PBDataReader;

@interface GEOBusinessResolutionRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    GEOLocation *_deviceLocation;
    NSString *_shortBusinessName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_deviceLocation : 1; unsigned char read_shortBusinessName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasShortBusinessName;
@property (retain, nonatomic) NSString *shortBusinessName;
@property (readonly, nonatomic) BOOL hasDeviceLocation;
@property (retain, nonatomic) GEOLocation *deviceLocation;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
