@class NSView, NSDate, NSArray, VUIStateMachine, NSString, NSWindow, VUIPostPlayContainerViewController, VUIVideosPlayable;
@protocol VUIPostPlayManagerMetadataView;

@interface VUIPostPlayManager : NSObject <CAAnimationDelegate, VUIPlaybackUpNextControllerDelegate>

@property (retain, nonatomic) VUIVideosPlayable *playable;
@property (retain, nonatomic) VUIPostPlayContainerViewController *postPlayContainerViewController;
@property (retain, nonatomic) NSView *fullscreenButton;
@property (retain, nonatomic) NSView<VUIPostPlayManagerMetadataView> *metadataView;
@property (retain, nonatomic) VUIStateMachine *stateMachine;
@property (nonatomic) struct CGSize { double width; double height; } existingWindowMinSize;
@property (retain, nonatomic) NSDate *initialPlaybackStartDate;
@property (nonatomic) unsigned long long autoPlayedVideosCount;
@property (nonatomic) struct CGSize { double width; double height; } playbackAspectRatioAtPostPlayStart;
@property (nonatomic, getter=isPostPlayActive) BOOL postPlayActive;
@property (retain, nonatomic) NSArray *trackingAreas;
@property (readonly, nonatomic) NSWindow *playbackWindow;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } playbackAspectRatio;
@property (readonly, nonatomic) BOOL isPostPlayActive;
@property (readonly, nonatomic) BOOL isAutoPlayAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_windowDidResize:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)playbackView;
- (void)_didCrossPostPlayBoundary:(id)a0;
- (void)_disablePostPlay:(BOOL)a0 completion:(id /* block */)a1;
- (void)_playbackWindowClosed:(id)a0;
- (void)_registerStateMachine;
- (void)_resetAutoPlayBingeWatchingQualifications;
- (void)_resizePlayerPiPWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)backgroundPlaybackWillBegin;
- (void)beginMonitoringPostPlayForPlayable:(id)a0 completion:(id /* block */)a1;
- (void)hostMetadataView:(id)a0;
- (void)mediaInfoDidChangeTo:(id)a0 canPlay:(BOOL)a1 wasAutoPlayed:(BOOL)a2;
- (void)playbackUpNextControllerDidUpdate;
- (void)playbackUpNextControllerReadyToBeDisplayed;
- (void)setPostPlayEnabled:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setPostPlayMode:(BOOL)a0;
- (void)userDidInteract:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })windowBounds;

@end
