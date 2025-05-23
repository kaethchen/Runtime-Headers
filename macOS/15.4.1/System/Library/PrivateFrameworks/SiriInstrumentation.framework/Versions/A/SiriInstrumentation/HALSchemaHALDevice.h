@class HALSchemaHALAlarmContext, NSString, HALSchemaHALTimerContext, NSData, HALSchemaHALMediaPlayerContext, HALSchemaHALVoiceTriggerContext;

@interface HALSchemaHALDevice : SISchemaInstrumentationMessage {
    struct { unsigned char deviceProximity : 1; unsigned char deviceFamily : 1; unsigned char siriInputLocale : 1; unsigned char powerState : 1; } _has;
}

@property (nonatomic) int deviceProximity;
@property (nonatomic) BOOL hasDeviceProximity;
@property (nonatomic) int deviceFamily;
@property (nonatomic) BOOL hasDeviceFamily;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (nonatomic) int siriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (retain, nonatomic) HALSchemaHALMediaPlayerContext *mediaPlayerContext;
@property (nonatomic) BOOL hasMediaPlayerContext;
@property (retain, nonatomic) HALSchemaHALAlarmContext *alarmContext;
@property (nonatomic) BOOL hasAlarmContext;
@property (retain, nonatomic) HALSchemaHALTimerContext *timerContext;
@property (nonatomic) BOOL hasTimerContext;
@property (retain, nonatomic) HALSchemaHALVoiceTriggerContext *voiceTriggerContext;
@property (nonatomic) BOOL hasVoiceTriggerContext;
@property (nonatomic) int powerState;
@property (nonatomic) BOOL hasPowerState;
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
- (void)deleteAlarmContext;
- (void)deleteDeviceFamily;
- (void)deleteDeviceProximity;
- (void)deleteMediaPlayerContext;
- (void)deletePowerState;
- (void)deleteSiriInputLocale;
- (void)deleteSystemBuild;
- (void)deleteTimerContext;
- (void)deleteVoiceTriggerContext;
- (id)suppressMessageUnderConditions;

@end
