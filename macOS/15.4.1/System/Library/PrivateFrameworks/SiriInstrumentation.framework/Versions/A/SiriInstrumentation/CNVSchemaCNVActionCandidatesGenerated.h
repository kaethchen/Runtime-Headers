@class NSArray, NSData;

@interface CNVSchemaCNVActionCandidatesGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionCandidates;
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
- (id)actionCandidatesAtIndex:(unsigned long long)a0;
- (unsigned long long)actionCandidatesCount;
- (void)addActionCandidates:(id)a0;
- (void)clearActionCandidates;
- (void)deleteActionCandidates;
- (id)suppressMessageUnderConditions;

@end
