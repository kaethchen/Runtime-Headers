@class NSData, SISchemaUUID;

@interface IFTSchemaIFTContextPrewarmRequest : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *prewarmRequestId;
@property (nonatomic) BOOL hasPrewarmRequestId;
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
- (void)deletePrewarmRequestId;
- (id)suppressMessageUnderConditions;

@end
