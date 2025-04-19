@class NSString, BMProcess, NSDictionary;

@interface BMAccessControlPolicy : NSObject {
    BMAccessControlPolicy *_onBehalfOf;
    unsigned long long _connectionFlags;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_authorizedResources;
}

@property (readonly) BOOL allowsConnectionToSetStoreUpdateService;
@property (readonly) BOOL allowsConnectionToWriteService;
@property (readonly) BOOL allowsAccessToProxyBiomeAgentEndpoint;
@property (readonly, nonatomic) BMProcess *process;
@property (readonly, nonatomic) NSString *useCase;
@property (readonly, nonatomic) NSString *descriptionOfProcessAndUseCase;
@property (readonly) BOOL allowsAccessToSync;
@property (readonly) BOOL allowsAccessToFlexibleStorage;
@property (readonly) BOOL allowsConnectionToComputePublisherService;
@property (readonly) BOOL allowsProxyingBiomeEndpoint;
@property (readonly) BOOL allowsAccessToContextSync;

+ (BOOL)_allowsCrossUserForConnection:(id)a0 useCase:(id)a1 error:(id *)a2;
+ (BOOL)allowsConfiguringConnection:(id)a0 forUseCase:(id)a1 inDomain:(unsigned long long)a2 error:(id *)a3;
+ (id)contextSyncMapping;
+ (id)policyForProcess:(id)a0 connectionFlags:(unsigned long long)a1 onBehalfOfProcessWithAccessControlPolicy:(id)a2;
+ (id)policyForProcess:(id)a0 connectionFlags:(unsigned long long)a1 useCase:(id)a2;
+ (BOOL)process:(id)a0 canActOnBehalfOfProcess:(id)a1;
+ (void)setLegacyViewResourceMappingCallback:(id /* block */)a0;
+ (id)syncableSetIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (void)_warnAboutInternalEntitlement:(id)a0 streamIdentifier:(id)a1;
- (unsigned long long)allowedModeForStream:(id)a0;
- (BOOL)allowsAccessToAllSetsWithMode:(unsigned long long)a0;
- (BOOL)allowsAccessToBiomeAgentForUser:(unsigned int)a0;
- (BOOL)allowsAccessToClientCompute:(id)a0;
- (BOOL)allowsAccessToContextSyncStreams:(id)a0;
- (BOOL)allowsAccessToDatabase:(id)a0 withMode:(unsigned long long)a1;
- (BOOL)allowsAccessToResource:(id)a0 withMode:(unsigned long long)a1;
- (BOOL)allowsAccessToSet:(id)a0 withMode:(unsigned long long)a1;
- (BOOL)allowsAccessToSetStoreUpdateServiceForSet:(id)a0;
- (BOOL)allowsAccessToStream:(id)a0 withMode:(unsigned long long)a1;
- (BOOL)allowsAccessToSyncMergeableDeltas;
- (BOOL)allowsAccessToView:(id)a0 withMode:(unsigned long long)a1;
- (BOOL)allowsAccessToWriteServiceForStream:(id)a0 ofUser:(unsigned int)a1;
- (BOOL)allowsComputePublisherAccessToStreams:(id)a0;
- (BOOL)allowsComputeSourceAccessToStream:(id)a0;
- (BOOL)allowsConnectionToAccessServiceWithDomain:(unsigned long long)a0;
- (BOOL)allowsConnectionToComputeSourceServiceWithDomain:(unsigned long long)a0;
- (id)authorizedResources;
- (id)explicitlyAuthorizedResourcesOfType:(unsigned long long)a0 withAccessMode:(unsigned long long)a1;
- (id)initWithProcess:(id)a0 connectionFlags:(unsigned long long)a1 useCase:(id)a2;

@end
