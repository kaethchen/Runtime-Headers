@class NSString, NSMutableDictionary;

@interface PHAssetResourceManager : NSObject <PHAssetResourceRequestDelegate> {
    _Atomic int _nextRequestID;
    unsigned long long _managerID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestsLock;
    NSMutableDictionary *_requestsLock_requestsByID;
    NSMutableDictionary *_requestsLock_supplementaryContextsByID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (id)infoForRequest:(int)a0;
- (void)_autoResolveReferencedResources:(id)a0 folderURL:(id)a1 resourceClient:(id)a2;
- (int)_nextRequestID;
- (int)_requestForAssetResource:(id)a0 loadURLOnly:(BOOL)a1 options:(id)a2 urlReceivedHandler:(id /* block */)a3 dataReceivedHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)assetResourceRequest:(id)a0 didFinishWithError:(id)a1;
- (void)cancelDataRequest:(int)a0;
- (id)consolidateAssets:(id)a0 completionHandler:(id /* block */)a1;
- (id)reconnectAssets:(id)a0 urlResolvingHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (int)requestDataForAssetResource:(id)a0 options:(id)a1 dataReceivedHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (int)requestFileURLForAssetResource:(id)a0 options:(id)a1 urlReceivedHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (int)requestWriteDataForAssetResource:(id)a0 toFile:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)retryAssetResourceRequest:(id)a0 afterFailureWithError:(id)a1;
- (void)writeDataForAssetResource:(id)a0 toFile:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;

@end
