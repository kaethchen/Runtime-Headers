@class SISchemaInstrumentationMessage, HOMESchemaHOMEAssistantInfoReported, NSData, HOMESchemaHOMEClientEventMetadata, HOMESchemaHOMEAssistantDeviceBirthday;

@interface HOMESchemaHOMEClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) HOMESchemaHOMEClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) HOMESchemaHOMEAssistantInfoReported *assistantInfoReported;
@property (nonatomic) BOOL hasAssistantInfoReported;
@property (retain, nonatomic) HOMESchemaHOMEAssistantDeviceBirthday *assistantDeviceBirthday;
@property (nonatomic) BOOL hasAssistantDeviceBirthday;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

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
- (void)deleteAssistantDeviceBirthday;
- (void)deleteAssistantInfoReported;
- (void)deleteEventMetadata;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
