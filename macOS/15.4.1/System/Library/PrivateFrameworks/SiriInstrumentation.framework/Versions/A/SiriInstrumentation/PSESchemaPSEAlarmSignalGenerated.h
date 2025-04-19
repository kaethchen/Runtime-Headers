@class NSData, PSESchemaPSECommonSignal, PSESchemaPSEAlarm;

@interface PSESchemaPSEAlarmSignalGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) PSESchemaPSECommonSignal *commonSignal;
@property (nonatomic) BOOL hasCommonSignal;
@property (retain, nonatomic) PSESchemaPSEAlarm *alarmSignal;
@property (nonatomic) BOOL hasAlarmSignal;
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
- (void)deleteAlarmSignal;
- (void)deleteCommonSignal;
- (id)suppressMessageUnderConditions;

@end
