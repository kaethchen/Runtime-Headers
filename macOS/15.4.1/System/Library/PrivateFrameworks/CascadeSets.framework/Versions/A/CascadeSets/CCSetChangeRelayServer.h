@class CCSetChangeXPCNotifier, BMXPCListener;

@interface CCSetChangeRelayServer : NSObject <BMXPCListenerDelegate, CCSetChangeRelayProtocol> {
    BMXPCListener *_listener;
    CCSetChangeXPCNotifier *_setChangeNotifier;
}

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)activate;
- (id)initWithQueue:(id)a0;
- (void)notifyChangeToSet:(id)a0 completion:(id /* block */)a1;

@end
