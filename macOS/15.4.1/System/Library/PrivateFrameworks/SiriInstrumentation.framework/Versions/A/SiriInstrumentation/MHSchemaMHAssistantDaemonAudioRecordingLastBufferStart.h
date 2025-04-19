@class NSData;

@interface MHSchemaMHAssistantDaemonAudioRecordingLastBufferStart : SISchemaInstrumentationMessage {
    struct { unsigned char lastAudioRecordBufferStartTimeOffsetInNs : 1; } _has;
}

@property (nonatomic) unsigned long long lastAudioRecordBufferStartTimeOffsetInNs;
@property (nonatomic) BOOL hasLastAudioRecordBufferStartTimeOffsetInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLastAudioRecordBufferStartTimeOffsetInNs;
- (id)suppressMessageUnderConditions;

@end
