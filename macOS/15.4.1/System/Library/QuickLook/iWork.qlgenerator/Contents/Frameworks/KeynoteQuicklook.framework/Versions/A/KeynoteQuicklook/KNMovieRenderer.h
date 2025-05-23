@class KNSlideNode, NSString, TSDMovieInfo, TSUWeakReference, CALayer, NSObject, KNBuildRenderer;
@protocol TSKLayerMediaPlayerController, NSCopying;

@interface KNMovieRenderer : KNBuildRenderer <TSKMediaPlayerControllerDelegate, KNAmbientBuildRenderer, KNAnimationMovieHost> {
    CALayer *_videoLayer;
    double _startTime;
    double _playbackAtStartTimePauseTime;
    double _playbackAtStartTimePauseOffset;
    TSUWeakReference *_buildInRendererReference;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameInContainerView;
    id _movieStartCallbackTarget;
    SEL _movieStartCallbackSelector;
    unsigned char _hasMoviePlaybackStarted : 1;
    unsigned char _needsToSendMovieStartCallback : 1;
    unsigned char _needsToSendBuildEndCallback : 1;
    unsigned char _isObservingVideoLayerReadyForDisplay : 1;
    unsigned char _needsPlaybackAtStartTime : 1;
    unsigned char _hasPendingTogglePlayingControl : 1;
    unsigned char _pendingTogglePlayingControlStartsPlaying : 1;
    unsigned char _shouldMoviePlaybackEndOnCompletion : 1;
    unsigned char _wasMoviePlayingBeforeAnimationPause : 1;
    unsigned char _isTeardownCompletionBlockPending : 1;
}

@property (readonly, nonatomic) CALayer *offscreenVideoLayer;
@property (readonly, nonatomic) NSObject<NSCopying> *movieTimelineMovieIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) KNBuildRenderer *buildInRenderer;
@property (readonly, nonatomic) BOOL hasAmbientBuildStarted;
@property (readonly, nonatomic) BOOL shouldActionBuildsStopAnimations;
@property (readonly, nonatomic) TSDMovieInfo *movieInfo;
@property (readonly, nonatomic) KNSlideNode *movieSlideNode;
@property (readonly, nonatomic) NSObject<TSKLayerMediaPlayerController> *playerController;

+ (id)movieInfoForMovieTimelineMovieIdentifier:(id)a0;
+ (id)movieTimelineMovieIdentifierForMovieInfo:(id)a0;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stopAnimations;
- (void)animate;
- (void)p_playbackDidFailWithError:(id)a0;
- (void)playbackDidStopForPlayerController:(id)a0;
- (void)playerController:(id)a0 playbackDidFailWithError:(id)a1;
- (void)p_unschedulePlaybackAtStartTime;
- (void)pauseAnimations;
- (void)resumeAnimationsIfPausedAtTime:(double)a0;
- (BOOL)addAnimationsAtLayerTime:(double)a0;
- (void)applyMovieControl:(long long)a0;
- (void)forceRemoveAnimations;
- (id)initWithAnimatedBuild:(id)a0 info:(id)a1 buildStage:(id)a2 animatedSlideView:(id)a3;
- (void)interruptAndReset;
- (void)p_applyActionEffect:(id)a0;
- (void)p_cancelPlaybackAtStartTime;
- (struct CGImage { } *)p_copyCurrentVideoFrameImage;
- (struct CGImage { } *)p_copyCurrentVideoFrameImageUsingAVAssetImageGenerator;
- (void)p_didEndMoviePlayback;
- (void)p_didStartMoviePlayback;
- (void)p_schedulePlaybackAtStartTime;
- (void)p_setupPlayerController;
- (void)p_setupReflectionAndMaskingOnMovieTexture:(id)a0 strokeTexture:(id)a1 reflectionMaskTexture:(id)a2 frameMaskTexture:(id)a3;
- (void)p_setupVideoLayer;
- (void)p_showVideoLayer;
- (void)p_startMoviePlaybackIfNeeded;
- (void)p_startPlaybackAtStartTime;
- (void)p_teardownUpdatingTexture:(BOOL)a0;
- (void)pauseAnimationsAtTime:(double)a0;
- (void)registerForAmbientBuildStartCallback:(SEL)a0 target:(id)a1;
- (void)removeAnimationsAndFinish:(BOOL)a0;
- (void)resumeAnimationsIfPaused;
- (void)updateAnimationsForLayerTime:(double)a0;

@end
