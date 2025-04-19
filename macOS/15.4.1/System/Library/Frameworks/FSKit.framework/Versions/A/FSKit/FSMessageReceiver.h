@class NSXPCListener, NSString, NSXPCListenerEndpoint, FSMessageReceiverDelegateWrapper;

@interface FSMessageReceiver : NSObject <NSXPCListenerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSXPCListener *listener;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) FSMessageReceiverDelegateWrapper *delegateWrapper;

+ (id)receiverWithDelegate:(id)a0;
+ (id)receiverForStandardIO:(id /* block */)a0;
+ (id)receiverWithDelegate:(id)a0 locale:(id)a1 preferredLanguages:(id)a2;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)getConnection;
- (void)didStart;
- (id)initWithDelegate:(id)a0 locale:(id)a1 preferredLanguages:(id)a2;

@end
