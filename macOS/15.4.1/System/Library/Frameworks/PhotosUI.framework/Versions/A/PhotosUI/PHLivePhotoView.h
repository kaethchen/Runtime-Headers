@class NSView, ISPlayerItem, ISLivePhotoPlayer, NSLayoutGuide, ISLivePhotoNSView, PHLivePhotoBadge, PUPhotosAssetDebugOverlayView, PHLivePhoto, NSString, NSLayoutConstraint, NSNumber;
@protocol PHLivePhotoViewDelegate;

@interface PHLivePhotoView : NSView <ISChangeObserver, PHLivePhotoBadgeDelegate, PUPhotosAssetDebugOverlayViewDelegate> {
    struct { BOOL willBeginPlaybackWithStyle; BOOL didEndPlayback; BOOL didChangeVideoPlayer; } _delegateRespondsTo;
    struct { BOOL respondsToDidEndPlayingVitality; } _delegatePrivateFlags;
    long long _currentPlaybackStyle;
}

@property (nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem;
@property (retain, nonatomic) NSLayoutGuide *_livePhotoContentFrameLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *_layoutGuideAspectRatioConstraint;
@property (nonatomic, setter=_setPlayingVitality:) BOOL _playingVitality;
@property (nonatomic, setter=_setPlaybackRequested:) BOOL _playbackRequested;
@property (nonatomic) long long videoFilterUpdateCounter;
@property (nonatomic) long long targetReadiness;
@property (readonly, nonatomic) PHLivePhotoBadge *livePhotoBadge;
@property (readonly, nonatomic) ISLivePhotoNSView *playerView;
@property (readonly, nonatomic) ISLivePhotoPlayer *player;
@property (nonatomic) BOOL showsStatusBorder;
@property (retain, nonatomic) NSView *photoView;
@property (nonatomic) struct CGPoint { double x; double y; } scaleAnchorOffset;
@property (readonly, nonatomic) long long currentPlaybackStyle;
@property (retain, nonatomic) NSNumber *overrideSRLCompensationAmount;
@property (nonatomic) long long preferredImageDynamicRange;
@property (readonly, nonatomic) PUPhotosAssetDebugOverlayView *debugOverlayView;
@property (weak, nonatomic) id<PHLivePhotoViewDelegate> delegate;
@property (retain, nonatomic) PHLivePhoto *livePhoto;
@property (nonatomic) long long contentMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (nonatomic) float audioVolume;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) NSView *livePhotoBadgeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPlayer:(id)a0;
- (void)stopPlayback;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)startPlaybackWithStyle:(long long)a0;
- (void)stopPlaybackAnimated:(BOOL)a0;
- (long long)photosAssetDebugOverlayViewEffectivePreferredImageDynamicRange:(id)a0;
- (void)_addDebugOverlayViewIfNeeded;
- (void)_updateDebugOverlayView;
- (void)photosAssetDebugOverlayView:(id)a0 didRequestPreferredImageDynamicRange:(long long)a1;
- (id)photosAssetDebugOverlayViewCurrentlyDisplayedImage:(id)a0;
- (BOOL)photosAssetDebugOverlayViewHasEffectivePreferredImageDynamicRange:(id)a0;
- (long long)photosAssetDebugOverlayViewPreferredImageDynamicRange:(id)a0;
- (void)_applySRLCompensationAmount:(id)a0 updateCount:(long long)a1;
- (void)_commonPHLivePhotoViewInitialization;
- (void)_handlePlaybackStyleChange;
- (void)_handleVideoPlayerChange;
- (void)_updateCurrentPlaybackStyle;
- (void)_updatePlayerAudioEnabled;
- (void)_updatePlayerAudioVolume;
- (void)_updatePlayerTargetReadiness;
- (void)_updatePlayerViewDynamicRange;
- (void)_updateStatusBorder;
- (void)_updateVideoFilter;
- (void)handleEvent:(id)a0 onBadgeView:(id)a1;
- (id)initWithImage:(id)a0 videoAsset:(id)a1;
- (id)initWithLivePhotoURL:(id)a0;

@end
