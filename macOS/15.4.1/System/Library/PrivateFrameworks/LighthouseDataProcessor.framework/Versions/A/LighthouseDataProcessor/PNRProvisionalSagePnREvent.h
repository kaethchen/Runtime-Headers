@class PNRProvisionalSagePnRMetadata, NSData, PNRProvisionalRequestGrainMetricsDimension, PNRProvisionalPlannerGrainMetricsDimension;

@interface PNRProvisionalSagePnREvent : SISchemaInstrumentationMessage

@property (retain, nonatomic) PNRProvisionalSagePnRMetadata *sagePnRMetadata;
@property (nonatomic) BOOL hasSagePnRMetadata;
@property (retain, nonatomic) PNRProvisionalRequestGrainMetricsDimension *requestGrainMetricsDimension;
@property (nonatomic) BOOL hasRequestGrainMetricsDimension;
@property (retain, nonatomic) PNRProvisionalPlannerGrainMetricsDimension *plannerGrainMetricsDimension;
@property (nonatomic) BOOL hasPlannerGrainMetricsDimension;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePlannerGrainMetricsDimension;
- (void)deleteRequestGrainMetricsDimension;
- (void)deleteSagePnRMetadata;

@end
