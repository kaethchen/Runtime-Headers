@class NSXPCListener, NSString, NSArray, NSXPCInterface, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CWFXPCListenerDelegate;

@interface CWFXPCListener : NSObject <NSXPCListenerDelegate, CWFXPCConnectionDelegate> {
    NSMutableArray *_mutableXPCConnections;
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSXPCInterface *_requestXPCInterface;
    NSXPCInterface *_eventXPCInterface;
    NSArray *_bootArgs;
}

@property (retain) id<CWFXPCListenerDelegate> delegate;
@property (readonly, nonatomic) long long serviceType;
@property (readonly, retain, nonatomic) NSXPCListener *XPCListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;
- (void)suspend;
- (id)initWithServiceType:(long long)a0;
- (void)XPCConnection:(id)a0 canceledXPCRequestsWithUUID:(id)a1;
- (void)XPCConnection:(id)a0 receivedXPCRequest:(id)a1;
- (void)XPCConnection:(id)a0 updatedRegisteredEventIDs:(id)a1;
- (id)XPCConnections;
- (BOOL)__allowXPCConnection:(id)a0 serviceType:(long long)a1;
- (id)localXPCClient;
- (id)registeredActivities;
- (id)registeredEventIDs;
- (void)sendXPCEvent:(id)a0 reply:(id /* block */)a1;

@end
