@class MTSchemaMTASRStateUpdated, NSData, MTSchemaMTFrameworkRequestResponseReceived, SISchemaInstrumentationMessage, MTSchemaMTLocalePairResolved, MTSchemaMTAppNextButtonTappedTier1, MTSchemaMTAppTimedOutTier1, MTSchemaMTInvocationContext, MTSchemaMTLanguageDisambiguationUIShown, MTSchemaMTLanguageIdentificationCompleted, MTSchemaMTLanguageDisambiguationUISelected, MTSchemaMTTranslationTTSPlayed, MTSchemaMTBatchRequestContext, MTSchemaMTClientEventMetadata, MTSchemaMTAppBackgroundedTier1, MTSchemaMTAppTextBoxDismissedTier1, MTSchemaMTInvocationStartedTier1, MTSchemaMTFrameworkRequestSent;

@interface MTSchemaMTClientEventV2 : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) MTSchemaMTClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) MTSchemaMTBatchRequestContext *batchRequestContext;
@property (nonatomic) BOOL hasBatchRequestContext;
@property (retain, nonatomic) MTSchemaMTInvocationContext *invocationContext;
@property (nonatomic) BOOL hasInvocationContext;
@property (retain, nonatomic) MTSchemaMTASRStateUpdated *asrStateUpdated;
@property (nonatomic) BOOL hasAsrStateUpdated;
@property (retain, nonatomic) MTSchemaMTLocalePairResolved *localePairResolved;
@property (nonatomic) BOOL hasLocalePairResolved;
@property (retain, nonatomic) MTSchemaMTInvocationStartedTier1 *invocationStartedTier1;
@property (nonatomic) BOOL hasInvocationStartedTier1;
@property (retain, nonatomic) MTSchemaMTAppNextButtonTappedTier1 *appNextButtonTapped;
@property (nonatomic) BOOL hasAppNextButtonTapped;
@property (retain, nonatomic) MTSchemaMTAppTextBoxDismissedTier1 *appTextBoxDismissed;
@property (nonatomic) BOOL hasAppTextBoxDismissed;
@property (retain, nonatomic) MTSchemaMTAppTimedOutTier1 *appTimedOut;
@property (nonatomic) BOOL hasAppTimedOut;
@property (retain, nonatomic) MTSchemaMTFrameworkRequestSent *frameworkRequestSent;
@property (nonatomic) BOOL hasFrameworkRequestSent;
@property (retain, nonatomic) MTSchemaMTFrameworkRequestResponseReceived *frameworkRequestResponseReceived;
@property (nonatomic) BOOL hasFrameworkRequestResponseReceived;
@property (retain, nonatomic) MTSchemaMTAppBackgroundedTier1 *appBackgrounded;
@property (nonatomic) BOOL hasAppBackgrounded;
@property (retain, nonatomic) MTSchemaMTLanguageIdentificationCompleted *languageIdentificationCompleted;
@property (nonatomic) BOOL hasLanguageIdentificationCompleted;
@property (retain, nonatomic) MTSchemaMTLanguageDisambiguationUIShown *languageDisambiguationUIShown;
@property (nonatomic) BOOL hasLanguageDisambiguationUIShown;
@property (retain, nonatomic) MTSchemaMTLanguageDisambiguationUISelected *languageDisambiguationUISelected;
@property (nonatomic) BOOL hasLanguageDisambiguationUISelected;
@property (retain, nonatomic) MTSchemaMTTranslationTTSPlayed *translationTTSPlayed;
@property (nonatomic) BOOL hasTranslationTTSPlayed;
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
- (void)deleteAppBackgrounded;
- (void)deleteAppNextButtonTapped;
- (void)deleteAppTextBoxDismissed;
- (void)deleteAppTimedOut;
- (void)deleteAsrStateUpdated;
- (void)deleteBatchRequestContext;
- (void)deleteEventMetadata;
- (void)deleteFrameworkRequestResponseReceived;
- (void)deleteFrameworkRequestSent;
- (void)deleteInvocationContext;
- (void)deleteInvocationStartedTier1;
- (void)deleteLanguageDisambiguationUISelected;
- (void)deleteLanguageDisambiguationUIShown;
- (void)deleteLanguageIdentificationCompleted;
- (void)deleteLocalePairResolved;
- (void)deleteTranslationTTSPlayed;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
