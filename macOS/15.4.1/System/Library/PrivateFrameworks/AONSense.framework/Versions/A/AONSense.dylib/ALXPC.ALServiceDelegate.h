@interface ALXPC.ALServiceDelegate : NSObject <NSXPCListenerDelegate, ALXPC.ALXPCProtocol> {
    void /* unknown type, empty encoding */ _listener;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _dataService;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)onData:(id)a0;
- (void)onInterrupt;

@end
