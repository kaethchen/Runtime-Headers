@class NLXSchemaNLXLegacyNLContext, NLXSchemaCDMNLContext, NSData;

@interface NLXSchemaCDMTurnContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMNLContext *nlContext;
@property (nonatomic) BOOL hasNlContext;
@property (retain, nonatomic) NLXSchemaNLXLegacyNLContext *legacyNlContext;
@property (nonatomic) BOOL hasLegacyNlContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichTurncontexttype;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteNlContext;
- (void)deleteLegacyNlContext;
- (id)suppressMessageUnderConditions;

@end
