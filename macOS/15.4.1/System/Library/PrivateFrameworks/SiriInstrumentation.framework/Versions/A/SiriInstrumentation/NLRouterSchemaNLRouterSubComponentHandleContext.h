@class NLRouterSchemaNLRouterSubComponentHandleFailed, NSData, SISchemaUUID, NLRouterSchemaNLRouterSubComponentHandleStarted, NLRouterSchemaNLRouterSubComponentHandleEnded;

@interface NLRouterSchemaNLRouterSubComponentHandleContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) NLRouterSchemaNLRouterSubComponentHandleStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) NLRouterSchemaNLRouterSubComponentHandleEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) NLRouterSchemaNLRouterSubComponentHandleFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) SISchemaUUID *traceId;
@property (nonatomic) BOOL hasTraceId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (void)deleteTraceId;
- (id)suppressMessageUnderConditions;

@end
