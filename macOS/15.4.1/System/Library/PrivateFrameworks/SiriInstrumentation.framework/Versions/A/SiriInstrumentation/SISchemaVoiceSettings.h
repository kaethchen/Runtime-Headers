@class NSString, SISchemaISOLocale, NSData;

@interface SISchemaVoiceSettings : SISchemaInstrumentationMessage {
    struct { unsigned char voiceGender : 1; unsigned char voiceAccent : 1; } _has;
}

@property (nonatomic) int voiceGender;
@property (nonatomic) BOOL hasVoiceGender;
@property (nonatomic) int voiceAccent;
@property (nonatomic) BOOL hasVoiceAccent;
@property (copy, nonatomic) NSString *voiceName;
@property (nonatomic) BOOL hasVoiceName;
@property (retain, nonatomic) SISchemaISOLocale *voiceAccentV2;
@property (nonatomic) BOOL hasVoiceAccentV2;
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
- (void)deleteVoiceName;
- (void)deleteVoiceAccent;
- (void)deleteVoiceAccentV2;
- (void)deleteVoiceGender;
- (id)suppressMessageUnderConditions;

@end
