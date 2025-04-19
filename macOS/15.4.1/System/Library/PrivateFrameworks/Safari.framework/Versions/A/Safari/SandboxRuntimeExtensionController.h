@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SandboxRuntimeExtensionController : NSObject {
    NSMutableDictionary *_cachedExtensions;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)prepareForTermination;
- (void)invalidateAllExtensionsWithCompletionHandler:(id /* block */)a0;
- (void)invalidateExtensionWithType:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)makeConnection;
- (void)requestGenericExtensionWithType:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
