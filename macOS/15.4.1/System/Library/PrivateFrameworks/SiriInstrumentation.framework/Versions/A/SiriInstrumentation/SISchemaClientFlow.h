@class NSString, NSData;

@interface SISchemaClientFlow : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *clientFlowPayload;
@property (nonatomic) BOOL hasClientFlowPayload;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteClientFlowPayload;
- (id)suppressMessageUnderConditions;

@end
