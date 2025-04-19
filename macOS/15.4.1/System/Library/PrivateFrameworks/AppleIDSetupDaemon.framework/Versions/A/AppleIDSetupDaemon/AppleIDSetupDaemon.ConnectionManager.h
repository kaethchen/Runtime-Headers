@interface AppleIDSetupDaemon.ConnectionManager : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ aisDaemonServiceListener;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
