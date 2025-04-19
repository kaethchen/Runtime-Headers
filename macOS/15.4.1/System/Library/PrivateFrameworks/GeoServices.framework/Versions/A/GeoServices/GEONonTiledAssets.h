@class NSMutableArray, PBDataReader;

@interface GEONonTiledAssets : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_materialMaps;
    NSMutableArray *_materials;
    NSMutableArray *_models;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_materialMaps : 1; unsigned char read_materials : 1; unsigned char read_models : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *models;
@property (retain, nonatomic) NSMutableArray *materials;
@property (retain, nonatomic) NSMutableArray *materialMaps;

+ (Class)modelType;
+ (Class)materialType;
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
- (void)clearMaterials;
- (unsigned long long)materialsCount;
- (void)addMaterialMap:(id)a0;
- (void)addMaterial:(id)a0;
- (void)addModel:(id)a0;
- (void)clearMaterialMaps;
- (void)clearModels;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)materialAtIndex:(unsigned long long)a0;
- (id)materialMapAtIndex:(unsigned long long)a0;
- (unsigned long long)materialMapsCount;
- (id)modelAtIndex:(unsigned long long)a0;
- (unsigned long long)modelsCount;
- (void)readAll:(BOOL)a0;

@end
