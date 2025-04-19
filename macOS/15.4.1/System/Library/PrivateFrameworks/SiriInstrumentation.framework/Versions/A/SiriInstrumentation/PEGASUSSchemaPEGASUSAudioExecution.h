@class PEGASUSSchemaPEGASUSAudioQueueStateInfo, PEGASUSSchemaPEGASUSAudioPlaybackSignal, PEGASUSSchemaPEGASUSAudioUnderstanding, NSData;

@interface PEGASUSSchemaPEGASUSAudioExecution : SISchemaInstrumentationMessage

@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioPlaybackSignal *audioPlaybackSignal;
@property (nonatomic) BOOL hasAudioPlaybackSignal;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioUnderstanding *audioUnderstanding;
@property (nonatomic) BOOL hasAudioUnderstanding;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioQueueStateInfo *audioQueueStateInfo;
@property (nonatomic) BOOL hasAudioQueueStateInfo;
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
- (void)deleteAudioPlaybackSignal;
- (void)deleteAudioQueueStateInfo;
- (void)deleteAudioUnderstanding;
- (id)suppressMessageUnderConditions;

@end
