@interface TimeMachinePrivate.AirDiskMonitor : NSObject <NSNetServiceDelegate, NSNetServiceBrowserDelegate> {
    void /* unknown type, empty encoding */ airDiskVolumes;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ netServiceBrowser;
    void /* unknown type, empty encoding */ netServices;
}

- (id)init;
- (void).cxx_destruct;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceDidResolveAddress:(id)a0;

@end
