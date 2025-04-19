@class NSMutableArray;

@interface GEOPBOfflineDataBatchesResponse : PBCodable <NSCopying> {
    NSMutableArray *_layerBatchs;
}

@property (retain, nonatomic) NSMutableArray *layerBatchs;

+ (BOOL)isValid:(id)a0;
+ (Class)layerBatchType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addLayerBatch:(id)a0;
- (void)clearLayerBatchs;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)layerBatchAtIndex:(unsigned long long)a0;
- (unsigned long long)layerBatchsCount;
- (void)readAll:(BOOL)a0;

@end
