@class PGSchemaPGModelInferenceContext, PGSchemaPGOverridesRequestContext, SISchemaInstrumentationMessage, PGSchemaPGRequestContext, NSData, PGSchemaPGClientEventMetadata, PGSchemaPGGeneratePlanContext, PGSchemaPGPrescribedPlanRequestContext, PGSchemaPGPromptResponseTier1, PGSchemaPGPromptTier1;

@interface PGSchemaPGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) PGSchemaPGClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) PGSchemaPGRequestContext *pgRequestContext;
@property (nonatomic) BOOL hasPgRequestContext;
@property (retain, nonatomic) PGSchemaPGPromptTier1 *pgPromptTier1;
@property (nonatomic) BOOL hasPgPromptTier1;
@property (retain, nonatomic) PGSchemaPGPromptResponseTier1 *pgPromptResponseTier1;
@property (nonatomic) BOOL hasPgPromptResponseTier1;
@property (retain, nonatomic) PGSchemaPGModelInferenceContext *pgModelInferenceContext;
@property (nonatomic) BOOL hasPgModelInferenceContext;
@property (retain, nonatomic) PGSchemaPGOverridesRequestContext *pgOverridesRequestContext;
@property (nonatomic) BOOL hasPgOverridesRequestContext;
@property (retain, nonatomic) PGSchemaPGPrescribedPlanRequestContext *pgPrescribedPlanRequestContext;
@property (nonatomic) BOOL hasPgPrescribedPlanRequestContext;
@property (retain, nonatomic) PGSchemaPGGeneratePlanContext *pgGeneratePlanContext;
@property (nonatomic) BOOL hasPgGeneratePlanContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePgOverridesRequestContext;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEventMetadata;
- (void)deletePgGeneratePlanContext;
- (void)deletePgModelInferenceContext;
- (void)deletePgPrescribedPlanRequestContext;
- (void)deletePgPromptResponseTier1;
- (void)deletePgPromptTier1;
- (void)deletePgRequestContext;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
