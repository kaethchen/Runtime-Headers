@class NSData, SISchemaUUID;

@interface ASRSchemaASRDictationVoiceCommandMetricsReported : SISchemaInstrumentationMessage {
    struct { unsigned char commandEndTimeInNs : 1; unsigned char commandParserStartTimeInNs : 1; unsigned char commandParserEndTimeInNs : 1; unsigned char utteranceStartTimeInNs : 1; unsigned char utteranceEndTimeInNs : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *voiceCommandId;
@property (nonatomic) BOOL hasVoiceCommandId;
@property (nonatomic) unsigned long long commandEndTimeInNs;
@property (nonatomic) BOOL hasCommandEndTimeInNs;
@property (nonatomic) unsigned long long commandParserStartTimeInNs;
@property (nonatomic) BOOL hasCommandParserStartTimeInNs;
@property (nonatomic) unsigned long long commandParserEndTimeInNs;
@property (nonatomic) BOOL hasCommandParserEndTimeInNs;
@property (nonatomic) unsigned long long utteranceStartTimeInNs;
@property (nonatomic) BOOL hasUtteranceStartTimeInNs;
@property (nonatomic) unsigned long long utteranceEndTimeInNs;
@property (nonatomic) BOOL hasUtteranceEndTimeInNs;
@property (retain, nonatomic) SISchemaUUID *recognitionResultLinkId;
@property (nonatomic) BOOL hasRecognitionResultLinkId;
@property (retain, nonatomic) SISchemaUUID *dictationVoiceCommandLinkId;
@property (nonatomic) BOOL hasDictationVoiceCommandLinkId;
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
- (void)deleteCommandEndTimeInNs;
- (void)deleteCommandParserEndTimeInNs;
- (void)deleteCommandParserStartTimeInNs;
- (void)deleteDictationVoiceCommandLinkId;
- (void)deleteRecognitionResultLinkId;
- (void)deleteUtteranceEndTimeInNs;
- (void)deleteUtteranceStartTimeInNs;
- (void)deleteVoiceCommandId;
- (id)suppressMessageUnderConditions;

@end
