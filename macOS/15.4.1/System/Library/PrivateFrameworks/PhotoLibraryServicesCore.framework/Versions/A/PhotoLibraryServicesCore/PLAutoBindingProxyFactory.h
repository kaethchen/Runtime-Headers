@class NSString, PLResult, NSURL, PLLazyObject;
@protocol PLXPCProxyCreating;

@interface PLAutoBindingProxyFactory : NSObject <PLXPCProxyCreating> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bindLock;
    PLLazyObject *_lazyBindToPhotoLibrary;
    PLResult *_cachedBindResult;
}

@property (readonly) id<PLXPCProxyCreating> proxyFactory;
@property (readonly, copy) NSURL *photoLibraryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)maxBindAttemptCount;

- (void).cxx_destruct;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_unboostingRemoteObjectProxy;
- (void)addBarrierBlock:(id /* block */)a0;
- (void)_connectionInterrupted:(id)a0;
- (id)_attemptBindToPhotoLibrary;
- (id)_bindToPhotoLibrary;
- (id)_bindToPhotoLibraryAndCacheResult;
- (id)_bindToPhotoLibraryIfNecessary;
- (BOOL)_bindToPhotoLibraryIfNecessaryWithErrorHandler:(id /* block */)a0;
- (id)_blackholeProxyForProxy:(id)a0;
- (id)_cachedBindResult;
- (BOOL)_isResultAnInterruptionError:(id)a0;
- (id)_lazilyBindToPhotoLibrary;
- (void)_updateCachedBindResult:(id)a0;
- (id)initWithProxyFactory:(id)a0 photoLibraryURL:(id)a1;

@end
