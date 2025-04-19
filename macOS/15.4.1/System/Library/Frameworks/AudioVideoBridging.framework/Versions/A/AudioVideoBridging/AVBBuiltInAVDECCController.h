@class NSString, NSMutableArray;

@interface AVBBuiltInAVDECCController : AVBATDECCController <AVB17221EntityDiscoveryDelegate, AVB17221AECPClient, AVBPTPNetworkPortClient, AVBPTPInstanceClient> {
    NSMutableArray *_availableEntities;
}

@property (nonatomic) BOOL maxTransitTimeTuningEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (Class)entityClass;
- (void)didChangeASCapable:(BOOL)a0 forPort:(id)a1;
- (id)nameForObject:(id)a0;
- (void)addAvailableEntity:(id)a0 onInterface:(id)a1;
- (id)bestAudioMatchForStreamFormat:(id)a0 inStreamFormats:(id)a1 withSamplingRate:(id)a2;
- (void)overridesForEntity:(id)a0 onInterface:(id)a1;
- (void)_changeBuiltInEntity:(id)a0 localStream:(id)a1 andRemoteStream:(id)a2 toStreamFormat:(id)a3 onInterface:(id)a4;
- (id)_entityForEntityID:(unsigned long long)a0;
- (void)addedEntity:(id)a0 onInterface:(id)a1;
- (void)addedEntityToDomain:(id)a0 onInterface:(id)a1;
- (BOOL)connectEntityWithEntityID:(unsigned long long)a0 onInterface:(id)a1;
- (void)controllerRequestToChangeEntity:(id)a0 audioUnitSamplingRate:(id)a1 onInterface:(id)a2;
- (void)controllerRequestToChangeEntity:(id)a0 clockDomainClockSource:(id)a1 onInterface:(id)a2;
- (void)controllerRequestToChangeEntity:(id)a0 controlValue:(id)a1 onInterface:(id)a2;
- (void)controllerRequestToChangeEntity:(id)a0 inputToStreamFormat:(id)a1 onInterface:(id)a2;
- (void)controllerRequestToChangeEntity:(id)a0 name:(id)a1 onInterface:(id)a2;
- (void)controllerRequestToChangeEntity:(id)a0 outputToStreamFormat:(id)a1 onInterface:(id)a2;
- (void)controllerRequestToChangeEntity:(id)a0 sensorClusterSamplingRate:(id)a1 onInterface:(id)a2;
- (void)controllerRequestToChangeEntity:(id)a0 toAssociationID:(id)a1 onInterface:(id)a2;
- (void)controllerRequestToChangeEntity:(id)a0 toConfiguration:(id)a1 onInterface:(id)a2;
- (void)controllerRequestToChangeEntity:(id)a0 toStreamFormat:(id)a1 onInterface:(id)a2;
- (void)controllerRequestToChangeEntity:(id)a0 toVideoFormat:(id)a1 onInterface:(id)a2;
- (void)controllerRequestToChangeEntity:(id)a0 videoClusterSamplingRate:(id)a1 onInterface:(id)a2;
- (void)didAddLinkLayerPort:(id)a0 onInterface:(id)a1;
- (void)didAddLocalEntity:(id)a0 on17221EntityDiscovery:(id)a1;
- (void)didChangeEntity:(id)a0 audioUnitSamplingRate:(id)a1 onInterface:(id)a2;
- (void)didChangeEntity:(id)a0 clockDomainClockSource:(id)a1 onInterface:(id)a2;
- (void)didChangeEntity:(id)a0 controlValue:(id)a1 onInterface:(id)a2;
- (void)didChangeEntity:(id)a0 name:(id)a1 onInterface:(id)a2;
- (void)didChangeEntity:(id)a0 sensorClusterSamplingRate:(id)a1 onInterface:(id)a2;
- (void)didChangeEntity:(id)a0 toAssociationID:(id)a1 onInterface:(id)a2;
- (void)didChangeEntity:(id)a0 toConfiguration:(id)a1 onInterface:(id)a2;
- (void)didChangeEntity:(id)a0 toStreamFormat:(id)a1 onInterface:(id)a2;
- (void)didChangeEntity:(id)a0 toVideoFormat:(id)a1 onInterface:(id)a2;
- (void)didChangeEntity:(id)a0 videoClusterSamplingRate:(id)a1 onInterface:(id)a2;
- (void)didEndGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1 forPTPInstance:(id)a2;
- (void)didRediscoverLocalEntity:(id)a0 on17221EntityDiscovery:(id)a1;
- (void)didRemoveLinkLayerPort:(id)a0 onInterface:(id)a1;
- (void)didRemoveLocalEntity:(id)a0 on17221EntityDiscovery:(id)a1;
- (void)didUpdateLocalEntity:(id)a0 changedProperties:(unsigned long long)a1 on17221EntityDiscovery:(id)a2;
- (BOOL)disconnectEntityWithEntityID:(unsigned long long)a0 onInterface:(id)a1;
- (BOOL)entityIsSupported:(id)a0 onInterface:(id)a1;
- (BOOL)entityShouldBeIgnored:(id)a0 onInterface:(id)a1;
- (void)removeAvailableEntity:(id)a0 onInterface:(id)a1;
- (void)removedEntity:(id)a0 onInterface:(id)a1;
- (void)removedEntityFromDomain:(id)a0 onInterface:(id)a1;
- (BOOL)respectGeneralControllerIgnoreForEntity:(id)a0;
- (BOOL)timeSyncRequired;
- (void)updatedEntity:(id)a0 onInterface:(id)a1;

@end
