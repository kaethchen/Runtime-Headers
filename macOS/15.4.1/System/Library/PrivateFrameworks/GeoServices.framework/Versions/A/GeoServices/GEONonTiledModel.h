@class GEONonTiledInfo, NSMutableArray, PBDataReader;

@interface GEONonTiledModel : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEONonTiledInfo *_info;
    NSMutableArray *_materialMaps;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_info : 1; unsigned char read_materialMaps : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasInfo;
@property (retain, nonatomic) GEONonTiledInfo *info;
@property (retain, nonatomic) NSMutableArray *materialMaps;

+ (Class)materialMapType;
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
- (void)addMaterialMap:(id)a0;
- (void)clearMaterialMaps;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)materialMapAtIndex:(unsigned long long)a0;
- (unsigned long long)materialMapsCount;
- (void)readAll:(BOOL)a0;

@end
