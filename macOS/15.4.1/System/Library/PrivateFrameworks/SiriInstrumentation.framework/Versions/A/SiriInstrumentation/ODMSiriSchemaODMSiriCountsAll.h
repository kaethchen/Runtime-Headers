@class ODMSiriSchemaODMSiriRequestCounts, ODMSiriSchemaODMDynamicDimensionsAll, NSData;

@interface ODMSiriSchemaODMSiriCountsAll : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODMSiriSchemaODMDynamicDimensionsAll *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODMSiriSchemaODMSiriRequestCounts *requestCounts;
@property (nonatomic) BOOL hasRequestCounts;
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
- (void)deleteDimensions;
- (void)deleteRequestCounts;
- (id)suppressMessageUnderConditions;

@end
