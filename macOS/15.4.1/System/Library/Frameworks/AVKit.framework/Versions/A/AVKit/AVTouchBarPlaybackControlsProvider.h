@class NSTouchBar, NSString, AVTouchBarMediaSelectionViewController, AVTouchBarMediaSelectionButtonViewController, AVPlaybackSpeedCollection, NSPopoverTouchBarItem, AVTouchBarPlaybackControlsViewController, NSCustomTouchBarItem, AVTouchBarPlaybackSpeedViewController, AVTouchBarPlayButtonViewController, AVObservationController;
@protocol AVTouchBarPlaybackControlsControllingInternal, AVTimeControlling, AVTouchBarPlaybackControlsControlling, AVTouchBarMediaSelectionControlling, AVTouchBarTrackControlling;

@interface AVTouchBarPlaybackControlsProvider : NSResponder <AVTouchBarScrubberDelegate, AVTouchBarPlaybackSpeedViewControllerDelegate, AVPlaybackSpeedCollectionDelegate, AVTouchBarMediaSelectionViewControllerDelegate, AVTouchBarMediaSelectionButtonViewControllerDelegate, NSTouchBarDelegate, NSTouchBarProvider> {
    NSTouchBar *_touchBar;
    id<AVTouchBarPlaybackControlsControlling> _playbackControlsController;
    id<AVTouchBarMediaSelectionControlling, AVTouchBarPlaybackControlsControllingInternal, AVTouchBarTrackControlling, AVTimeControlling> _playerController;
    NSCustomTouchBarItem *_playbackControlsTouchBarItem;
    NSPopoverTouchBarItem *_compactTouchBarScrubberItem;
    AVTouchBarPlaybackControlsViewController *_touchBarPlaybackControlsViewController;
    NSPopoverTouchBarItem *_mediaSelectionButtonTouchBarItem;
    NSCustomTouchBarItem *_mediaSelectionOptionsTouchBarItem;
    AVTouchBarMediaSelectionButtonViewController *_touchBarMediaSelectionButtonViewController;
    AVTouchBarMediaSelectionViewController *_touchBarMediaSelectionViewController;
    AVObservationController *_observationController;
    NSCustomTouchBarItem *_rateOptionsTouchBarItem;
    AVTouchBarPlaybackSpeedViewController *_touchBarPlaybackSpeedViewController;
    NSPopoverTouchBarItem *_playButtonTouchBarItem;
    AVTouchBarPlayButtonViewController *_touchBarPlayButtonViewController;
    id _playbackSpeedCollectionObservationToken;
}

@property (readonly, nonatomic) AVTouchBarPlaybackControlsViewController *touchBarPlaybackControlsViewController;
@property (retain, nonatomic) id<AVTouchBarMediaSelectionControlling, AVTouchBarPlaybackControlsControllingInternal, AVTouchBarTrackControlling, AVTimeControlling> playerController;
@property (nonatomic) BOOL prefersCompactTouchBarScrubber;
@property (readonly) NSTouchBar *touchBar;
@property (retain) id<AVTouchBarPlaybackControlsControlling> playbackControlsController;
@property (retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)_playerControllerIfAVPlayerController;
- (BOOL)isTouchBarMediaSelectionButtonViewControllerLoaded;
- (BOOL)isTouchBarMediaSelectionViewControllerLoaded;
- (BOOL)isTouchBarPlaybackControlsViewControllerLoaded;
- (id)playbackRateCollection;
- (void)playbackSpeedCollection:(id)a0 selectedPlaybackSpeedDidChangeTo:(id)a1;
- (void)reloadThumbailsOrAudioWaveform;
- (void)setPlaybackRateCollection:(id)a0;
- (id)touchBarMediaSelectionButtonViewController;
- (void)touchBarMediaSelectionButtonViewControllerPresentMediaSelectionPopover:(id)a0;
- (id)touchBarMediaSelectionViewController;
- (void)touchBarMediaSelectionViewController:(id)a0 didSelectAudioTouchBarMediaSelectionOption:(id)a1;
- (void)touchBarMediaSelectionViewController:(id)a0 didSelectLegibleTouchBarMediaSelectionOption:(id)a1;
- (id)touchBarPlayButtonViewController;
- (id)touchBarPlaybackSpeedViewController;
- (void)touchBarPlaybackSpeedViewController:(id)a0 didSelectSpeed:(id)a1;
- (void)touchBarScrubber:(id)a0 presentMediaSelectionViewControllerInPopover:(id)a1;
- (void)updateTouchBarItemIdentifiersForTouchBar:(id)a0;

@end
