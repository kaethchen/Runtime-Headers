@class FCThreadSafeMutableDictionary, NSString, NFLazy, FCAsyncOnceOperation;
@protocol FCAVAssetCacheType, FCAVAssetKeyCacheType, FCNetworkReachabilityType;

@interface FCAVAssetDownloadManager : NSObject <AVAssetDownloadDelegate> {
    id<FCAVAssetCacheType> _assetCache;
    id<FCAVAssetKeyCacheType> _keyCache;
    id<FCNetworkReachabilityType> _networkReachability;
    FCAsyncOnceOperation *_restoreBackgroundDownloadsOnce;
    NFLazy *_URLSession;
    FCThreadSafeMutableDictionary *_activeDownloadsByAssetID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 assetDownloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (id)_restoreBackgroundDownloadsWithCompletionHandler:(id /* block */)a0;

@end
