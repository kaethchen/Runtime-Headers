@class LNAppContext, NSXPCListener, NSString, NSMutableSet;

@interface LNConnectionListener : NSObject <NSXPCListenerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableSet *clientConnections;
@property (readonly, nonatomic) LNAppContext *appContext;
@property (readonly, nonatomic) NSXPCListener *xpcListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithListener:(id)a0;
- (void)addClientConnection:(id)a0;
- (void)removeClientConnection:(id)a0;

@end
