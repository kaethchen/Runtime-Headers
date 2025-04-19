@class NSMutableArray;

@interface GEORoutingFeatures : PBCodable <NSCopying> {
    NSMutableArray *_routingFeaturesInfos;
}

@property (retain, nonatomic) NSMutableArray *routingFeaturesInfos;

+ (BOOL)isValid:(id)a0;
+ (Class)routingFeaturesInfoType;

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
- (void)addRoutingFeaturesInfo:(id)a0;
- (void)clearRoutingFeaturesInfos;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)routingFeaturesInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)routingFeaturesInfosCount;

@end
