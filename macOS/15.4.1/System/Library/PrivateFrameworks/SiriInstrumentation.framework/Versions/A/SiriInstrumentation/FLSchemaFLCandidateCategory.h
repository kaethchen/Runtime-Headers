@class FLSchemaFLToolCandidateCategory, NSData, FLSchemaFLParameterCandidateCategory;

@interface FLSchemaFLCandidateCategory : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLSchemaFLToolCandidateCategory *tool;
@property (nonatomic) BOOL hasTool;
@property (retain, nonatomic) FLSchemaFLParameterCandidateCategory *parameter;
@property (nonatomic) BOOL hasParameter;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichCategory;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteParameter;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteTool;
- (id)suppressMessageUnderConditions;

@end
