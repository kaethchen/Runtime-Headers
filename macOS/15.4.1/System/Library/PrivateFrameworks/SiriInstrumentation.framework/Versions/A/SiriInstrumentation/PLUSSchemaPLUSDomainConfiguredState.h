@class NSData, PLUSSchemaPLUSMediaConfiguredState;

@interface PLUSSchemaPLUSDomainConfiguredState : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSMediaConfiguredState *mediaState;
@property (nonatomic) BOOL hasMediaState;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDomainstate;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteMediaState;
- (id)suppressMessageUnderConditions;

@end
