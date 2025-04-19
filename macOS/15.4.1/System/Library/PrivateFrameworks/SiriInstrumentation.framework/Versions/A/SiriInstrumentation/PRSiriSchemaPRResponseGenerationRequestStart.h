@class NSArray, NSData;

@interface PRSiriSchemaPRResponseGenerationRequestStart : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionStatementIds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned int)actionStatementIdAtIndex:(unsigned long long)a0;
- (unsigned long long)actionStatementIdCount;
- (void)addActionStatementId:(unsigned int)a0;
- (void)clearActionStatementId;
- (void)deleteActionStatementId;
- (id)suppressMessageUnderConditions;

@end
