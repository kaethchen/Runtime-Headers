@class NSData, SISchemaInstrumentationMessage, PFAPreprocessorExecutionContext, PFAPreprocessorOrchestratorResultsStatsReported, PFAPreprocessorSessionStartStatsReported, PFAPreprocessorSessionEndStatsReported, PFARepackagingExecution, PFAPFAEventMetadata, PFAIngestionExtensionStreamStatistics;

@interface PFAPFAClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) PFAPFAEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) PFARepackagingExecution *repackagingExecution;
@property (nonatomic) BOOL hasRepackagingExecution;
@property (retain, nonatomic) PFAPreprocessorExecutionContext *preprocessorExecutionContext;
@property (nonatomic) BOOL hasPreprocessorExecutionContext;
@property (retain, nonatomic) PFAPreprocessorSessionStartStatsReported *preprocessorSessionStartStatsReported;
@property (nonatomic) BOOL hasPreprocessorSessionStartStatsReported;
@property (retain, nonatomic) PFAPreprocessorSessionEndStatsReported *preprocessorSessionEndStatsReported;
@property (nonatomic) BOOL hasPreprocessorSessionEndStatsReported;
@property (retain, nonatomic) PFAPreprocessorOrchestratorResultsStatsReported *orchestratorResultsStatsReported;
@property (nonatomic) BOOL hasOrchestratorResultsStatsReported;
@property (retain, nonatomic) PFAIngestionExtensionStreamStatistics *ingestionExtensionStreamStatistics;
@property (nonatomic) BOOL hasIngestionExtensionStreamStatistics;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

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
- (void)deleteEventMetadata;
- (void)deleteIngestionExtensionStreamStatistics;
- (void)deleteOrchestratorResultsStatsReported;
- (void)deletePreprocessorExecutionContext;
- (void)deletePreprocessorSessionEndStatsReported;
- (void)deletePreprocessorSessionStartStatsReported;
- (void)deleteRepackagingExecution;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
