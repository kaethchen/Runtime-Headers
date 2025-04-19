@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMSetupMissingAssetsDetected : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (copy, nonatomic) NSArray *servicesMissingAssets;
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
- (void)deleteContextId;
- (void)addServicesMissingAsset:(int)a0;
- (void)clearServicesMissingAsset;
- (void)deleteServicesMissingAsset;
- (int)servicesMissingAssetAtIndex:(unsigned long long)a0;
- (unsigned long long)servicesMissingAssetCount;
- (id)suppressMessageUnderConditions;

@end
