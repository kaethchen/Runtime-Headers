@class NSArray, NSData;

@interface PEGASUSSchemaPEGASUSAlternateQuerySuggestionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *alternateQuerySuggestionCandidateTier1s;
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
- (void)addAlternateQuerySuggestionCandidateTier1:(id)a0;
- (id)alternateQuerySuggestionCandidateTier1AtIndex:(unsigned long long)a0;
- (unsigned long long)alternateQuerySuggestionCandidateTier1Count;
- (void)clearAlternateQuerySuggestionCandidateTier1;
- (void)deleteAlternateQuerySuggestionCandidateTier1;
- (id)suppressMessageUnderConditions;

@end
