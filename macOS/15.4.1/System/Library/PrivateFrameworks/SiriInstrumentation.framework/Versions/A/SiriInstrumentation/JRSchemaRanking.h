@class NSArray, JRSchemaRankingCandidateMatrix, JRSchemaRankingScoreMatrix, NSData;

@interface JRSchemaRanking : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *rankingMatrices;
@property (retain, nonatomic) JRSchemaRankingScoreMatrix *rankingScoreMatrix;
@property (nonatomic) BOOL hasRankingScoreMatrix;
@property (retain, nonatomic) JRSchemaRankingCandidateMatrix *rankingCandidateMatrix;
@property (nonatomic) BOOL hasRankingCandidateMatrix;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addRankingMatrices:(id)a0;
- (void)clearRankingMatrices;
- (void)deleteRankingCandidateMatrix;
- (void)deleteRankingMatrices;
- (void)deleteRankingScoreMatrix;
- (id)rankingMatricesAtIndex:(unsigned long long)a0;
- (unsigned long long)rankingMatricesCount;
- (id)suppressMessageUnderConditions;

@end
