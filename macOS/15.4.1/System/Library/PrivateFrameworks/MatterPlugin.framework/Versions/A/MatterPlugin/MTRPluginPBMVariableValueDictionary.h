@class NSDictionary, NSMutableArray;

@interface MTRPluginPBMVariableValueDictionary : PBCodable <NSCopying>

@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSMutableArray *pairs;

+ (Class)pairType;

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
- (void)clearPairs;
- (unsigned long long)pairsCount;
- (void)addPair:(id)a0;
- (id)pairAtIndex:(unsigned long long)a0;

@end
