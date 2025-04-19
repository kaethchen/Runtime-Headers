@class NSData, NSMutableArray, PBDataReader;

@interface GEOLPRLicensePlateRestrictionRules : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_licensePlateRegions;
    NSData *_version;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _createTime;
    struct { unsigned char read_licensePlateRegions : 1; unsigned char read_version : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSData *version;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSMutableArray *licensePlateRegions;

+ (BOOL)isValid:(id)a0;
+ (Class)licensePlateRegionType;

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
- (void)addLicensePlateRegion:(id)a0;
- (void)clearLicensePlateRegions;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)licensePlateRegionAtIndex:(unsigned long long)a0;
- (unsigned long long)licensePlateRegionsCount;
- (void)readAll:(BOOL)a0;

@end
