@class NSMutableArray;

@interface PPSPBEnumMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *enumMaps;

+ (Class)enumMapType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)enumMapAtIndex:(unsigned long long)a0;
- (void)addEnumMap:(id)a0;
- (void)clearEnumMaps;
- (unsigned long long)enumMapsCount;

@end
