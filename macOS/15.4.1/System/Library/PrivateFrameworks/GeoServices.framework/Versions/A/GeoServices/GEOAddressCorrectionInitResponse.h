@class NSString, GEOLocation, NSMutableArray, PBDataReader;

@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_addressID;
    GEOLocation *_addressLocation;
    NSMutableArray *_address;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _numberOfVisitsBucketSize;
    int _statusCode;
    struct { unsigned char has_numberOfVisitsBucketSize : 1; unsigned char has_statusCode : 1; unsigned char read_addressID : 1; unsigned char read_addressLocation : 1; unsigned char read_address : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (readonly, nonatomic) BOOL hasAddressLocation;
@property (retain, nonatomic) GEOLocation *addressLocation;
@property (readonly, nonatomic) BOOL hasAddressID;
@property (retain, nonatomic) NSString *addressID;
@property (nonatomic) BOOL hasNumberOfVisitsBucketSize;
@property (nonatomic) unsigned int numberOfVisitsBucketSize;
@property (retain, nonatomic) NSMutableArray *address;

+ (Class)addressType;
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
- (int)StringAsStatusCode:(id)a0;
- (id)addressAtIndex:(unsigned long long)a0;
- (void)addAddress:(id)a0;
- (unsigned long long)addressCount;
- (void)clearAddress;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)statusCodeAsString:(int)a0;

@end
