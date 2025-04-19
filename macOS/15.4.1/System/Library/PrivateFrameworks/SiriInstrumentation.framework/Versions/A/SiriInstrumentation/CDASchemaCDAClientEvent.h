@class CDASchemaCDADeviceStateContext, CDASchemaCDADeviceAdvertisingStartContext, SISchemaInstrumentationMessage, CDASchemaCDAClientEventMetadata, CDASchemaCDADeviceAdvertisingEndContext, CDASchemaCDAElectionTimerEnded, CDASchemaCDAUserFeedbackCompleted, CDASchemaCDAUserFeedbackParticipantCollectionReported, NSData, CDASchemaCDADebugElectionDecisionMade, CDASchemaCDAElectionDecisionMade;

@interface CDASchemaCDAClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) CDASchemaCDAClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) CDASchemaCDAElectionDecisionMade *electionDecisionMade;
@property (nonatomic) BOOL hasElectionDecisionMade;
@property (retain, nonatomic) CDASchemaCDADebugElectionDecisionMade *debugElectionDecisionMade;
@property (nonatomic) BOOL hasDebugElectionDecisionMade;
@property (retain, nonatomic) CDASchemaCDADeviceStateContext *deviceElectionStateContext;
@property (nonatomic) BOOL hasDeviceElectionStateContext;
@property (retain, nonatomic) CDASchemaCDADeviceAdvertisingStartContext *cdaAdvertisingStartChanged;
@property (nonatomic) BOOL hasCdaAdvertisingStartChanged;
@property (retain, nonatomic) CDASchemaCDADeviceAdvertisingEndContext *cdaAdvertisingEndChanged;
@property (nonatomic) BOOL hasCdaAdvertisingEndChanged;
@property (retain, nonatomic) CDASchemaCDAElectionTimerEnded *electionTimerEnded;
@property (nonatomic) BOOL hasElectionTimerEnded;
@property (retain, nonatomic) CDASchemaCDAUserFeedbackCompleted *userFeedbackCompleted;
@property (nonatomic) BOOL hasUserFeedbackCompleted;
@property (retain, nonatomic) CDASchemaCDAUserFeedbackParticipantCollectionReported *userFeedbackParticipantCollectionReported;
@property (nonatomic) BOOL hasUserFeedbackParticipantCollectionReported;
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
- (void)deleteDebugElectionDecisionMade;
- (int)clockIsolationLevel;
- (void)deleteCdaAdvertisingEndChanged;
- (void)deleteCdaAdvertisingStartChanged;
- (void)deleteDeviceElectionStateContext;
- (void)deleteElectionDecisionMade;
- (void)deleteElectionTimerEnded;
- (void)deleteEventMetadata;
- (void)deleteUserFeedbackCompleted;
- (void)deleteUserFeedbackParticipantCollectionReported;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
