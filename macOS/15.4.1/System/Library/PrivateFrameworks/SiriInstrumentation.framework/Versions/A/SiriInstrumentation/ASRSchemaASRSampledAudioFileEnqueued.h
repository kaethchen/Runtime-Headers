@class NSData, SISchemaUUID;

@interface ASRSchemaASRSampledAudioFileEnqueued : SISchemaInstrumentationMessage {
    struct { unsigned char audioCodec : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalAsrId;
@property (nonatomic) BOOL hasOriginalAsrId;
@property (nonatomic) int audioCodec;
@property (nonatomic) BOOL hasAudioCodec;
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
- (void)deleteAudioCodec;
- (void)deleteOriginalAsrId;
- (id)suppressMessageUnderConditions;

@end
