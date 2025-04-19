@class NSData, UAFSchemaUAFDeviceMetadata, SADSchemaSADAvailableAssetDailyStatus;

@interface UAFSchemaUAFAssetDailyStatusWithDeviceProperties : SISchemaInstrumentationMessage

@property (retain, nonatomic) UAFSchemaUAFDeviceMetadata *deviceMetadata;
@property (nonatomic) BOOL hasDeviceMetadata;
@property (retain, nonatomic) SADSchemaSADAvailableAssetDailyStatus *availableAssetDailyStatus;
@property (nonatomic) BOOL hasAvailableAssetDailyStatus;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAvailableAssetDailyStatus;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDeviceMetadata;
- (id)suppressMessageUnderConditions;

@end
