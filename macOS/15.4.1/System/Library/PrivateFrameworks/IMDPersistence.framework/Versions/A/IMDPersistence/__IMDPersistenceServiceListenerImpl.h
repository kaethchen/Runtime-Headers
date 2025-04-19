@interface __IMDPersistenceServiceListenerImpl : NSObject <NSXPCListenerDelegate>

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;

@end
