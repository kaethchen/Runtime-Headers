@class NSData, SISchemaInstrumentationMessage, HALSchemaHALForceFetchContext, HALSchemaHALClientEventMetadata, HALSchemaHALCompanionDeviceDiscoveryContext, HALSchemaHALCompanionDeviceCommunicationContext, HALSchemaHALCrossDeviceCommandExecutionContext, HALSchemaHALLocalFetchContext, HALSchemaHALContextCollectorFetchContext, HALSchemaHALNearbyPersonalDevicesReported;

@interface HALSchemaHALClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) HALSchemaHALClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) HALSchemaHALCrossDeviceCommandExecutionContext *crossDeviceCommandContext;
@property (nonatomic) BOOL hasCrossDeviceCommandContext;
@property (retain, nonatomic) HALSchemaHALLocalFetchContext *localFetchContext;
@property (nonatomic) BOOL hasLocalFetchContext;
@property (retain, nonatomic) HALSchemaHALContextCollectorFetchContext *contextCollectorFetchContext;
@property (nonatomic) BOOL hasContextCollectorFetchContext;
@property (retain, nonatomic) HALSchemaHALForceFetchContext *forceFetchContext;
@property (nonatomic) BOOL hasForceFetchContext;
@property (retain, nonatomic) HALSchemaHALCompanionDeviceDiscoveryContext *companionDeviceDiscoveryContext;
@property (nonatomic) BOOL hasCompanionDeviceDiscoveryContext;
@property (retain, nonatomic) HALSchemaHALCompanionDeviceCommunicationContext *companionDeviceCommunicationContext;
@property (nonatomic) BOOL hasCompanionDeviceCommunicationContext;
@property (retain, nonatomic) HALSchemaHALNearbyPersonalDevicesReported *nearbyPersonalDevicesReported;
@property (nonatomic) BOOL hasNearbyPersonalDevicesReported;
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
- (void)deleteCrossDeviceCommandContext;
- (void)deleteCompanionDeviceCommunicationContext;
- (void)deleteCompanionDeviceDiscoveryContext;
- (void)deleteContextCollectorFetchContext;
- (void)deleteEventMetadata;
- (void)deleteForceFetchContext;
- (void)deleteLocalFetchContext;
- (void)deleteNearbyPersonalDevicesReported;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
