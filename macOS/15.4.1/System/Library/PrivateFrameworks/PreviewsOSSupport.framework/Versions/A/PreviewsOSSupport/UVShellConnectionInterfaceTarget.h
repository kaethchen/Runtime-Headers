@class NSString;

@interface UVShellConnectionInterfaceTarget : NSObject <UVShellConnectionProtocol> {
    id /* block */ _messageHandler;
    id /* block */ _xpcEndpointHandler;
    id /* block */ _bsEndpointHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (oneway void)sendMessage:(id)a0;
- (oneway void)sendMessage:(id)a0 replyHandler:(id /* block */)a1;
- (void)_handleNullArgument:(id)a0 replyHandler:(id /* block */)a1;
- (id)initWithMessageHandler:(id /* block */)a0 xpcEndpointHandler:(id /* block */)a1 bsEndpointHandler:(id /* block */)a2;
- (oneway void)sendBSEndpoint:(id)a0 context:(id)a1 replyHandler:(id /* block */)a2;
- (oneway void)sendXPCEndpoint:(id)a0 context:(id)a1 replyHandler:(id /* block */)a2;

@end
