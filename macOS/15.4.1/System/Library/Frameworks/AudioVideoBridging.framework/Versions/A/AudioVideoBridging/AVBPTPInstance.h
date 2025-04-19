@class AVBIOKPTPInstance, NSArray, NSString, NSPointerArray;

@interface AVBPTPInstance : NSObject <AVBIOKPTPInstanceClient> {
    AVBIOKPTPInstance *_implIOKit;
    NSPointerArray *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientsLock;
}

@property (copy, nonatomic) NSArray *gptpPath;
@property (nonatomic) unsigned long long grandmasterIdentity;
@property (nonatomic) unsigned short localSyncPort;
@property (readonly, nonatomic) unsigned long long clockIdentifier;
@property (readonly, copy, nonatomic) NSArray *ports;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingPorts;
+ (id)clockNameForClockIdentifier:(unsigned long long)a0;
+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)ports;
- (BOOL)addLinkLayerPortOnInterfaceNamed:(id)a0 allocatedPortNumber:(unsigned short *)a1 error:(id *)a2;
- (BOOL)addReverseSyncOnInterfaceNamed:(id)a0 withDomainNumner:(unsigned char)a1 syncInterval:(unsigned int)a2 error:(id *)a3;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (id)portWithPortNumber:(unsigned short)a0;
- (BOOL)removeLinkLayerPortFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeReverseSyncFromInterfaceNamed:(id)a0 withDomainNumner:(unsigned char)a1 error:(id *)a2;
- (void)serviceTerminated;
- (void)_updateFromProperties:(id)a0;
- (void)beginGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1;
- (void)changedLocalPortWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1;
- (void)endGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1;
- (id)initWithImplIOKit:(id)a0;
- (void)processSync;

@end
