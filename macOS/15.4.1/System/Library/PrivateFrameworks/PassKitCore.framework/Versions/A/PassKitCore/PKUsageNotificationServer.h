@class NSString, NSXPCListener, NSMutableSet;

@interface PKUsageNotificationServer : NSObject <NSXPCListenerDelegate, PKUsageNotificationServerExportedInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCListener *_listener;
    NSMutableSet *_connections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)initializeUsageNotificationServer;
- (void)notifyPassUsed:(id)a0 fromSource:(long long)a1;
- (void)notifyPaymentPassUsedWithTransactionInfo:(id)a0;
- (void)serviceResumed;
- (void)serviceSuspended;

@end
