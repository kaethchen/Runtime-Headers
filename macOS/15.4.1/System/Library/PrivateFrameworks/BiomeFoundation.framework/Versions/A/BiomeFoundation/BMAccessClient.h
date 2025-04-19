@class BMAccessAssertionCache, NSString, BMXPCConnectionWrapper, BMAccessTracker;

@interface BMAccessClient : NSObject {
    NSString *_useCase;
    BMXPCConnectionWrapper *_connectionWrapper;
    BMAccessAssertionCache *_accessAssertionCache;
    BMAccessTracker *_accessTracker;
}

- (id)init;
- (void).cxx_destruct;
- (id)requestEndpointForDomain:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_currentProcessIsSandboxed;
- (id)_newConnectionForDomain:(unsigned long long)a0;
- (id)_synchronousRemoteObjectProxyForDomain:(unsigned long long)a0 errorHandler:(id /* block */)a1;
- (id)initWithUseCase:(id)a0;
- (id)initWithUseCase:(id)a0 sandboxExtensionCache:(id)a1 accessTracker:(id)a2;
- (BOOL)removeResource:(id)a0 error:(id *)a1;
- (id)requestAccessToResource:(id)a0 mode:(unsigned long long)a1 error:(id *)a2;

@end
