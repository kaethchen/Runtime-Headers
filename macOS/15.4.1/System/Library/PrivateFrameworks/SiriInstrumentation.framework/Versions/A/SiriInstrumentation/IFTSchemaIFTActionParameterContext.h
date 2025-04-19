@class NSString, IFTSchemaIFTStatementId, NSData;

@interface IFTSchemaIFTActionParameterContext : SISchemaInstrumentationMessage {
    struct { unsigned char actionClass : 1; } _has;
}

@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) BOOL hasStatementId;
@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) BOOL hasToolId;
@property (nonatomic) int actionClass;
@property (nonatomic) BOOL hasActionClass;
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
- (void)deleteActionClass;
- (void)deleteStatementId;
- (void)deleteToolId;
- (id)suppressMessageUnderConditions;

@end
