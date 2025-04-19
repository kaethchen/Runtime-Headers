@class NSString, IFTSchemaIFTStatementId, NSData;

@interface IFTSchemaIFTStructuredSearchExpressionParameters : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *structuredSearchParameterName;
@property (nonatomic) BOOL hasStructuredSearchParameterName;
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
- (void)deleteStatementId;
- (void)deleteStructuredSearchParameterName;
- (id)suppressMessageUnderConditions;

@end
