@class NSLock, NSXPCConnection;

@interface SKServiceProxy : NSObject {
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)serviceProxy;
+ (id)inAppClientInterface;
+ (id)inAppServiceInterface;

- (id)init;
- (void).cxx_destruct;
- (id)serviceConnection;
- (id)objectProxyWithErrorHandler:(id /* block */)a0;
- (void)_serviceConnectionInvalidated;
- (id)inAppService;
- (id)inAppServiceWithErrorHandler:(id /* block */)a0;

@end
