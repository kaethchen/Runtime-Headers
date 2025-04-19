@class NSArray, NSData;

@interface IFTSchemaIFTValueExpressionArrayVariant : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *statementIds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addStatementId:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearStatementId;
- (void)deleteStatementId;
- (id)statementIdAtIndex:(unsigned long long)a0;
- (unsigned long long)statementIdCount;
- (id)suppressMessageUnderConditions;

@end
