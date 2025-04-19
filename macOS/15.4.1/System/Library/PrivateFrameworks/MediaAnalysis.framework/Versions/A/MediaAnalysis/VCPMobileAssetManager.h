@class NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCPMobileAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_assetQueue;
    NSObject<OS_dispatch_queue> *_retrieveAssetOnceQueue;
    NSMutableDictionary *_assetsURL;
    NSMutableSet *_assetsNotAvailable;
}

+ (id)sharedManager;
+ (id)assetVersion:(long long)a0;
+ (id)assetName:(long long)a0;
+ (long long)assetTypeForName:(id)a0;
+ (BOOL)isCaptionOTAEnabled;
+ (BOOL)isOTAFailTestEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)cloneAsset:(id)a0 to:(id)a1;
- (id)downloadMobileAssetIfNeeded:(id)a0 petWatchDog:(id /* block */)a1;
- (int)purgeAllInstalledAssets;
- (id)queryMobileAssets;
- (id)retrieveAssetLocalURL:(long long)a0;
- (id)retrieveAssetLocalURL:(id)a0 assetVersion:(id)a1 petWatchDog:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (id)retrieveAssetLocalURL:(long long)a0 petWatchDog:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (id)retrieveAssetOnce:(long long)a0 petWatchDog:(id /* block */)a1 cancelBlock:(id /* block */)a2;

@end
