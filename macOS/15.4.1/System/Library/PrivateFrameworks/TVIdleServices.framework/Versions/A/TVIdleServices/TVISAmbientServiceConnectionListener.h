@class NSXPCListener, NSArray, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TVISAmbientServiceConnectionListener : NSObject <NSXPCListenerDelegate>

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSMutableSet *activeConnections;
@property (readonly, copy, nonatomic) NSArray *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (id)initWithServices:(id)a0;
- (void)_handleInvalidationForConnection:(id)a0;
- (id)_serviceConnectionForConnection:(id)a0;

@end
