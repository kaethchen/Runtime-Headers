@class NSMutableArray;

@interface NTPBPublisherFavorabilityScores : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *scores;

+ (Class)scoresType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearScores;
- (unsigned long long)scoresCount;
- (void)addScores:(id)a0;
- (id)scoresAtIndex:(unsigned long long)a0;

@end
