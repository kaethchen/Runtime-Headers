@class PNRODSchemaPNRODMetricDuration, NSData, SISchemaUUID, PNRODSchemaPNRODPQAMetrics, PNRODSchemaPNRODFailureInfo;

@interface PNRODSchemaPNRODIntelligenceFlowExecutorComponentSummary : SISchemaInstrumentationMessage {
    struct { unsigned char isAppForeground : 1; unsigned char appState : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *actionId;
@property (nonatomic) BOOL hasActionId;
@property (retain, nonatomic) SISchemaUUID *planId;
@property (nonatomic) BOOL hasPlanId;
@property (retain, nonatomic) SISchemaUUID *clientRequestId;
@property (nonatomic) BOOL hasClientRequestId;
@property (retain, nonatomic) SISchemaUUID *rawQueryEventId;
@property (nonatomic) BOOL hasRawQueryEventId;
@property (retain, nonatomic) SISchemaUUID *executorId;
@property (nonatomic) BOOL hasExecutorId;
@property (nonatomic) BOOL isAppForeground;
@property (nonatomic) BOOL hasIsAppForeground;
@property (nonatomic) long long appState;
@property (nonatomic) BOOL hasAppState;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *executionTime;
@property (nonatomic) BOOL hasExecutionTime;
@property (retain, nonatomic) PNRODSchemaPNRODPQAMetrics *pqaMetrics;
@property (nonatomic) BOOL hasPqaMetrics;
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
- (void)deleteActionId;
- (void)deleteAppState;
- (void)deleteClientRequestId;
- (void)deleteExecutionTime;
- (void)deleteExecutorId;
- (void)deleteFailureInfo;
- (void)deleteIsAppForeground;
- (void)deletePlanId;
- (void)deletePqaMetrics;
- (void)deleteRawQueryEventId;
- (id)suppressMessageUnderConditions;

@end
