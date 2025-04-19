@class NSData;

@interface PEGASUSSchemaPEGASUSAudioPlaybackSignal : SISchemaInstrumentationMessage {
    struct { unsigned char audioPlaybackQueueLocation : 1; unsigned char audioPlaybackSpeed : 1; } _has;
}

@property (nonatomic) int audioPlaybackQueueLocation;
@property (nonatomic) BOOL hasAudioPlaybackQueueLocation;
@property (nonatomic) float audioPlaybackSpeed;
@property (nonatomic) BOOL hasAudioPlaybackSpeed;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAudioPlaybackQueueLocation;
- (void)deleteAudioPlaybackSpeed;
- (id)suppressMessageUnderConditions;

@end
