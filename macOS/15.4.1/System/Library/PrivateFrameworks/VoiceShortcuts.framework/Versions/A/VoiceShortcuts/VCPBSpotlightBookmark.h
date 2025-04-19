@class NSMutableArray;

@interface VCPBSpotlightBookmark : PBCodable <NSCopying>

@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) NSMutableArray *pairs;

+ (Class)pairsType;

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
- (void)addPairs:(id)a0;
- (void)clearPairs;
- (id)pairsAtIndex:(unsigned long long)a0;
- (unsigned long long)pairsCount;

@end
