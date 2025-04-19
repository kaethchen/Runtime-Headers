@class NSData, SISchemaVoiceTriggerMetrics, SISchemaSelfTriggerSuppressionMetrics;

@interface SISchemaAggregatedMetrics : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaVoiceTriggerMetrics *voiceTrigger;
@property (nonatomic) BOOL hasVoiceTrigger;
@property (retain, nonatomic) SISchemaSelfTriggerSuppressionMetrics *selfTriggerSuppression;
@property (nonatomic) BOOL hasSelfTriggerSuppression;
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
- (void)deleteSelfTriggerSuppression;
- (void)deleteVoiceTrigger;
- (id)suppressMessageUnderConditions;

@end
