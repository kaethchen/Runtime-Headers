@class IOKConnection, NSString, TSgPTPNetworkPort, NSPointerArray;

@interface AVBIOKPTPNetworkPort : AVBIOKPTPPort <TSgPTPNetworkPortClient> {
    TSgPTPNetworkPort *_gPTPPort;
    NSPointerArray *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientsLock;
}

@property (readonly, nonatomic) IOKConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (BOOL)deregisterAsyncCallbackError:(id *)a0;
- (void)didAnnounceTimeoutForPort:(id)a0;
- (void)didChangeASCapable:(BOOL)a0 forPort:(id)a1;
- (void)didChangeAdministrativeEnable:(BOOL)a0 forPort:(id)a1;
- (void)didSyncTimeoutForPort:(id)a0;
- (BOOL)disablePortError:(id *)a0;
- (BOOL)enablePortError:(id *)a0;
- (void)finalizeNotifications;
- (id)initWithService:(id)a0 pid:(int)a1;
- (BOOL)registerAsyncCallbackError:(id *)a0;
- (BOOL)requestRemoteMessageIntervalsWithPDelayMessageInterval:(char)a0 syncMessageInterval:(char)a1 announceMessageInterval:(char)a2 error:(id *)a3;
- (void)serviceTerminated;
- (id)propertiesForAPI;

@end
