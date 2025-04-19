@class NSObject;
@protocol OS_os_log;

@interface PXMusicCurator : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

+ (id)_requestQueue;
+ (id)_fetchFlexMusicAssetsWithIdentifiers:(id)a0;
+ (id)_invalidPhotoAnalysisClientError;
+ (id)_requestDebugInformationForAppleMusicAsset:(id)a0 assetContainer:(id)a1 resultHandler:(id /* block */)a2;
+ (id)_requestDebugInformationForFlexMusicAsset:(id)a0 assetContainer:(id)a1 resultHandler:(id /* block */)a2;
+ (id)bestLocallyAvailableAudioAssetForAssetContainer:(id)a0;
+ (id)requestAppleMusicCurationForAssetContainer:(id)a0 recentlyUsedAdamIDs:(id)a1 resultHandler:(id /* block */)a2;
+ (id)requestAudioAssetFetchResultForAdamIDs:(id)a0 requestOptions:(id)a1 photoLibrary:(id)a2 completionHandler:(id /* block */)a3;
+ (id)requestAudioAssetIdentifierForPurchasedSongID:(id)a0 requestOptions:(id)a1 photoLibrary:(id)a2 completionHandler:(id /* block */)a3;
+ (id)requestDebugInformationForAudioAsset:(id)a0 assetContainer:(id)a1 resultHandler:(id /* block */)a2;
+ (id)requestFlexMusicCurationForAssetContainer:(id)a0 recentlyUsedFlexSongIDs:(id)a1 resultHandler:(id /* block */)a2;

@end
