@class NSTextField, NSView, AVPlayerLayer, AVPlayerControllerTimeResolver, AVTouchBarScrubberController, NSMutableArray;
@protocol AVTouchBarPlaybackControlsControllingInternal, AVTouchBarTrackControlling, AVTimeControlling;

@interface AVTouchBarPlaybackControlsViewController : AVTouchBarControlsViewController {
    AVTouchBarScrubberController *_touchBarScrubberController;
    NSView *_timeLineView;
    NSView *_liveStreamingView;
    NSView *_seekableLiveStreamingView;
    id _touchBarDidExitCustomizationObserver;
    NSMutableArray *_bindings;
}

@property (retain, nonatomic) AVPlayerControllerTimeResolver *intervalTimeResolver;
@property BOOL showsPlayButton;
@property (readonly, nonatomic) NSTextField *durationTextField;
@property (readonly, nonatomic) NSTextField *remainingTimeTextField;
@property (retain, nonatomic) AVPlayerLayer *thumbnailPlayerLayer;
@property (retain, nonatomic) id<AVTouchBarPlaybackControlsControllingInternal, AVTouchBarTrackControlling, AVTimeControlling> playerController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (id)_makeLiveStreamingView;
- (id)_makeSeekableLiveStreamingView;
- (void)_setUpThumbnailPlayerLayerIfNeeded;
- (void)_updateDurationAndRemainingTimeTextFieldsHiddenState;
- (void)bindObject:(id)a0 withBinding:(id)a1 toObject:(id)a2 withKeyPath:(id)a3 options:(id)a4;
- (void)controlsConfigurationDidChange;
- (id)liveStreamingView;
- (void)reloadThumbailsOrAudioWaveform;
- (void)skipBackwardButtonPressed:(id)a0;
- (id)timeLineView;
- (void)unbindAllObjects;
- (void)updateShowsPlayButton;

@end
