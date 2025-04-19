@class NSData;

@interface MTSchemaMTTranslationTTSPlayed : SISchemaInstrumentationMessage {
    struct { unsigned char sourceOrTarget : 1; unsigned char isAutoplayTranslation : 1; unsigned char playbackSpeed : 1; unsigned char audioChannel : 1; } _has;
}

@property (nonatomic) int sourceOrTarget;
@property (nonatomic) BOOL hasSourceOrTarget;
@property (nonatomic) BOOL isAutoplayTranslation;
@property (nonatomic) BOOL hasIsAutoplayTranslation;
@property (nonatomic) int playbackSpeed;
@property (nonatomic) BOOL hasPlaybackSpeed;
@property (nonatomic) int audioChannel;
@property (nonatomic) BOOL hasAudioChannel;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAudioChannel;
- (void)deleteIsAutoplayTranslation;
- (void)deletePlaybackSpeed;
- (void)deleteSourceOrTarget;
- (id)suppressMessageUnderConditions;

@end
