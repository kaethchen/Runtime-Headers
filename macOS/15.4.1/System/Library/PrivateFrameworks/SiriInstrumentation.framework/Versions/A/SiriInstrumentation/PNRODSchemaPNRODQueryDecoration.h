@class PNRODSchemaPNRODMetricDuration, NSData, PNRODSchemaPNRODFailureInfo, SISchemaUUID;

@interface PNRODSchemaPNRODQueryDecoration : SISchemaInstrumentationMessage {
    struct { unsigned char queryDecorationSource : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *queryDecorationID;
@property (nonatomic) BOOL hasQueryDecorationID;
@property (nonatomic) int queryDecorationSource;
@property (nonatomic) BOOL hasQueryDecorationSource;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationHandleTime;
@property (nonatomic) BOOL hasQueryDecorationHandleTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationSpanRetrievalTime;
@property (nonatomic) BOOL hasQueryDecorationSpanRetrievalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationContextRetrievalTime;
@property (nonatomic) BOOL hasQueryDecorationContextRetrievalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationToolRetrievalTime;
@property (nonatomic) BOOL hasQueryDecorationToolRetrievalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationRankingTime;
@property (nonatomic) BOOL hasQueryDecorationRankingTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationOutputBuildingTime;
@property (nonatomic) BOOL hasQueryDecorationOutputBuildingTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationTupleBuildingTime;
@property (nonatomic) BOOL hasQueryDecorationTupleBuildingTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationTupleRankingTime;
@property (nonatomic) BOOL hasQueryDecorationTupleRankingTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationInputCollectionTime;
@property (nonatomic) BOOL hasQueryDecorationInputCollectionTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationToolRetrievalContextTime;
@property (nonatomic) BOOL hasQueryDecorationToolRetrievalContextTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationFetchDynamicEnumerationTime;
@property (nonatomic) BOOL hasQueryDecorationFetchDynamicEnumerationTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *queryDecorationFullPlannerBlockingTime;
@property (nonatomic) BOOL hasQueryDecorationFullPlannerBlockingTime;
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
- (void)deleteQueryDecorationHandleTime;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteFailureInfo;
- (void)deleteQueryDecorationContextRetrievalTime;
- (void)deleteQueryDecorationFetchDynamicEnumerationTime;
- (void)deleteQueryDecorationFullPlannerBlockingTime;
- (void)deleteQueryDecorationID;
- (void)deleteQueryDecorationInputCollectionTime;
- (void)deleteQueryDecorationOutputBuildingTime;
- (void)deleteQueryDecorationRankingTime;
- (void)deleteQueryDecorationSource;
- (void)deleteQueryDecorationSpanRetrievalTime;
- (void)deleteQueryDecorationToolRetrievalContextTime;
- (void)deleteQueryDecorationToolRetrievalTime;
- (void)deleteQueryDecorationTupleBuildingTime;
- (void)deleteQueryDecorationTupleRankingTime;
- (id)suppressMessageUnderConditions;

@end
