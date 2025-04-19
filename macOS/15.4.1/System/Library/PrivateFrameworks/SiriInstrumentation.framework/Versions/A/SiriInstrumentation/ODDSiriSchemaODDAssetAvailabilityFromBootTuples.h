@class NSArray, NSData;

@interface ODDSiriSchemaODDAssetAvailabilityFromBootTuples : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *bootToAssetDeliveryInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (float)bootToAssetDeliveryInMsAtIndex:(unsigned long long)a0;
- (void)addBootToAssetDeliveryInMs:(float)a0;
- (unsigned long long)bootToAssetDeliveryInMsCount;
- (void)clearBootToAssetDeliveryInMs;
- (void)deleteBootToAssetDeliveryInMs;
- (id)suppressMessageUnderConditions;

@end
