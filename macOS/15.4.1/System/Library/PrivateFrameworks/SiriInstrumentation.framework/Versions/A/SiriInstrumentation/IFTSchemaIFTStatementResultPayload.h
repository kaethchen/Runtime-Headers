@class IFTSchemaIFTStatementOutcome, IFTSchemaIFTResponseManifest, NSData;

@interface IFTSchemaIFTStatementResultPayload : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTStatementOutcome *outcome;
@property (nonatomic) BOOL hasOutcome;
@property (retain, nonatomic) IFTSchemaIFTResponseManifest *response;
@property (nonatomic) BOOL hasResponse;
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
- (void)deleteOutcome;
- (void)deleteResponse;
- (id)suppressMessageUnderConditions;

@end
