@interface OnDeviceStorageInternal.MetricsInspectorScanner : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    void /* unknown type, empty encoding */ serviceBrowser;
    void /* unknown type, empty encoding */ stateLock;
    void /* unknown type, empty encoding */ foundServices;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netServiceBrowserDidStopSearch:(id)a0;
- (void)netServiceBrowser:(id)a0 didNotSearch:(id)a1;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowserWillSearch:(id)a0;
- (void)netServiceDidResolveAddress:(id)a0;

@end
