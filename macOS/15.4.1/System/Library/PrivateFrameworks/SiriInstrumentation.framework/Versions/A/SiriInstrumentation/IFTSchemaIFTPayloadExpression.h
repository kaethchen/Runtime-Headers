@class NSArray, NSData;

@interface IFTSchemaIFTPayloadExpression : SISchemaInstrumentationMessage

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
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addStatementIds:(id)a0;
- (void)clearStatementIds;
- (void)deleteStatementIds;
- (id)statementIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)statementIdsCount;
- (id)suppressMessageUnderConditions;

@end
