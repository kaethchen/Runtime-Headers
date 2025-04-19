@class NSData, SISchemaVersion;

@interface RGSiriSchemaRGInferenceStarted : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaVersion *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (retain, nonatomic) SISchemaVersion *promptVersion;
@property (nonatomic) BOOL hasPromptVersion;
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
- (void)deleteModelVersion;
- (void)deletePromptVersion;
- (id)suppressMessageUnderConditions;

@end
