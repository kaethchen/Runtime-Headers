@class NETSchemaNETClientEventMetadata, NETSchemaNETPeerConnectionFailed, SISchemaInstrumentationMessage, NETSchemaNETDebugNetworkConnectionStateReadySnapshotCaptured, NSData, NETSchemaNETNetworkConnectionStatePreparationSnapshotCaptured, NETSchemaNETDebugSessionConnectionSnapshotCaptured, NETSchemaNETSessionConnectionFailed, NETSchemaNETSessionConnectionHttpHeaderCreated, NETSchemaNETDebugNetworkConnectionStatePreparationSnapshotCaptured, NETSchemaNETSessionConnectionSnapshotCaptured, NETSchemaNETNetworkConnectionStateReadySnapshotCaptured;

@interface NETSchemaNETClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) NETSchemaNETClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) NETSchemaNETSessionConnectionHttpHeaderCreated *sessionConnectionHttpHeaderCreated;
@property (nonatomic) BOOL hasSessionConnectionHttpHeaderCreated;
@property (retain, nonatomic) NETSchemaNETSessionConnectionSnapshotCaptured *sessionConnectionSnapshotCaptured;
@property (nonatomic) BOOL hasSessionConnectionSnapshotCaptured;
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionSnapshotCaptured *debugSessionConnectionSnapshotCaptured;
@property (nonatomic) BOOL hasDebugSessionConnectionSnapshotCaptured;
@property (retain, nonatomic) NETSchemaNETSessionConnectionFailed *sessionConnectionFailed;
@property (nonatomic) BOOL hasSessionConnectionFailed;
@property (retain, nonatomic) NETSchemaNETPeerConnectionFailed *peerConnectionFailed;
@property (nonatomic) BOOL hasPeerConnectionFailed;
@property (retain, nonatomic) NETSchemaNETNetworkConnectionStatePreparationSnapshotCaptured *networkConnectionStatePreparationSnapshotCaptured;
@property (nonatomic) BOOL hasNetworkConnectionStatePreparationSnapshotCaptured;
@property (retain, nonatomic) NETSchemaNETDebugNetworkConnectionStatePreparationSnapshotCaptured *debugNetworkConnectionStatePreparationSnapshotCaptured;
@property (nonatomic) BOOL hasDebugNetworkConnectionStatePreparationSnapshotCaptured;
@property (retain, nonatomic) NETSchemaNETNetworkConnectionStateReadySnapshotCaptured *networkConnectionStateReadySnapshotCaptured;
@property (nonatomic) BOOL hasNetworkConnectionStateReadySnapshotCaptured;
@property (retain, nonatomic) NETSchemaNETDebugNetworkConnectionStateReadySnapshotCaptured *debugNetworkConnectionStateReadySnapshotCaptured;
@property (nonatomic) BOOL hasDebugNetworkConnectionStateReadySnapshotCaptured;
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
- (void)deleteDebugNetworkConnectionStatePreparationSnapshotCaptured;
- (void)deleteDebugNetworkConnectionStateReadySnapshotCaptured;
- (void)deleteDebugSessionConnectionSnapshotCaptured;
- (void)deleteEventMetadata;
- (void)deleteNetworkConnectionStatePreparationSnapshotCaptured;
- (void)deleteNetworkConnectionStateReadySnapshotCaptured;
- (void)deletePeerConnectionFailed;
- (void)deleteSessionConnectionFailed;
- (void)deleteSessionConnectionHttpHeaderCreated;
- (void)deleteSessionConnectionSnapshotCaptured;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
