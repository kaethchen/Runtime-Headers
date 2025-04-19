@class GATSchemaGATGenerativeRequestContext, GATSchemaGATRequestContext, SISchemaInstrumentationMessage, GATSchemaGATImageResizingContext, GATSchemaGATRegisterMediaContext, NSData, GATSchemaGATLoadScreenContentContext, GATSchemaGATClientEventMetadata, GATSchemaGATCreateSessionContext;

@interface GATSchemaGATClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) GATSchemaGATClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) GATSchemaGATRequestContext *requestContext;
@property (nonatomic) BOOL hasRequestContext;
@property (retain, nonatomic) GATSchemaGATLoadScreenContentContext *loadScreenContentContext;
@property (nonatomic) BOOL hasLoadScreenContentContext;
@property (retain, nonatomic) GATSchemaGATCreateSessionContext *createSessionContext;
@property (nonatomic) BOOL hasCreateSessionContext;
@property (retain, nonatomic) GATSchemaGATGenerativeRequestContext *generativeRequestContext;
@property (nonatomic) BOOL hasGenerativeRequestContext;
@property (retain, nonatomic) GATSchemaGATImageResizingContext *imageResizingContext;
@property (nonatomic) BOOL hasImageResizingContext;
@property (retain, nonatomic) GATSchemaGATRegisterMediaContext *registerMediaContext;
@property (nonatomic) BOOL hasRegisterMediaContext;
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
- (void)deleteCreateSessionContext;
- (void)deleteEventMetadata;
- (void)deleteGenerativeRequestContext;
- (void)deleteImageResizingContext;
- (void)deleteLoadScreenContentContext;
- (void)deleteRegisterMediaContext;
- (void)deleteRequestContext;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
