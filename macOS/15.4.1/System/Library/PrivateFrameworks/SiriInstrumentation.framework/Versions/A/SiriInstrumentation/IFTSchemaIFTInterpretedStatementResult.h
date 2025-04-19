@class NSString, IFTSchemaIFTStatementOutcome, SISchemaUUID, NSData, IFTSchemaIFTStatementId;

@interface IFTSchemaIFTInterpretedStatementResult : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTStatementOutcome *outcome;
@property (nonatomic) BOOL hasOutcome;
@property (retain, nonatomic) IFTSchemaIFTStatementId *resultStatementId;
@property (nonatomic) BOOL hasResultStatementId;
@property (retain, nonatomic) IFTSchemaIFTStatementId *originProgramStatementId;
@property (nonatomic) BOOL hasOriginProgramStatementId;
@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) BOOL hasToolId;
@property (retain, nonatomic) SISchemaUUID *actionEventId;
@property (nonatomic) BOOL hasActionEventId;
@property (retain, nonatomic) IFTSchemaIFTStatementId *originTaskStatementId;
@property (nonatomic) BOOL hasOriginTaskStatementId;
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
- (void)deleteActionEventId;
- (void)deleteOriginProgramStatementId;
- (void)deleteOriginTaskStatementId;
- (void)deleteOutcome;
- (void)deleteResultStatementId;
- (void)deleteToolId;
- (id)suppressMessageUnderConditions;

@end
