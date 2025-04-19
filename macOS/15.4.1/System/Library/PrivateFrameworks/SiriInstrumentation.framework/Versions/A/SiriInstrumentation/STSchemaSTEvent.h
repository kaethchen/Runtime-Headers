@class NSData, STSchemaSTHallucinationDetectionContext, SISchemaInstrumentationMessage, STSchemaSTClientEventMetadata, STSchemaSTDisambiguationContext, STSchemaSTLLMQueryUnderstandingContext, STSchemaSTAnswerSynthesisContext, STSchemaSTSpotlightContext, STSchemaSTGeneralSearchContext, STSchemaSTGlobalSearchContext, STSchemaSTGeneralSearchEndedTier1, STSchemaSTLLMQUQueryArgumentsTier1;

@interface STSchemaSTEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) STSchemaSTClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) STSchemaSTGeneralSearchContext *stGeneralSearchContext;
@property (nonatomic) BOOL hasStGeneralSearchContext;
@property (retain, nonatomic) STSchemaSTLLMQueryUnderstandingContext *stLLMQueryUnderstandingContext;
@property (nonatomic) BOOL hasStLLMQueryUnderstandingContext;
@property (retain, nonatomic) STSchemaSTSpotlightContext *stSpotlightContext;
@property (nonatomic) BOOL hasStSpotlightContext;
@property (retain, nonatomic) STSchemaSTAnswerSynthesisContext *stAnswerSynthesisContext;
@property (nonatomic) BOOL hasStAnswerSynthesisContext;
@property (retain, nonatomic) STSchemaSTGlobalSearchContext *stGlobalSearchContext;
@property (nonatomic) BOOL hasStGlobalSearchContext;
@property (retain, nonatomic) STSchemaSTLLMQUQueryArgumentsTier1 *stLLMQUQueryArgumentsTier1;
@property (nonatomic) BOOL hasStLLMQUQueryArgumentsTier1;
@property (retain, nonatomic) STSchemaSTDisambiguationContext *stDisambiguationContext;
@property (nonatomic) BOOL hasStDisambiguationContext;
@property (retain, nonatomic) STSchemaSTGeneralSearchEndedTier1 *requestEndedTier1;
@property (nonatomic) BOOL hasRequestEndedTier1;
@property (retain, nonatomic) STSchemaSTHallucinationDetectionContext *searchToolHallucinationDetectionContext;
@property (nonatomic) BOOL hasSearchToolHallucinationDetectionContext;
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
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEventMetadata;
- (void)deleteRequestEndedTier1;
- (void)deleteSearchToolHallucinationDetectionContext;
- (void)deleteStAnswerSynthesisContext;
- (void)deleteStDisambiguationContext;
- (void)deleteStGeneralSearchContext;
- (void)deleteStGlobalSearchContext;
- (void)deleteStLLMQUQueryArgumentsTier1;
- (void)deleteStLLMQueryUnderstandingContext;
- (void)deleteStSpotlightContext;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
