@class NSData, PSESchemaPSEMessageSignalGenerated, SISchemaInstrumentationMessage, PSESchemaPSEGenericSignalGenerated, PSESchemaPSEMapsSignalGenerated, PSESchemaPSEHomeFollowupSignalGenerated, PSESchemaPSEMediaSignalGenerated, PSESchemaPSEClientEventMetadata, PSESchemaPSECallSignalGenerated, PSESchemaPSEAlarmSignalGenerated, PSESchemaPSEAppIntentSignalGenerated;

@interface PSESchemaPSEClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) PSESchemaPSEClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) PSESchemaPSEGenericSignalGenerated *genericSignalGenerated;
@property (nonatomic) BOOL hasGenericSignalGenerated;
@property (retain, nonatomic) PSESchemaPSECallSignalGenerated *callSignalGenerated;
@property (nonatomic) BOOL hasCallSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEMessageSignalGenerated *messageSignalGenerated;
@property (nonatomic) BOOL hasMessageSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEMediaSignalGenerated *mediaSignalGenerated;
@property (nonatomic) BOOL hasMediaSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEHomeFollowupSignalGenerated *homeFollowupSignalGenerated;
@property (nonatomic) BOOL hasHomeFollowupSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEMapsSignalGenerated *mapsSignalGenerated;
@property (nonatomic) BOOL hasMapsSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEAlarmSignalGenerated *alarmSignalGenerated;
@property (nonatomic) BOOL hasAlarmSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEAppIntentSignalGenerated *appIntentSignalGenerated;
@property (nonatomic) BOOL hasAppIntentSignalGenerated;
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
- (int)clockIsolationLevel;
- (void)deleteAlarmSignalGenerated;
- (void)deleteAppIntentSignalGenerated;
- (void)deleteCallSignalGenerated;
- (void)deleteEventMetadata;
- (void)deleteGenericSignalGenerated;
- (void)deleteHomeFollowupSignalGenerated;
- (void)deleteMapsSignalGenerated;
- (void)deleteMediaSignalGenerated;
- (void)deleteMessageSignalGenerated;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
