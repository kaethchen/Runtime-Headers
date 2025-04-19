@class NSData, PLUSSchemaPLUSMediaGroundTruth, SISchemaUUID;

@interface PLUSSchemaPLUSMediaGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
@property (retain, nonatomic) PLUSSchemaPLUSMediaGroundTruth *groundTruth;
@property (nonatomic) BOOL hasGroundTruth;
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
- (void)deleteGroundTruth;
- (void)deleteOriginalRequestId;
- (id)suppressMessageUnderConditions;

@end
