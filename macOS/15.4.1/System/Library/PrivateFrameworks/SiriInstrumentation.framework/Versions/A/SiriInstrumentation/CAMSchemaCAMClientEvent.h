@class SISchemaInstrumentationMessage, CAMSchemaCAMResponseGenerated, CAMSchemaCAMClientEventMetadata, NSData, CAMSchemaCAMAutoSendFeaturesGenerated, CAMSchemaCAMModelExecuted, CAMSchemaCAMRequestReceived;

@interface CAMSchemaCAMClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) CAMSchemaCAMClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) CAMSchemaCAMRequestReceived *requestReceived;
@property (nonatomic) BOOL hasRequestReceived;
@property (retain, nonatomic) CAMSchemaCAMModelExecuted *modelExecuted;
@property (nonatomic) BOOL hasModelExecuted;
@property (retain, nonatomic) CAMSchemaCAMResponseGenerated *responseGenerated;
@property (nonatomic) BOOL hasResponseGenerated;
@property (retain, nonatomic) CAMSchemaCAMAutoSendFeaturesGenerated *autoSendFeaturesGenerated;
@property (nonatomic) BOOL hasAutoSendFeaturesGenerated;
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
- (void)deleteAutoSendFeaturesGenerated;
- (void)deleteEventMetadata;
- (void)deleteModelExecuted;
- (void)deleteRequestReceived;
- (void)deleteResponseGenerated;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
