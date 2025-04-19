@class NSArray, ODMSiriSchemaODMSiriAggregationInterval, NSData;

@interface ODMSiriSchemaODMSiriCountsReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODMSiriSchemaODMSiriAggregationInterval *aggregationInterval;
@property (nonatomic) BOOL hasAggregationInterval;
@property (copy, nonatomic) NSArray *siriCounts;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearSiriCounts;
- (unsigned long long)siriCountsCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addSiriCounts:(id)a0;
- (void)deleteAggregationInterval;
- (void)deleteSiriCounts;
- (id)siriCountsAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;

@end
