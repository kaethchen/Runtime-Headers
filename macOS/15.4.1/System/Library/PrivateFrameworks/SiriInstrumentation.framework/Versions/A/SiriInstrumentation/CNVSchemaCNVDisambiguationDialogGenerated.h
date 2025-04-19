@class NSArray, NSString, NSData;

@interface CNVSchemaCNVDisambiguationDialogGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionCandidateIds;
@property (copy, nonatomic) NSString *dialogType;
@property (nonatomic) BOOL hasDialogType;
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
- (void)deleteDialogType;
- (id)suppressMessageUnderConditions;

@end
