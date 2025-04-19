@class NSXPCListenerEndpoint;

@interface WBSHistoryConnectionProxyForTesting : WBSHistoryConnectionProxy {
    NSXPCListenerEndpoint *_listenerEndpoint;
}

- (void).cxx_destruct;
- (id)initWithListenerEndpoint:(id)a0;
- (id)_createConnection;

@end
