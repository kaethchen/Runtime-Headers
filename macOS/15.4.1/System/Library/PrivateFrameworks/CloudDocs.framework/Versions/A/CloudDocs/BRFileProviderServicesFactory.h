@interface BRFileProviderServicesFactory : NSObject

+ (id)clientSideServiceSyncProxyForURL:(id)a0;
+ (void)fetchItemServiceAsyncProxyForURL:(id)a0 handler:(id /* block */)a1;
+ (id)itemServiceSyncProxyForURL:(id)a0;

@end
