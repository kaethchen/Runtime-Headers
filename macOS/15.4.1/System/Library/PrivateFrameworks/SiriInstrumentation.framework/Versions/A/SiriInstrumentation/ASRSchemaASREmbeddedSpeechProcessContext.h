@class ASRSchemaASREmbeddedSpeechProcessStarted, NSData;

@interface ASRSchemaASREmbeddedSpeechProcessContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ASRSchemaASREmbeddedSpeechProcessStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
