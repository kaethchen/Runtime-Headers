@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface PXStoryPhotoKitMusicCurationProvider : NSObject <PXStoryMusicCurationProvider>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSMutableDictionary *stateQueue_cache;
@property (readonly, nonatomic) NSMutableDictionary *stateQueue_requests;
@property (retain, nonatomic) NSArray *stateQueue_recentlyUsedFlexSongIDs;
@property (retain, nonatomic) NSArray *stateQueue_recentlyUsedAppleMusicSongIDs;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSArray *recentlyUsedFlexSongIDs;
@property (retain, nonatomic) NSArray *recentlyUsedAppleMusicSongIDs;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_cachedResultForAssetContainer:(id)a0 options:(id)a1;
- (void)_handleMusicCurationResult:(id)a0 forAssetContainer:(id)a1 options:(id)a2;
- (id)_performRequestForAssetContainer:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)_removeRejectedSong:(id)a0 fromCachedResultForAssetContainer:(id)a1;
- (void)_replaceSongWithSong:(id)a0 inCachedResultForAssetContainer:(id)a1;
- (void)_saveNegativeFeedbackForSongIdentifier:(id)a0 assetContainer:(id)a1;
- (void)applyNegativeFeedbackToSong:(id)a0 forAssetContainer:(id)a1;
- (id)requestMusicCurationForAssetContainer:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)updateAudioAsset:(id)a0 forAssetContainer:(id)a1;

@end
