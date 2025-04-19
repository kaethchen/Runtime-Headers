@class ODDSiriSchemaODDMultiUserState, ODDSiriSchemaODDHomePodProperties, NSData;

@interface ODDSiriSchemaODDtvOSAssistantProperties : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDMultiUserState *multiUserState;
@property (nonatomic) BOOL hasMultiUserState;
@property (retain, nonatomic) ODDSiriSchemaODDHomePodProperties *homePodProperties;
@property (nonatomic) BOOL hasHomePodProperties;
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
- (void)deleteHomePodProperties;
- (void)deleteMultiUserState;
- (id)suppressMessageUnderConditions;

@end
