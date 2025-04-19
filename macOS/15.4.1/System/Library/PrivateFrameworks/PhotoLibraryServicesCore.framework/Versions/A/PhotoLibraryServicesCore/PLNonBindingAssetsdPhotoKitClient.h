@class NSURL, PLXPCLibraryToken, NSObject;
@protocol OS_dispatch_queue, PLXPCProxyCreating;

@interface PLNonBindingAssetsdPhotoKitClient : NSObject <PLAssetsdPhotoKitChangesRequestClient> {
    NSObject<OS_dispatch_queue> *_queue;
    id<PLXPCProxyCreating> _proxyFactory;
    NSURL *_libraryURL;
    PLXPCLibraryToken *_libraryToken;
}

- (void).cxx_destruct;
- (id)clientName;
- (BOOL)sendChangesRequest:(id)a0 error:(id *)a1;
- (void)sendChangesRequest:(id)a0 reply:(id /* block */)a1;
- (id)initWithQueue:(id)a0 proxyCreating:(id)a1 libraryURL:(id)a2;

@end
