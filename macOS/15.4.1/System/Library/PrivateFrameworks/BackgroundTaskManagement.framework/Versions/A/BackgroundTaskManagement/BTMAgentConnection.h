@class NSXPCConnection;

@interface BTMAgentConnection : NSObject {
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;
+ (id)serviceName;

- (void).cxx_destruct;
- (id)connection;
- (void)addLoginItem:(id)a0 reply:(id /* block */)a1;
- (void)getLoginItemsWithTypeMask:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)removeLoginItem:(id)a0 reply:(id /* block */)a1;
- (void)getBackgroundItemsWithReply:(id /* block */)a0;
- (BOOL)importSFLLoginItemsAndDeleteWhenDone:(BOOL)a0;
- (void)openLoginItemsWithReply:(id /* block */)a0;
- (void)setUserElection:(long long)a0 forBackgroundItem:(id)a1 reply:(id /* block */)a2;
- (void)setUserElection:(long long)a0 forURL:(id)a1 reply:(id /* block */)a2;

@end
