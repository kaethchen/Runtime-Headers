@class NSArray, NSData;

@interface CAARSchemaCAARResponseGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionCandidateIds;
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
- (id)actionCandidateIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionCandidateIdsCount;
- (void)addActionCandidateIds:(id)a0;
- (void)clearActionCandidateIds;
- (void)deleteActionCandidateIds;
- (id)suppressMessageUnderConditions;

@end
