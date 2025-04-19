@class NSData, SISchemaUUID;

@interface SISchemaUEIDictationVoiceCommandUndoTapAction : SISchemaInstrumentationMessage {
    struct { unsigned char isUndoTapAlternativeSelection : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *voiceCommandId;
@property (nonatomic) BOOL hasVoiceCommandId;
@property (nonatomic) BOOL isUndoTapAlternativeSelection;
@property (nonatomic) BOOL hasIsUndoTapAlternativeSelection;
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
- (void)deleteIsUndoTapAlternativeSelection;
- (void)deleteVoiceCommandId;
- (id)suppressMessageUnderConditions;

@end
