@class NSMutableArray, AVTrackViewController, AVTrimView, AVPlayerLayer, AVPlayerController, AVTrimControlsViewController;

@interface AVTouchBarTrimControlsViewController : AVTouchBarControlsViewController {
    NSMutableArray *_bindings;
    AVTrimControlsViewController *_weakParentTrimViewController;
}

@property (retain) AVTrimView *trimView;
@property (retain) AVTrackViewController *trackViewController;
@property (retain) AVTrimControlsViewController *strongParentTrimViewControllerForBinding;
@property (retain, nonatomic) AVPlayerLayer *touchBarThumbnailPlayerLayer;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (weak) AVTrimControlsViewController *parentTrimViewController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)_bindObject:(id)a0 withBinding:(id)a1 toObject:(id)a2 withKeyPath:(id)a3 options:(id)a4;
- (id)_makeTouchBarTrimView;
- (id)_makeTrackViewController;
- (void)_setUpBindingsIfNeeded;
- (void)_setUpTouchBarThumbnailPlayerLayerIfNeeded;
- (void)_tearDownBindingsIfNeeded;
- (void)_unbindAllObjects;

@end
