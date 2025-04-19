@class PLPhotoAnalysisServiceClientSideService, NSXPCInterface;

@interface PLPhotoAnalysisServiceRemoteServiceProxy : NSObject {
    PLPhotoAnalysisServiceClientSideService *_service;
    NSXPCInterface *_remoteInterface;
    BOOL _synchronous;
    id /* block */ _errorHandler;
}

- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0 remoteInterface:(id)a1 synchronous:(BOOL)a2 errorHandler:(id /* block */)a3;

@end
