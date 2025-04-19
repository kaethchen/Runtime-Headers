@class RGSiriSchemaRGCatalogContext, RGSiriSchemaRGHallucinationDetectionContext, SISchemaInstrumentationMessage, RGSiriSchemaRGRequestEndedTier1, RGSiriSchemaRGOverrideContext, RGSiriSchemaRGValidationContext, RGSiriSchemaRGGMSCallContext, RGSiriSchemaRGClientEventMetadata, RGSiriSchemaRGRequestContext, RGSiriSchemaRGCacheManagerCallContext, NSData, RGSiriSchemaRGInferenceContext;

@interface RGSiriSchemaRGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) RGSiriSchemaRGClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) RGSiriSchemaRGRequestContext *requestContext;
@property (nonatomic) BOOL hasRequestContext;
@property (retain, nonatomic) RGSiriSchemaRGRequestEndedTier1 *requestEndedTier1;
@property (nonatomic) BOOL hasRequestEndedTier1;
@property (retain, nonatomic) RGSiriSchemaRGOverrideContext *overrideContext;
@property (nonatomic) BOOL hasOverrideContext;
@property (retain, nonatomic) RGSiriSchemaRGValidationContext *validationContext;
@property (nonatomic) BOOL hasValidationContext;
@property (retain, nonatomic) RGSiriSchemaRGCatalogContext *catalogContext;
@property (nonatomic) BOOL hasCatalogContext;
@property (retain, nonatomic) RGSiriSchemaRGInferenceContext *inferenceContext;
@property (nonatomic) BOOL hasInferenceContext;
@property (retain, nonatomic) RGSiriSchemaRGHallucinationDetectionContext *hallucinationDetectionContext;
@property (nonatomic) BOOL hasHallucinationDetectionContext;
@property (retain, nonatomic) RGSiriSchemaRGGMSCallContext *RGGMSCallContext;
@property (nonatomic) BOOL hasRGGMSCallContext;
@property (retain, nonatomic) RGSiriSchemaRGCacheManagerCallContext *RGCacheManagerCallContext;
@property (nonatomic) BOOL hasRGCacheManagerCallContext;
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
- (void)deleteRGCacheManagerCallContext;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCatalogContext;
- (void)deleteEventMetadata;
- (void)deleteHallucinationDetectionContext;
- (void)deleteInferenceContext;
- (void)deleteOverrideContext;
- (void)deleteRGGMSCallContext;
- (void)deleteRequestContext;
- (void)deleteRequestEndedTier1;
- (void)deleteValidationContext;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
