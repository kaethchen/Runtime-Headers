@class NSData, SUGSchemaSUGRankingStepContext, SISchemaInstrumentationMessage, SUGSchemaSUGEngagementReported, SUGSchemaSUGSuggestionsUIActivityTier1, SUGSchemaSUGClientEventMetadata, SUGSchemaSUGSuggestionsUIActivity, SUGSchemaSUGRequestContext, SUGSchemaSUGResolutionStepContext, SUGSchemaSUGEngagementMetricReported, SUGSchemaSUGGenerationStepContext, SUGSchemaSUGFilteringStepContext, SUGSchemaSUGTypingWindowEnded, SUGSchemaSUGSuggestionsGeneratedTier1, SUGSchemaSUGSuggestionsGenerated;

@interface SUGSchemaSUGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SUGSchemaSUGClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SUGSchemaSUGSuggestionsGenerated *suggestionsGenerated;
@property (nonatomic) BOOL hasSuggestionsGenerated;
@property (retain, nonatomic) SUGSchemaSUGEngagementReported *engagementReported;
@property (nonatomic) BOOL hasEngagementReported;
@property (retain, nonatomic) SUGSchemaSUGRequestContext *requestContext;
@property (nonatomic) BOOL hasRequestContext;
@property (retain, nonatomic) SUGSchemaSUGGenerationStepContext *generationStepContext;
@property (nonatomic) BOOL hasGenerationStepContext;
@property (retain, nonatomic) SUGSchemaSUGResolutionStepContext *resolutionStepContext;
@property (nonatomic) BOOL hasResolutionStepContext;
@property (retain, nonatomic) SUGSchemaSUGFilteringStepContext *filteringStepContext;
@property (nonatomic) BOOL hasFilteringStepContext;
@property (retain, nonatomic) SUGSchemaSUGRankingStepContext *rankingStepContext;
@property (nonatomic) BOOL hasRankingStepContext;
@property (retain, nonatomic) SUGSchemaSUGEngagementMetricReported *engagementMetricReported;
@property (nonatomic) BOOL hasEngagementMetricReported;
@property (retain, nonatomic) SUGSchemaSUGSuggestionsUIActivity *uiActivity;
@property (nonatomic) BOOL hasUiActivity;
@property (retain, nonatomic) SUGSchemaSUGTypingWindowEnded *typingWindowEnded;
@property (nonatomic) BOOL hasTypingWindowEnded;
@property (retain, nonatomic) SUGSchemaSUGSuggestionsGeneratedTier1 *sugGeneratedTier1;
@property (nonatomic) BOOL hasSugGeneratedTier1;
@property (retain, nonatomic) SUGSchemaSUGSuggestionsUIActivityTier1 *uiActivityTier1;
@property (nonatomic) BOOL hasUiActivityTier1;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)clockIsolationLevel;
- (void)deleteEngagementMetricReported;
- (void)deleteEngagementReported;
- (void)deleteEventMetadata;
- (void)deleteFilteringStepContext;
- (void)deleteGenerationStepContext;
- (void)deleteRankingStepContext;
- (void)deleteRequestContext;
- (void)deleteResolutionStepContext;
- (void)deleteSugGeneratedTier1;
- (void)deleteSuggestionsGenerated;
- (void)deleteTypingWindowEnded;
- (void)deleteUiActivity;
- (void)deleteUiActivityTier1;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
