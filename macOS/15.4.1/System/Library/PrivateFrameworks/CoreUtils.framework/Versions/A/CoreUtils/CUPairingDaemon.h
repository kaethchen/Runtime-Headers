@class NSXPCListenerEndpoint, NSString, NSXPCListener, NSData, NSMutableSet, NSObject, CUHomeKitManager;
@protocol OS_dispatch_queue;

@interface CUPairingDaemon : NSObject <NSXPCListenerDelegate> {
    CUHomeKitManager *_homeKitManager;
    int _rpIdentityNotifier;
    NSData *_rpSelfIRK;
    unsigned long long _stateHandle;
    NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) BOOL testMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPairingDaemon;

- (void)dealloc;
- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)activate;
- (void)reset;
- (void)_invalidate;
- (id)_copyOrCreateWithOptions:(unsigned long long)a0 error:(int *)a1;
- (id)_copyIdentityWithOptions:(unsigned long long)a0 error:(int *)a1;
- (void)_connectionInvalidated:(id)a0;
- (id)_copyHomeKitExWithOptions:(unsigned long long)a0 error:(int *)a1;
- (id)_copyHomeKitLocalPairingIDWithOptions:(unsigned long long)a0 error:(int *)a1;
- (id)_copyHomeKitWithOptions:(unsigned long long)a0 error:(int *)a1;
- (id)_copyHomeKitWithOptionsHAP:(unsigned long long)a0 error:(int *)a1;
- (id)_copyHomeKitWithOptionsKeychain:(unsigned long long)a0 error:(int *)a1;
- (id)_copyPairedPeersWithOptions:(unsigned long long)a0 error:(int *)a1;
- (int)_deleteIdentityWithOptions:(unsigned long long)a0;
- (id)_findHomeKitExPairedPeer:(id)a0 options:(unsigned long long)a1 error:(int *)a2;
- (id)_findHomeKitPairedPeer:(id)a0 options:(unsigned long long)a1 error:(int *)a2;
- (id)_findPairedPeer:(id)a0 options:(unsigned long long)a1 error:(int *)a2;
- (void)_removeDups:(id)a0;
- (int)_removePairedPeer:(id)a0 options:(unsigned long long)a1 removeAdminAllowed:(BOOL)a2;
- (void)_rpIdentityUpdate;
- (int)_saveIdentity:(id)a0 options:(unsigned long long)a1;
- (int)_savePairedPeer:(id)a0 options:(unsigned long long)a1 removeAdminAllowed:(BOOL)a2;
- (id)copyIdentityWithOptions:(unsigned long long)a0 error:(int *)a1;
- (id)copyPairedPeersWithOptions:(unsigned long long)a0 error:(int *)a1;
- (int)deleteIdentityWithOptions:(unsigned long long)a0;
- (id)detailedDescription;
- (id)findPairedPeer:(id)a0 options:(unsigned long long)a1 error:(int *)a2;
- (void)getIdentityWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)initStandalone;
- (int)removePairedPeer:(id)a0 options:(unsigned long long)a1;
- (int)removePairedPeer:(id)a0 options:(unsigned long long)a1 removeAdminAllowed:(BOOL)a2;
- (int)savePairedPeer:(id)a0 options:(unsigned long long)a1;
- (int)savePairedPeer:(id)a0 options:(unsigned long long)a1 removeAdminAllowed:(BOOL)a2;

@end
