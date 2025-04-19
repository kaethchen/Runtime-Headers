@class NSXPCListener, NSArray, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SYLinkContextService : NSObject <SYLinkContextServiceProtocol, NSXPCListenerDelegate, SYAddLinkContextServiceDelegate>

@property (retain, nonatomic) NSXPCListener *_listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_serviceQueue;
@property (retain, nonatomic) NSXPCConnection *_activeConnection;
@property (readonly, nonatomic) BOOL _forTesting;
@property (copy, nonatomic) NSArray *_contextsDataForTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initForTesting:(BOOL)a0;
- (void)userEditDidAddContentItemDatas:(id)a0;
- (id)_listenerEndpoint;
- (void)beginListeningToConnections;
- (oneway void)fetchLinkContextsDataForUserActivityInfo:(id)a0 completion:(id /* block */)a1;
- (oneway void)simpleMethod;
- (void)userDidRemoveContentItemDatas:(id)a0;
- (void)userWillAddLinkWithActivityData:(id)a0 completion:(id /* block */)a1;

@end
