@class NSData, SISchemaUUID;

@interface HOMESchemaHOMEAssistantInfoReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *hashedHomeId;
@property (nonatomic) BOOL hasHashedHomeId;
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
- (void)deleteHashedHomeId;
- (id)suppressMessageUnderConditions;

@end
