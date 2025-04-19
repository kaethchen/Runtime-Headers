@interface HomeKitCore.XPCServer : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ homesStore;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ storeServer;
    void /* unknown type, empty encoding */ proxies;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;

@end
