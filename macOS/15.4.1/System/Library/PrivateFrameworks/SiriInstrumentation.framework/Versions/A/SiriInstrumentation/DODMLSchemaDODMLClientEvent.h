@class NSData, SISchemaInstrumentationMessage, DODMLSchemaDODMLClientEventMetadata, DODMLASRSchemaDODMLASRUserEditExperimentContext, DODMLASRSchemaDODMLASRAudioFileResultTier1, DODMLASRSchemaDODMLASRFullPayloadCorrectionExperimentContext, DODMLASRSchemaDODMLASRPersonalizationExperimentContext, DODMLASRSchemaDODMLASRFullPayloadCorrectionExperimentInfoTier1, DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1, DODMLASRSchemaDODMLASRFullPayloadCorrectionExperimentPostAnalysis, DODMLASRSchemaDODMLASRContextualReplayBiomeRecordCreated, DODMLASRSchemaDODMLASRContextualReplayBiomeRecordDeleted;

@interface DODMLSchemaDODMLClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) DODMLSchemaDODMLClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRPersonalizationExperimentContext *personalizationExperimentContext;
@property (nonatomic) BOOL hasPersonalizationExperimentContext;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentContext *userEditExperimentContext;
@property (nonatomic) BOOL hasUserEditExperimentContext;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1 *userEditExperimentEndedTier1;
@property (nonatomic) BOOL hasUserEditExperimentEndedTier1;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRAudioFileResultTier1 *audioFileResultTier1;
@property (nonatomic) BOOL hasAudioFileResultTier1;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRFullPayloadCorrectionExperimentContext *fullPayloadCorrectionExperimentContext;
@property (nonatomic) BOOL hasFullPayloadCorrectionExperimentContext;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRFullPayloadCorrectionExperimentInfoTier1 *fullPayloadCorrectionExperimentTier1;
@property (nonatomic) BOOL hasFullPayloadCorrectionExperimentTier1;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRFullPayloadCorrectionExperimentPostAnalysis *fullPayloadCorrectionExperimentPostAnalysis;
@property (nonatomic) BOOL hasFullPayloadCorrectionExperimentPostAnalysis;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRContextualReplayBiomeRecordCreated *contextualReplayBiomeRecordCreated;
@property (nonatomic) BOOL hasContextualReplayBiomeRecordCreated;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRContextualReplayBiomeRecordDeleted *contextualReplayBiomeRecordDeleted;
@property (nonatomic) BOOL hasContextualReplayBiomeRecordDeleted;
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
- (void)deleteUserEditExperimentContext;
- (void)deleteAudioFileResultTier1;
- (void)deleteContextualReplayBiomeRecordCreated;
- (void)deleteContextualReplayBiomeRecordDeleted;
- (void)deleteEventMetadata;
- (void)deleteFullPayloadCorrectionExperimentContext;
- (void)deleteFullPayloadCorrectionExperimentPostAnalysis;
- (void)deleteFullPayloadCorrectionExperimentTier1;
- (void)deletePersonalizationExperimentContext;
- (void)deleteUserEditExperimentEndedTier1;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
