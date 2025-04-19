@class NSData;

@interface SISchemaConversationTrace : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *previousTurnID;
@property (nonatomic) BOOL hasPreviousTurnID;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePreviousTurnID;
- (id)suppressMessageUnderConditions;
- (void)willProduceDictionaryRepresentation:(id)a0;

@end
