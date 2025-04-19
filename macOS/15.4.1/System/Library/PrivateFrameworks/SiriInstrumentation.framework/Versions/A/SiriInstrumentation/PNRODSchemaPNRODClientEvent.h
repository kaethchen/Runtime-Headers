@class PNRODSchemaPNRODIntelligenceFlowSessionSummary, PNRODSchemaPNRODClientEventMetadata, SISchemaInstrumentationMessage, PNRODSchemaPNRODIntelligenceFlowExecutorComponentSummary, PNRODSchemaPNRODScheduleDebugSummary, NSData, PNRODSchemaPNRODIntelligenceFlowRequestGrainSummary, PNRODSchemaPNRODIntelligenceFlowPlannerComponentSummary, PNRODSchemaPNRODIntelligenceFlowResponseGenerationComponentSummary, PNRODSchemaPNRODIntelligenceFlowPlannerGrainSummary, PNRODSchemaPNRODIntelligenceFlowActionGrainSummary, PNRODSchemaPNRODSiriTurnGrainSummary;

@interface PNRODSchemaPNRODClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) PNRODSchemaPNRODClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) PNRODSchemaPNRODSiriTurnGrainSummary *pnrodSiriTurnGrainSummary;
@property (nonatomic) BOOL hasPnrodSiriTurnGrainSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowRequestGrainSummary *pnrodIntelligenceFlowRequestGrainSummary;
@property (nonatomic) BOOL hasPnrodIntelligenceFlowRequestGrainSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowPlannerGrainSummary *pnrodIntelligenceFlowPlannerGrainSummary;
@property (nonatomic) BOOL hasPnrodIntelligenceFlowPlannerGrainSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowActionGrainSummary *pnrodIntelligenceFlowActionGrainSummary;
@property (nonatomic) BOOL hasPnrodIntelligenceFlowActionGrainSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowSessionSummary *pnrodIntelligenceFlowSessionSummary;
@property (nonatomic) BOOL hasPnrodIntelligenceFlowSessionSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowPlannerComponentSummary *pnrodPNRODIntelligenceFlowPlannerComponentSummary;
@property (nonatomic) BOOL hasPnrodPNRODIntelligenceFlowPlannerComponentSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowResponseGenerationComponentSummary *pnrodIntelligenceFlowResponseGenerationComponentSummary;
@property (nonatomic) BOOL hasPnrodIntelligenceFlowResponseGenerationComponentSummary;
@property (retain, nonatomic) PNRODSchemaPNRODIntelligenceFlowExecutorComponentSummary *pnronIntelligenceFlowExecutorComponentSummary;
@property (nonatomic) BOOL hasPnronIntelligenceFlowExecutorComponentSummary;
@property (retain, nonatomic) PNRODSchemaPNRODScheduleDebugSummary *pnronScheduleDebugSummary;
@property (nonatomic) BOOL hasPnronScheduleDebugSummary;
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
- (void)deletePnronScheduleDebugSummary;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePnrodSiriTurnGrainSummary;
- (int)clockIsolationLevel;
- (void)deleteEventMetadata;
- (void)deletePnrodIntelligenceFlowActionGrainSummary;
- (void)deletePnrodIntelligenceFlowPlannerGrainSummary;
- (void)deletePnrodIntelligenceFlowRequestGrainSummary;
- (void)deletePnrodIntelligenceFlowResponseGenerationComponentSummary;
- (void)deletePnrodIntelligenceFlowSessionSummary;
- (void)deletePnrodPNRODIntelligenceFlowPlannerComponentSummary;
- (void)deletePnronIntelligenceFlowExecutorComponentSummary;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
