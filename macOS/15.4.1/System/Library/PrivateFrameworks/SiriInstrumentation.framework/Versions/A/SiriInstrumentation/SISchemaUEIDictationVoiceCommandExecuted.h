@class NSData, SISchemaUUID;

@interface SISchemaUEIDictationVoiceCommandExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char commandStatus : 1; unsigned char commandType : 1; unsigned char commandTargetWordCount : 1; unsigned char commandPayloadWordCount : 1; unsigned char commandTargetCharacterCount : 1; unsigned char commandPayloadCharacterCount : 1; unsigned char commandExecutionStartTimeInNs : 1; unsigned char commandExecutionEndTimeInNs : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *voiceCommandId;
@property (nonatomic) BOOL hasVoiceCommandId;
@property (nonatomic) int commandStatus;
@property (nonatomic) BOOL hasCommandStatus;
@property (nonatomic) int commandType;
@property (nonatomic) BOOL hasCommandType;
@property (nonatomic) unsigned long long commandTargetWordCount;
@property (nonatomic) BOOL hasCommandTargetWordCount;
@property (nonatomic) unsigned long long commandPayloadWordCount;
@property (nonatomic) BOOL hasCommandPayloadWordCount;
@property (nonatomic) unsigned long long commandTargetCharacterCount;
@property (nonatomic) BOOL hasCommandTargetCharacterCount;
@property (nonatomic) unsigned long long commandPayloadCharacterCount;
@property (nonatomic) BOOL hasCommandPayloadCharacterCount;
@property (nonatomic) unsigned long long commandExecutionStartTimeInNs;
@property (nonatomic) BOOL hasCommandExecutionStartTimeInNs;
@property (nonatomic) unsigned long long commandExecutionEndTimeInNs;
@property (nonatomic) BOOL hasCommandExecutionEndTimeInNs;
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
- (void)deleteCommandExecutionEndTimeInNs;
- (void)deleteCommandExecutionStartTimeInNs;
- (void)deleteCommandPayloadCharacterCount;
- (void)deleteCommandPayloadWordCount;
- (void)deleteCommandStatus;
- (void)deleteCommandTargetCharacterCount;
- (void)deleteCommandTargetWordCount;
- (void)deleteCommandType;
- (void)deleteVoiceCommandId;
- (id)suppressMessageUnderConditions;

@end
