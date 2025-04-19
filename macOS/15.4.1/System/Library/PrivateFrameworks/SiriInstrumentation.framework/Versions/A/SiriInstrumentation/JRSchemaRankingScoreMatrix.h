@class NSArray, NSData;

@interface JRSchemaRankingScoreMatrix : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *scoreTuples;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addScoreTuples:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearScoreTuples;
- (void)deleteScoreTuples;
- (id)scoreTuplesAtIndex:(unsigned long long)a0;
- (unsigned long long)scoreTuplesCount;
- (id)suppressMessageUnderConditions;

@end
