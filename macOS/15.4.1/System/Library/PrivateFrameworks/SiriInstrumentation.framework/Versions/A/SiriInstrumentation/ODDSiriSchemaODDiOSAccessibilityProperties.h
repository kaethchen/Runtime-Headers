@class NSData;

@interface ODDSiriSchemaODDiOSAccessibilityProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAlwaysListenForHeySiriEnabled : 1; unsigned char siriPauseTimeState : 1; unsigned char isShowAppsBehindSiriEnabled : 1; unsigned char siriSpeechRate : 1; unsigned char isVoiceOverEnabled : 1; unsigned char isTypeToSiriEnabled : 1; unsigned char voiceFeedback : 1; unsigned char isAtypicalSpeechEnabled : 1; } _has;
}

@property (nonatomic) BOOL isAlwaysListenForHeySiriEnabled;
@property (nonatomic) BOOL hasIsAlwaysListenForHeySiriEnabled;
@property (nonatomic) int siriPauseTimeState;
@property (nonatomic) BOOL hasSiriPauseTimeState;
@property (nonatomic) BOOL isShowAppsBehindSiriEnabled;
@property (nonatomic) BOOL hasIsShowAppsBehindSiriEnabled;
@property (nonatomic) double siriSpeechRate;
@property (nonatomic) BOOL hasSiriSpeechRate;
@property (nonatomic) BOOL isVoiceOverEnabled;
@property (nonatomic) BOOL hasIsVoiceOverEnabled;
@property (nonatomic) BOOL isTypeToSiriEnabled;
@property (nonatomic) BOOL hasIsTypeToSiriEnabled;
@property (nonatomic) int voiceFeedback;
@property (nonatomic) BOOL hasVoiceFeedback;
@property (nonatomic) BOOL isAtypicalSpeechEnabled;
@property (nonatomic) BOOL hasIsAtypicalSpeechEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsAlwaysListenForHeySiriEnabled;
- (void)deleteIsAtypicalSpeechEnabled;
- (void)deleteIsShowAppsBehindSiriEnabled;
- (void)deleteIsTypeToSiriEnabled;
- (void)deleteIsVoiceOverEnabled;
- (void)deleteSiriPauseTimeState;
- (void)deleteSiriSpeechRate;
- (void)deleteVoiceFeedback;
- (id)suppressMessageUnderConditions;

@end
