@class FlexCloudManager, NSMutableDictionary, NSDictionary, FlexReachability;

@interface FMSongLibrary : NSObject

@property (readonly, nonatomic) NSDictionary *options;
@property (retain, nonatomic) FlexCloudManager *cloudManager;
@property (retain, nonatomic) FlexReachability *flexReachability;
@property (nonatomic) long long networkStatus;
@property (nonatomic) BOOL contactedCloud;
@property (retain, nonatomic) NSMutableDictionary *bundledSongs;
@property (readonly, nonatomic) BOOL supportForCloud;
@property (readonly, nonatomic) BOOL networkingIsDisabled;

+ (id)sharedLibraryWithOptions:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)_setupReachability;
- (id)fetchSongWithUID:(id)a0;
- (id)fetchSongsWithOptions:(id)a0;
- (void)purgeAllLocalCachedAssetsWithIDs:(id)a0;
- (void)_createCloudManagerOfType:(long long)a0;
- (void)_loadBundledSongs;
- (void)_notifySongDownloadInProgressChanged:(BOOL)a0;
- (void)_notifySongsChanged:(id)a0;
- (void)_updateFromCloud;
- (void)cancelDownloadOfAllAssets;
- (id)fetchSongsWithOptions_photos_only:(id)a0;
- (void)networkStatusChanged:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0 withOptions:(id)a1;

@end
