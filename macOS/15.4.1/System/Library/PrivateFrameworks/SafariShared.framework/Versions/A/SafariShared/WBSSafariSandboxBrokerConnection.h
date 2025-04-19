@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WBSSafariSandboxBrokerConnection : NSObject <WBSSafariSandboxBrokerProtocol> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_connectionWithCompletionHandler:(id /* block */)a0;
- (void)changeUserWebSearchProviderInfoTo:(id)a0 completionHandler:(id /* block */)a1;
- (void)ensureConnected:(id /* block */)a0;
- (void)relatedExtensionsForURL:(id)a0 completionHandler:(id /* block */)a1;

@end
