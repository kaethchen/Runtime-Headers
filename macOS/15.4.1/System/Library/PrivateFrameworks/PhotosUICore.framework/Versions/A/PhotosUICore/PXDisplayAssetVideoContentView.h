@class AVAssetImageGenerator, UXView, AVPlayerItem, NSImage, UXImageView, AVPlayerView, AVPlayer;
@protocol PXDisplayAsset;

@interface PXDisplayAssetVideoContentView : PXDisplayAssetContentView {
    BOOL _wantsCurrentImageForPausedFrame;
    id _playerTimeObserver;
}

@property (readonly, nonatomic) UXView *contentContainerView;
@property (readonly, nonatomic) UXImageView *placeholderImageView;
@property (readonly, nonatomic) AVPlayerView *playerView;
@property (readonly, nonatomic) AVPlayer *player;
@property (retain, nonatomic) id<PXDisplayAsset> playerItemAsset;
@property (nonatomic) double playerItemLoadingProgress;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (nonatomic) BOOL didAutoPlay;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentTime;
@property (retain, nonatomic) NSImage *pausedImage;
@property (retain, nonatomic) AVAssetImageGenerator *currentImageGenerator;
@property (nonatomic) long long currentImageGeneration;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)contentView;
- (void)layoutSubviews;
- (void)setAsset:(id)a0;
- (void)updateContent;
- (void)setViewModel:(id)a0;
- (void)imageDidChange;
- (long long)playbackStyle;
- (void)_invalidateViewModel;
- (double)loadingProgress;
- (void)_updateIsPaused;
- (void)_updateAutoPlay;
- (void)_handlePausedImage:(id)a0 forImageGeneration:(long long)a1;
- (void)_handlePlayerItem:(id)a0 info:(id)a1 forAsset:(id)a2;
- (void)_handleProgress:(double)a0 forAsset:(id)a1;
- (void)_invalidateAutoPlay;
- (void)_invalidateIsPaused;
- (void)_invalidatePausedImage;
- (void)_invalidatePlayerItem;
- (void)_invalidateSubviewsVisibility;
- (BOOL)_isResultValidForAsset:(id)a0;
- (void)_updatePausedImage;
- (void)_updatePlayerItem;
- (void)_updatePlayerItemHighlightRanges;
- (void)_updateSubviewsVisibility;
- (void)_updateViewModel;
- (void)contentModeDidChange;
- (void)imageProgressDidChange;
- (BOOL)isDisplayingFullQualityContent;
- (void)viewModelDidChange:(unsigned long long)a0;

@end
