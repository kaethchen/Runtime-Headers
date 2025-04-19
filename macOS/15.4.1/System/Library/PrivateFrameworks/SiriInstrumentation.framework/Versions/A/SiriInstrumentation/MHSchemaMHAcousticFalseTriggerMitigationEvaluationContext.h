@class MHSchemaMHAcousticFalseTriggerMitigationStarted, MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated, NSData, MHSchemaMHAcousticFalseTriggerMitigationFailed;

@interface MHSchemaMHAcousticFalseTriggerMitigationEvaluationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated *scoreGenerated;
@property (nonatomic) BOOL hasScoreGenerated;
@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationFailed *failed;
@property (nonatomic) BOOL hasFailed;
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
- (void)deleteFailed;
- (void)deleteScoreGenerated;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
