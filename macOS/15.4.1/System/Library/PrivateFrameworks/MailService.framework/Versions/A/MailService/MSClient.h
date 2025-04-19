@class NSXPCConnection;

@interface MSClient : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_proxy;
- (void)sendMessageWithModel:(id)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;

@end
