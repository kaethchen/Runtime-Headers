@interface DistributedTimersDaemon.DTTransportDaemon : SwiftNativeNSObject <HMHomeDelegate, HMHomeDelegatePrivate, HMHomeManagerDelegate, HMHomeManagerDelegatePrivate, HMMediaSystemDelegate, HMSiriEndpointProfileDelegate> {
    void /* unknown type, empty encoding */ _daemon;
    void /* unknown type, empty encoding */ _diagnosticNotification;
    void /* unknown type, empty encoding */ _environment;
    void /* unknown type, empty encoding */ _invalidateCalled;
    void /* unknown type, empty encoding */ _monitorSessionsIncoming;
    void /* unknown type, empty encoding */ _monitorSessionsOutgoing;
    void /* unknown type, empty encoding */ _monitorSessionsLocal;
    void /* unknown type, empty encoding */ _monitorTimer;
    void /* unknown type, empty encoding */ _monitorTransaction;
    void /* unknown type, empty encoding */ _multicastWait;
    void /* unknown type, empty encoding */ _statusFlags;
    void /* unknown type, empty encoding */ _statusFlagsOverride;
    void /* unknown type, empty encoding */ _stereoAccessoryID;
    void /* unknown type, empty encoding */ _transportDecoder;
    void /* unknown type, empty encoding */ _transportEncoder;
    void /* unknown type, empty encoding */ _operationQueue;
    void /* unknown type, empty encoding */ _homeKitPollDeadline;
    void /* unknown type, empty encoding */ _homeKitPollTask;
    void /* unknown type, empty encoding */ _homeKitReady;
    void /* unknown type, empty encoding */ _homeManager;
    void /* unknown type, empty encoding */ _homeMap;
    void /* unknown type, empty encoding */ _homeSiriEndpointMap;
    void /* unknown type, empty encoding */ _homeSiriEndpointsReady;
    void /* unknown type, empty encoding */ _homeTransportRegisteredMap;
}

- (id)init;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)home:(id)a0 didAddMediaSystem:(id)a1;
- (void)home:(id)a0 didRemoveMediaSystem:(id)a1;
- (void)homeManager:(id)a0 didUpdateHH2State:(BOOL)a1;
- (void)homeManager:(id)a0 didUpdateStatus:(unsigned long long)a1;
- (void)homeManagerDidUpdateDataSyncInProgress:(id)a0;
- (void)siriEndpointProfile:(id)a0 didUpdateSessionHubIdentifier:(id)a1;

@end
