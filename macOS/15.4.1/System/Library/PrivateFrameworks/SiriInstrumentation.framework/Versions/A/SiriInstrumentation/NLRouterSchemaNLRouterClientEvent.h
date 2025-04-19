@class NLRouterSchemaNLRouterPromptGenerationSignalsCaptured, NLRouterSchemaNLRouterSubComponentSetupContext, SISchemaInstrumentationMessage, NLRouterSchemaNLRouterSubComponentTriggeredHeuristicRuleTier1, NLRouterSchemaNLRouterHandleContext, NLRouterSchemaNLRouterSubComponentHandleContext, NLRouterSchemaNLRouterPromptGenerated, NSData, NLRouterSchemaNLRouterClientEventMetadata, NLRouterSchemaNLRouterBridgeHandleContext;

@interface NLRouterSchemaNLRouterClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) NLRouterSchemaNLRouterClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) NLRouterSchemaNLRouterHandleContext *nlRouterHandleContext;
@property (nonatomic) BOOL hasNlRouterHandleContext;
@property (retain, nonatomic) NLRouterSchemaNLRouterBridgeHandleContext *nlRouterBridgeHandleContext;
@property (nonatomic) BOOL hasNlRouterBridgeHandleContext;
@property (retain, nonatomic) NLRouterSchemaNLRouterSubComponentHandleContext *nlRouterSubComponentHandleContext;
@property (nonatomic) BOOL hasNlRouterSubComponentHandleContext;
@property (retain, nonatomic) NLRouterSchemaNLRouterSubComponentSetupContext *nlRouterSubComponentSetupContext;
@property (nonatomic) BOOL hasNlRouterSubComponentSetupContext;
@property (retain, nonatomic) NLRouterSchemaNLRouterSubComponentTriggeredHeuristicRuleTier1 *nlRouterSubComponentTriggeredHeuristicRuleTier1;
@property (nonatomic) BOOL hasNlRouterSubComponentTriggeredHeuristicRuleTier1;
@property (retain, nonatomic) NLRouterSchemaNLRouterPromptGenerationSignalsCaptured *nlRouterPromptGenerationSignalsCaptured;
@property (nonatomic) BOOL hasNlRouterPromptGenerationSignalsCaptured;
@property (retain, nonatomic) NLRouterSchemaNLRouterPromptGenerated *nlRouterPromptGenerated;
@property (nonatomic) BOOL hasNlRouterPromptGenerated;
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
- (void)deleteNlRouterBridgeHandleContext;
- (void)deleteNlRouterHandleContext;
- (void)deleteNlRouterPromptGenerated;
- (void)deleteNlRouterPromptGenerationSignalsCaptured;
- (void)deleteNlRouterSubComponentHandleContext;
- (void)deleteNlRouterSubComponentSetupContext;
- (void)deleteNlRouterSubComponentTriggeredHeuristicRuleTier1;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
