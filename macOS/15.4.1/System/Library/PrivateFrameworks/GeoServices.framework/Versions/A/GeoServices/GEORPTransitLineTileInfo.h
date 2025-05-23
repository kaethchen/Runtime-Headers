@class NSString, PBDataReader;

@interface GEORPTransitLineTileInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    unsigned long long _transitLineMuid;
    NSString *_transitLineName;
    NSString *_transitSystemName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_transitLineMuid : 1; unsigned char read_transitLineName : 1; unsigned char read_transitSystemName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasTransitLineMuid;
@property (nonatomic) unsigned long long transitLineMuid;
@property (readonly, nonatomic) BOOL hasTransitLineName;
@property (retain, nonatomic) NSString *transitLineName;
@property (readonly, nonatomic) BOOL hasTransitSystemName;
@property (retain, nonatomic) NSString *transitSystemName;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
