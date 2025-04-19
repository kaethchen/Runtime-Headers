@class NSData, PLUSSchemaPLUSContactGroundTruth, SISchemaUUID;

@interface PLUSSchemaPLUSContactGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalPlusId;
@property (nonatomic) BOOL hasOriginalPlusId;
@property (retain, nonatomic) PLUSSchemaPLUSContactGroundTruth *groundTruth;
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
- (void)deleteOriginalPlusId;
- (id)suppressMessageUnderConditions;

@end
