@class NSArray, NSData;

@interface JRSchemaRankingCandidateMatrix : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *candidateTuples;
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
- (void)addCandidateTuples:(id)a0;
- (id)candidateTuplesAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateTuplesCount;
- (void)clearCandidateTuples;
- (void)deleteCandidateTuples;
- (id)suppressMessageUnderConditions;

@end
