@class ODDSiriSchemaODDDeviceAndUsageDynamicDimensions, ODDSiriSchemaODDDeviceAndUsageAppTaskCounts, NSData;

@interface ODDSiriSchemaODDAssistantDiagnosticAndUsageOptInDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDDeviceAndUsageDynamicDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDDeviceAndUsageAppTaskCounts *appTaskCounts;
@property (nonatomic) BOOL hasAppTaskCounts;
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
- (void)deleteAppTaskCounts;
- (void)deleteDimensions;
- (id)suppressMessageUnderConditions;

@end
