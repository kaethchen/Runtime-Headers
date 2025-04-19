@class AVPlaybackSpeedCollection, NSArray, NSView, AVObservationController;
@protocol AVTouchBarPlaybackSpeedViewControllerDelegate;

@interface AVTouchBarPlaybackSpeedViewController : NSViewController {
    NSView *_playbackSpeedView;
    NSArray *_playbackSpeedButtons;
    AVObservationController *_observationController;
}

@property (weak, nonatomic) id<AVTouchBarPlaybackSpeedViewControllerDelegate> delegate;
@property (retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear;
- (id)_createPlaybackSpeedButtonsForCollection:(id)a0;
- (id)_createViewContainingPlaybackSpeedButtons:(id)a0;
- (void)_highlightButtonForCurrentPlaybackSpeed;
- (long long)_indexOfActiveSpeedForCollection:(id)a0;
- (void)_speedButtonPressed:(id)a0;
- (id)_stackViewWithButtons:(id)a0;
- (void)_updatePlaybackSpeedSelectionViewIfNeeded;

@end
