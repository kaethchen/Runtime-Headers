@class NSString, VUIPlayerControlsView, VUIAVPlayerView, AVPlayer;

@interface VUIBackgroundPlayerViewController : NSViewController <AVPlayerViewDelegate>

@property (retain, nonatomic) VUIAVPlayerView *playerView;
@property (retain, nonatomic) VUIPlayerControlsView *internalControlsView;
@property (weak, nonatomic) VUIPlayerControlsView *externalControlsView;
@property (nonatomic) BOOL needsDefaultControl;
@property (nonatomic) BOOL isInFullScreen;
@property (nonatomic) BOOL isMuted;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) struct CGPoint { double x; double y; } playerControlsPosition;
@property (readonly, nonatomic) VUIPlayerControlsView *controlsView;
@property (nonatomic) BOOL showsSystemPlayerControls;
@property (retain, nonatomic) NSString *videoGravity;
@property (nonatomic) BOOL showsFullScreenToggleButton;
@property (nonatomic, getter=isSwipeInteractionEnabled) BOOL swipeInteractionEnabled;
@property (nonatomic) BOOL updatesNowPlayingInfoCenter;
@property (nonatomic, setter=_setClientLegibleContentInsets:) struct NSEdgeInsets { double top; double left; double bottom; double right; } _clientLegibleContentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)playerViewDidExitFullScreen:(id)a0;
- (void)playerViewWillEnterFullScreen:(id)a0;
- (void)_updateVideoGravity:(id)a0;
- (void)configureInternalControlsView;
- (void)configurePlayerView;
- (void)fullScreenSelected:(id)a0;
- (void)hideControls:(BOOL)a0;
- (void)hideControls:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithPlayer:(id)a0 externalControlsView:(id)a1 needsDefaultControl:(BOOL)a2;
- (void)linkControlsActions:(id)a0;
- (void)muteSelected:(id)a0;
- (void)playPauseSelected:(id)a0;

@end
