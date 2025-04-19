@class NSString, NSData;

@interface UAFSchemaUAFAssetSetUsage : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *usageName;
@property (nonatomic) BOOL hasUsageName;
@property (copy, nonatomic) NSString *usageValue;
@property (nonatomic) BOOL hasUsageValue;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUsageName;
- (void)deleteUsageValue;
- (id)suppressMessageUnderConditions;

@end
