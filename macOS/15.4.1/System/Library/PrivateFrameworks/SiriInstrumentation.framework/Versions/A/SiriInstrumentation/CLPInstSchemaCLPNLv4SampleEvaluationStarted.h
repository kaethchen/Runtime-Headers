@class NSData, SISchemaUUID;

@interface CLPInstSchemaCLPNLv4SampleEvaluationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char batchNumChunks : 1; unsigned char batchChunkId : 1; } _has;
}

@property (nonatomic) unsigned int batchNumChunks;
@property (nonatomic) BOOL hasBatchNumChunks;
@property (nonatomic) unsigned int batchChunkId;
@property (nonatomic) BOOL hasBatchChunkId;
@property (retain, nonatomic) SISchemaUUID *syntheticRequestId;
@property (nonatomic) BOOL hasSyntheticRequestId;
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
- (void)deleteBatchChunkId;
- (void)deleteBatchNumChunks;
- (void)deleteSyntheticRequestId;
- (id)suppressMessageUnderConditions;

@end
