@class PBDataReader, GEOLocation, NSMutableArray;

@interface GEOWiFiQualityLocationSearch : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOLocation *_location;
    unsigned long long _radius;
    NSMutableArray *_tiles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_radius : 1; unsigned char read_location : 1; unsigned char read_tiles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (retain, nonatomic) NSMutableArray *tiles;
@property (nonatomic) BOOL hasRadius;
@property (nonatomic) unsigned long long radius;

+ (BOOL)isValid:(id)a0;
+ (Class)tilesType;

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
- (void)addTiles:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearTiles;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)tilesAtIndex:(unsigned long long)a0;
- (unsigned long long)tilesCount;

@end
