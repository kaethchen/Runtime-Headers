@class NSString, NSMenu;

@interface VideosUI.LibEpisodeAMPLockupModelBridge : NSObject <AMPEpisodeLockupModel> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_downloadActionHandler;
    void /* unknown type, empty encoding */ imageDownloader;
    void /* unknown type, empty encoding */ episodeMediaEntity;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ downloadViewModel;
@property (nonatomic, readonly) NSString *episodeNumber;
@property (nonatomic, readonly) NSString *episodeDescription;
@property (nonatomic, readonly) double amountWatched;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) unsigned long long playButtonState;
@property (nonatomic, readonly) SEL playPauseStopAction;
@property (nonatomic, readonly) unsigned long long downloadState;
@property (nonatomic, readonly) double downloadProgress;
@property (nonatomic, readonly) SEL downloadAction;
@property (nonatomic, readonly) BOOL isExpiringOrExpired;
@property (nonatomic, readonly) NSMenu *actionMenu;

+ (id)keyPathsForValuesAffectingDownloadProgress;
+ (id)keyPathsForValuesAffectingDownloadState;

- (id)init;
- (void).cxx_destruct;
- (void)doDownloadAction;
- (void)doPlayPauseStopAction;
- (void)requestArtworkAtSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)doRemoveDownloadsMenuAction;

@end
