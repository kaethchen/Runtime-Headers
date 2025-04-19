@class ExecutorSiriSchemaExecutorStringQueryLocationCallContext, ExecutorSiriSchemaExecutorSearchToolQueryCallContext, SISchemaInstrumentationMessage, ExecutorSiriSchemaExecutorIdentifierQueryCallContext, ExecutorSiriSchemaExecutorPersonQueryCallContext, ExecutorSiriSchemaExecutorAppIntentCallContext, NSData, ExecutorSiriSchemaExecutorStringQueryEntityMatcherCallContext, ExecutorSiriSchemaExecutorStringQueryEntityCallContext, ExecutorSiriSchemaExecutorClientEventMetadata;

@interface ExecutorSiriSchemaExecutorClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorAppIntentCallContext *executorAppIntentCallContext;
@property (nonatomic) BOOL hasExecutorAppIntentCallContext;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorSearchToolQueryCallContext *executorSearchToolQueryCallContext;
@property (nonatomic) BOOL hasExecutorSearchToolQueryCallContext;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorPersonQueryCallContext *executorPersonQueryCallContext;
@property (nonatomic) BOOL hasExecutorPersonQueryCallContext;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorStringQueryLocationCallContext *executorStringQueryLocationCallContext;
@property (nonatomic) BOOL hasExecutorStringQueryLocationCallContext;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorStringQueryEntityMatcherCallContext *executorStringQueryEntityMatcherCallContext;
@property (nonatomic) BOOL hasExecutorStringQueryEntityMatcherCallContext;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorStringQueryEntityCallContext *executorStringQueryEntityCallContext;
@property (nonatomic) BOOL hasExecutorStringQueryEntityCallContext;
@property (retain, nonatomic) ExecutorSiriSchemaExecutorIdentifierQueryCallContext *executorIdentifierQueryCallContext;
@property (nonatomic) BOOL hasExecutorIdentifierQueryCallContext;
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
- (void)deleteExecutorAppIntentCallContext;
- (void)deleteExecutorIdentifierQueryCallContext;
- (void)deleteExecutorPersonQueryCallContext;
- (void)deleteExecutorSearchToolQueryCallContext;
- (void)deleteExecutorStringQueryEntityCallContext;
- (void)deleteExecutorStringQueryEntityMatcherCallContext;
- (void)deleteExecutorStringQueryLocationCallContext;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
