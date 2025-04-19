@interface _TtCC20ExtensionKitSettings26EnablementExtensionProcessP33_97885CF84201726CF92E6A46DF89902E14UpdateListener : NSObject <NSXPCListenerDelegate, ExtensionKitSettings.ExtensionPointEnablementUpdateXPCProtocol> {
    void /* unknown type, empty encoding */ connectionLock;
    void /* unknown type, empty encoding */ updateHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listener;
    void /* unknown type, empty encoding */ _lock_connections;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)didUpdateExtensionPointGroupsSynopsis:(id)a0 response:(id /* block */)a1;

@end
