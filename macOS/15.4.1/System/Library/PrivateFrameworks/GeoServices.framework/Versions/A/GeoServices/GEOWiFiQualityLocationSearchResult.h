@class PBDataReader, GEOLocation, NSMutableArray;

@interface GEOWiFiQualityLocationSearchResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_ess;
    GEOLocation *_location;
    unsigned long long _tileKey;
    NSMutableArray *_tiles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _status;
    struct { unsigned char has_tileKey : 1; unsigned char has_status : 1; unsigned char read_ess : 1; unsigned char read_location : 1; unsigned char read_tiles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) BOOL hasTileKey;
@property (nonatomic) unsigned long long tileKey;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *ess;
@property (retain, nonatomic) NSMutableArray *tiles;

+ (Class)essType;
+ (BOOL)isValid:(id)a0;
+ (Class)tileType;

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
- (int)StringAsStatus:(id)a0;
- (id)statusAsString:(int)a0;
- (void)addEss:(id)a0;
- (void)addTile:(id)a0;
- (void)clearEss;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearTiles;
- (id)essAtIndex:(unsigned long long)a0;
- (unsigned long long)essCount;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)tileAtIndex:(unsigned long long)a0;
- (unsigned long long)tilesCount;

@end
