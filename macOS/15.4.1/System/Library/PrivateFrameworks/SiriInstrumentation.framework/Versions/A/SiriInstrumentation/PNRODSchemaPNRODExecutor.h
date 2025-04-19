@class PNRODSchemaPNRODMetricDuration, NSData, PNRODSchemaPNRODFailureInfo, SISchemaUUID;

@interface PNRODSchemaPNRODExecutor : SISchemaInstrumentationMessage {
    struct { unsigned char executorSearchToolQueryType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *executorId;
@property (nonatomic) BOOL hasExecutorId;
@property (retain, nonatomic) SISchemaUUID *planCycleId;
@property (nonatomic) BOOL hasPlanCycleId;
@property (nonatomic) int executorSearchToolQueryType;
@property (nonatomic) BOOL hasExecutorSearchToolQueryType;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *executorAppIntentHandleTime;
@property (nonatomic) BOOL hasExecutorAppIntentHandleTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *executorAppIntentQueryHandleTime;
@property (nonatomic) BOOL hasExecutorAppIntentQueryHandleTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *searchToolQueryTime;
@property (nonatomic) BOOL hasSearchToolQueryTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *personQueryTime;
@property (nonatomic) BOOL hasPersonQueryTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *stringQueryLocationTime;
@property (nonatomic) BOOL hasStringQueryLocationTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *stringQueryEntityMatcherTime;
@property (nonatomic) BOOL hasStringQueryEntityMatcherTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *stringQueryEntityTime;
@property (nonatomic) BOOL hasStringQueryEntityTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *identifierQueryTime;
@property (nonatomic) BOOL hasIdentifierQueryTime;
@property (retain, nonatomic) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic) BOOL hasFailureInfo;
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
- (void)deleteExecutorAppIntentHandleTime;
- (void)deleteExecutorAppIntentQueryHandleTime;
- (void)deleteExecutorId;
- (void)deleteExecutorSearchToolQueryType;
- (void)deleteFailureInfo;
- (void)deleteIdentifierQueryTime;
- (void)deletePersonQueryTime;
- (void)deletePlanCycleId;
- (void)deleteSearchToolQueryTime;
- (void)deleteStringQueryEntityMatcherTime;
- (void)deleteStringQueryEntityTime;
- (void)deleteStringQueryLocationTime;
- (id)suppressMessageUnderConditions;

@end
