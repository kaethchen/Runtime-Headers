@class NSString, PNRODSchemaPNRODMetricDuration, NSData, SISchemaUUID, PNRODSchemaPNRODFailureInfo;

@interface PNRODSchemaPNRODPlanGeneration : SISchemaInstrumentationMessage {
    struct { unsigned char pgModelInterface : 1; unsigned char pgOverridesMatched : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *planCycleId;
@property (nonatomic) BOOL hasPlanCycleId;
@property (nonatomic) int pgModelInterface;
@property (nonatomic) BOOL hasPgModelInterface;
@property (copy, nonatomic) NSString *pgModelIdentifier;
@property (nonatomic) BOOL hasPgModelIdentifier;
@property (copy, nonatomic) NSString *pgOverridesAssetVersion;
@property (nonatomic) BOOL hasPgOverridesAssetVersion;
@property (nonatomic) BOOL pgOverridesMatched;
@property (nonatomic) BOOL hasPgOverridesMatched;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *pgPlanGenTotalTime;
@property (nonatomic) BOOL hasPgPlanGenTotalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *pgFullPlannerHandleTime;
@property (nonatomic) BOOL hasPgFullPlannerHandleTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *pgModelInferenceTime;
@property (nonatomic) BOOL hasPgModelInferenceTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *pgOverridesTime;
@property (nonatomic) BOOL hasPgOverridesTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *pgPrescribedPlanTime;
@property (nonatomic) BOOL hasPgPrescribedPlanTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *pgFullPlannerPreInferenceTime;
@property (nonatomic) BOOL hasPgFullPlannerPreInferenceTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *pgFullPlannerPostInferenceTime;
@property (nonatomic) BOOL hasPgFullPlannerPostInferenceTime;
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
- (void)deleteFailureInfo;
- (void)deletePgFullPlannerHandleTime;
- (void)deletePgFullPlannerPostInferenceTime;
- (void)deletePgFullPlannerPreInferenceTime;
- (void)deletePgModelIdentifier;
- (void)deletePgModelInferenceTime;
- (void)deletePgModelInterface;
- (void)deletePgOverridesAssetVersion;
- (void)deletePgOverridesMatched;
- (void)deletePgOverridesTime;
- (void)deletePgPlanGenTotalTime;
- (void)deletePgPrescribedPlanTime;
- (void)deletePlanCycleId;
- (id)suppressMessageUnderConditions;

@end
