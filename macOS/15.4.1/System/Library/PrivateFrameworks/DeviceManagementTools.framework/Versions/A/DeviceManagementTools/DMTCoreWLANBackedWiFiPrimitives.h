@class CATOperationQueue, CATOperation, NSTimer, NSString;

@interface DMTCoreWLANBackedWiFiPrimitives : NSObject <DMTScanForWiFiNetworksOperationDelegate, DMTWiFiPrimitives>

@property (readonly, nonatomic) BOOL isScanning;
@property (nonatomic, getter=isJoining) BOOL joining;
@property (readonly, nonatomic) CATOperationQueue *networkOperationsQueue;
@property (retain, nonatomic) CATOperation *scanForNetworksOperation;
@property (retain, nonatomic) CATOperation *joinNetworkOperation;
@property (retain, nonatomic) NSTimer *joinNetworkTimeout;
@property (copy, nonatomic) id /* block */ joinNetworkCompletion;
@property (copy, nonatomic) id /* block */ disassociateNetworkCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL wifiInterfacesAvailable;
@property (readonly, copy, nonatomic) NSString *wifiNetworkName;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)disassociateOperationDidFinish:(id)a0;
- (void)cancelJoiningWiFi;
- (void)disassociateWiFiNetworkWithCompletion:(id /* block */)a0;
- (void)joinNetwork:(id)a0 withCredential:(id)a1;
- (void)joinOperationDidFinish:(id)a0;
- (void)joinWiFiNetworkWithCredential:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)joiningTimeoutDidFire:(id)a0;
- (BOOL)scanForWiFiNetworksOperation:(id)a0 didFindNetworks:(id)a1;
- (void)tearDownJoiningWiFi;

@end
