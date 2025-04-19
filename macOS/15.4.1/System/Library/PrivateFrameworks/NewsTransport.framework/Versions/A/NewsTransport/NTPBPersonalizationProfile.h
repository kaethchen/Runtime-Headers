@class NSMutableArray;

@interface NTPBPersonalizationProfile : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *aggregates;
@property (retain, nonatomic) NSMutableArray *histories;

+ (Class)aggregatesType;
+ (Class)historiesType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)aggregatesCount;
- (void)clearAggregates;
- (void)addAggregates:(id)a0;
- (void)addHistories:(id)a0;
- (id)aggregatesAtIndex:(unsigned long long)a0;
- (void)clearHistories;
- (id)historiesAtIndex:(unsigned long long)a0;
- (unsigned long long)historiesCount;

@end
