@class NSXPCListenerEndpoint, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CUPairingManager : NSObject <CUPairingManagerXPCInterface> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _monitoring;
    unsigned long long _monitorOptions;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ identityCreatedHandler;
@property (copy, nonatomic) id /* block */ identityDeletedHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ pairedPeerAddedHandler;
@property (copy, nonatomic) id /* block */ pairedPeerRemovedHandler;
@property (copy, nonatomic) id /* block */ pairedPeerChangedHandler;
@property (nonatomic) BOOL targetUserSession;
@property (nonatomic) unsigned int targetUserID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;

+ (id)copySystemPairingIdentifierAndReturnError:(id *)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)pairingIdentityCreated:(id)a0 options:(unsigned long long)a1;
- (void)_deletePairingIdentityWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (int)_ensureXPCStarted;
- (void)_findPairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_getPairedPeersWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_getPairingIdentityWithOptions:(unsigned long long)a0 tryCount:(unsigned int)a1 completion:(id /* block */)a2;
- (void)_interrupted;
- (void)_removePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_savePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_showWithCompletion:(id /* block */)a0;
- (void)_startMonitoringWithOptions:(unsigned long long)a0;
- (void)deletePairingIdentityWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)findPairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)getPairedPeersWithGroupID:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)getPairedPeersWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)getPairingIdentityWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)pairedPeerAdded:(id)a0 options:(unsigned long long)a1;
- (void)pairedPeerChanged:(id)a0 options:(unsigned long long)a1;
- (void)pairedPeerRemoved:(id)a0 options:(unsigned long long)a1;
- (void)pairingIdentityDeletedWithOptions:(unsigned long long)a0;
- (void)removePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)savePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)showWithCompletion:(id /* block */)a0;
- (void)startMonitoringWithOptions:(unsigned long long)a0;
- (void)updatePairedPeersWithGroupID:(id)a0 groupInfo:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;

@end
