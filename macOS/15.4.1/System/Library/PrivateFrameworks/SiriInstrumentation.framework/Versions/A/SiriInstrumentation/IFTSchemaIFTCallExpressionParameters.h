@class NSString, IFTSchemaIFTStatementId, NSData;

@interface IFTSchemaIFTCallExpressionParameters : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *callParameterName;
@property (nonatomic) BOOL hasCallParameterName;
@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) BOOL hasStatementId;
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
- (void)deleteCallParameterName;
- (void)deleteStatementId;
- (id)suppressMessageUnderConditions;

@end
