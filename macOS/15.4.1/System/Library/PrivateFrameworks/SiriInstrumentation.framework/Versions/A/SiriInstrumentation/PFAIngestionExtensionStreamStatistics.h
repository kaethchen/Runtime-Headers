@class NSData, SISchemaUUID;

@interface PFAIngestionExtensionStreamStatistics : SISchemaInstrumentationMessage {
    struct { unsigned char preProcessingCount : 1; unsigned char postProcessingCount : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *streamId;
@property (nonatomic) BOOL hasStreamId;
@property (nonatomic) unsigned int preProcessingCount;
@property (nonatomic) BOOL hasPreProcessingCount;
@property (nonatomic) unsigned int postProcessingCount;
@property (nonatomic) BOOL hasPostProcessingCount;
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
- (void)deletePostProcessingCount;
- (void)deletePreProcessingCount;
- (void)deleteStreamId;
- (id)suppressMessageUnderConditions;

@end
