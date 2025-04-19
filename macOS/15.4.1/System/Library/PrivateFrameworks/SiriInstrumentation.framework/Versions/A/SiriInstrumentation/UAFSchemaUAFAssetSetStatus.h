@class NSArray, NSData;

@interface UAFSchemaUAFAssetSetStatus : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *uafAssetSets;
@property (copy, nonatomic) NSArray *uafAssetSubscriptions;
@property (copy, nonatomic) NSArray *allAssets;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAllAssets;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addAllAssets:(id)a0;
- (void)addUafAssetSets:(id)a0;
- (void)addUafAssetSubscriptions:(id)a0;
- (id)allAssetsAtIndex:(unsigned long long)a0;
- (unsigned long long)allAssetsCount;
- (void)clearAllAssets;
- (void)clearUafAssetSets;
- (void)clearUafAssetSubscriptions;
- (void)deleteUafAssetSets;
- (void)deleteUafAssetSubscriptions;
- (id)suppressMessageUnderConditions;
- (id)uafAssetSetsAtIndex:(unsigned long long)a0;
- (unsigned long long)uafAssetSetsCount;
- (id)uafAssetSubscriptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)uafAssetSubscriptionsCount;

@end
