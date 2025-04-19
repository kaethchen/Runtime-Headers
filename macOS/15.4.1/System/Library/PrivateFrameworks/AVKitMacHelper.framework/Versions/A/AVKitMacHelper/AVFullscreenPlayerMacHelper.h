@class AVDesktopPlaybackControlsController, AVUIViewHostMacHelper, AVFullscreenTransitionConfigurationMacHelper, AVFloatingPlaybackControlsViewController, NSDictionary, AVDetachedFullscreenController, AVObservationController, AVPlaybackSpeedCollection, AVDesktopPlaybackContentContainerView, NSString, AVPlayerController, AVDesktopPlayerLayerView, AVDesktopPlayerViewContentView, AVVideoFrameVisualAnalyzer;
@protocol AVRoutePickerViewMacHelper, AVCatalystWindowProxy, AVFullscreenPlayerMacHelperDelegate;

@interface AVFullscreenPlayerMacHelper : NSObject <AVFullscreenPlayerMacHelper, AVDetachedFullscreenControllerDelegate, AVVolumeControlButtonDelegate> {
    AVObservationController *_observationController;
    AVFullscreenPlayerMacHelper *_strongSelfRetain;
}

@property (nonatomic, getter=isPresented) BOOL presented;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (retain, nonatomic) AVFullscreenTransitionConfigurationMacHelper *activeTransitionConfiguration;
@property (readonly, nonatomic) AVDetachedFullscreenController *fullscreenController;
@property (readonly, nonatomic) AVDesktopPlaybackControlsController *playbackControlsController;
@property (readonly, nonatomic) AVDesktopPlayerViewContentView *contentView;
@property (readonly, nonatomic) AVDesktopPlaybackContentContainerView *playbackContentContainerView;
@property (readonly, nonatomic) AVDesktopPlayerLayerView *playerLayerView;
@property (readonly, nonatomic) AVFloatingPlaybackControlsViewController *controlsViewController;
@property (readonly, weak, nonatomic) id<AVFullscreenPlayerMacHelperDelegate> delegate;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection;
@property (nonatomic) BOOL showsPlaybackControls;
@property (readonly, nonatomic) BOOL showingPlaybackControls;
@property (retain, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoBounds;
@property (nonatomic) BOOL requiresLinearPlayback;
@property (retain, nonatomic) AVUIViewHostMacHelper *contentOverlayViewHost;
@property (retain, nonatomic) AVVideoFrameVisualAnalyzer *videoFrameVisualAnalyzer;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property (retain, nonatomic) id<AVCatalystWindowProxy> sourceWindowProxy;
@property (nonatomic) BOOL hidesSourceWindowWhileInFullscreen;
@property (retain, nonatomic) id<AVRoutePickerViewMacHelper> routePickerViewMacHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingPlaybackContentContainerView;
+ (id)keyPathsForValuesAffectingPlayerLayerView;
+ (id)keyPathsForValuesAffectingShowingPlaybackControls;
+ (id)keyPathsForValuesAffectingVideoBounds;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)close:(id)a0;
- (void)dismiss:(id)a0;
- (void)fullscreenController:(id)a0 didEnterFullscreenWithTransitionContext:(id)a1;
- (void)fullscreenController:(id)a0 didExitFullscreenWithTransitionContext:(id)a1;
- (void)fullscreenController:(id)a0 restoreUserInterfaceForFullScreenExitWithCompletionHandler:(id /* block */)a1;
- (id)fullscreenController:(id)a0 transitionInfoForProposedTransitionType:(unsigned long long)a1;
- (void)fullscreenController:(id)a0 willEnterFullscreenWithTransitionContext:(id)a1;
- (void)fullscreenController:(id)a0 willExitFullscreenWithTransitionContext:(id)a1;
- (void)fullscreenControllerDidShowFullscreenWindow:(id)a0;
- (void)fullscreenControllerWillHideFullscreenWindow:(id)a0;
- (void)setPlaybackRateCollection:(id)a0;
- (id)volumeControlButton:(id)a0 viewContainingVolumeSlider:(id)a1;
- (void)volumeControlViewDidChangeMutedState:(id)a0;
- (void)volumeControlViewDidChangeVolume:(id)a0;
- (void)present:(id)a0;
- (void)_updateShowsSkipButtons;

@end
