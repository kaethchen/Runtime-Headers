@class NSArray, PNRProvisionalSageFailureInfo, NSData, PNRProvisionalMetrics;

@interface PNRProvisionalRequestGrainMetricsDimension : SISchemaInstrumentationMessage {
    struct { unsigned char numQueries : 1; unsigned char numPlansCreated : 1; unsigned char numQueryPlansCreated : 1; unsigned char numResponsePlansCreated : 1; unsigned char numActionsCreated : 1; unsigned char numActionsExecuted : 1; unsigned char numActionResponseGenerated : 1; } _has;
}

@property (nonatomic) int numQueries;
@property (nonatomic) BOOL hasNumQueries;
@property (nonatomic) int numPlansCreated;
@property (nonatomic) BOOL hasNumPlansCreated;
@property (nonatomic) int numQueryPlansCreated;
@property (nonatomic) BOOL hasNumQueryPlansCreated;
@property (nonatomic) int numResponsePlansCreated;
@property (nonatomic) BOOL hasNumResponsePlansCreated;
@property (nonatomic) int numActionsCreated;
@property (nonatomic) BOOL hasNumActionsCreated;
@property (nonatomic) int numActionsExecuted;
@property (nonatomic) BOOL hasNumActionsExecuted;
@property (nonatomic) int numActionResponseGenerated;
@property (nonatomic) BOOL hasNumActionResponseGenerated;
@property (retain, nonatomic) PNRProvisionalMetrics *fullQueryResponseTime;
@property (nonatomic) BOOL hasFullQueryResponseTime;
@property (retain, nonatomic) PNRProvisionalMetrics *planningTime;
@property (nonatomic) BOOL hasPlanningTime;
@property (retain, nonatomic) PNRProvisionalMetrics *executionTime;
@property (nonatomic) BOOL hasExecutionTime;
@property (retain, nonatomic) PNRProvisionalMetrics *responsePreparationTime;
@property (nonatomic) BOOL hasResponsePreparationTime;
@property (copy, nonatomic) NSArray *toolIds;
@property (copy, nonatomic) NSArray *bundleIds;
@property (retain, nonatomic) PNRProvisionalSageFailureInfo *failureInfo;
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
- (void)addBundleId:(id)a0;
- (void)addToolId:(id)a0;
- (id)bundleIdAtIndex:(unsigned long long)a0;
- (unsigned long long)bundleIdCount;
- (void)clearBundleId;
- (void)clearToolId;
- (void)deleteBundleId;
- (void)deleteExecutionTime;
- (void)deleteFailureInfo;
- (void)deleteNumActionsCreated;
- (void)deleteNumPlansCreated;
- (void)deletePlanningTime;
- (void)deleteResponsePreparationTime;
- (void)deleteToolId;
- (id)toolIdAtIndex:(unsigned long long)a0;
- (unsigned long long)toolIdCount;
- (void)deleteFullQueryResponseTime;
- (void)deleteNumActionResponseGenerated;
- (void)deleteNumActionsExecuted;
- (void)deleteNumQueries;
- (void)deleteNumQueryPlansCreated;
- (void)deleteNumResponsePlansCreated;

@end
