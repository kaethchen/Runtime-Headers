@class Protocol, NSString, NSXPCConnection, CKOperationCallbackProxyEndpoint;

@interface CKDOperationCallbackProxy : NSObject <CKDOperationCallbackProxy>

@property (readonly, nonatomic) CKOperationCallbackProxyEndpoint *endpoint;
@property (readonly, nonatomic) Protocol *protocol;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (id)initWithEndpoint:(id)a0;
- (void)addBarrierBlock:(id /* block */)a0;

@end
