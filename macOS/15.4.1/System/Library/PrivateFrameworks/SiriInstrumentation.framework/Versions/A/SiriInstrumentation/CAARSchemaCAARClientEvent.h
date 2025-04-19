@class CAARSchemaCAARRequestContext, SISchemaInstrumentationMessage, CAARSchemaCAARClientEventMetadata, CAARSchemaCAARFeaturesGenerated, CAARSchemaCAARModelExecuted, CAARSchemaCAARTieBreakersExecuted, NSData;

@interface CAARSchemaCAARClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) CAARSchemaCAARClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) CAARSchemaCAARRequestContext *caarRequestContext;
@property (nonatomic) BOOL hasCaarRequestContext;
@property (retain, nonatomic) CAARSchemaCAARFeaturesGenerated *featuresGenerated;
@property (nonatomic) BOOL hasFeaturesGenerated;
@property (retain, nonatomic) CAARSchemaCAARModelExecuted *modelExecuted;
@property (nonatomic) BOOL hasModelExecuted;
@property (retain, nonatomic) CAARSchemaCAARTieBreakersExecuted *tieBreakersExecuted;
@property (nonatomic) BOOL hasTieBreakersExecuted;
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
- (void)deleteCaarRequestContext;
- (void)deleteEventMetadata;
- (void)deleteFeaturesGenerated;
- (void)deleteModelExecuted;
- (void)deleteTieBreakersExecuted;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
