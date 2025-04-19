@class NSData, FLOWSchemaFLOWProfileSwitchContext;

@interface FLOWSchemaFLOWIdentityContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWSchemaFLOWProfileSwitchContext *profileSwitchContext;
@property (nonatomic) BOOL hasProfileSwitchContext;
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
- (void)deleteProfileSwitchContext;
- (id)suppressMessageUnderConditions;

@end
