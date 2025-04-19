@class NSData, ASRSchemaASRFullPayloadCorrectionInfoTier1;

@interface DODMLASRSchemaDODMLASRFullPayloadCorrectionExperimentInfoTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) ASRSchemaASRFullPayloadCorrectionInfoTier1 *infoTier1;
@property (nonatomic) BOOL hasInfoTier1;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteInfoTier1;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;

@end
