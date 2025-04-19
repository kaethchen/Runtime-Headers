@class NSString, PIPViewController, AVPictureInPictureViewController, AVObservationController, AVPlayerController;
@protocol AVPictureInPictureContentSource, AVPictureInPicturePlatformAdapterDelegate;

@interface AVPictureInPicturePlatformAdapter : NSObject <PIPSafariViewControllerDelegate, AVPictureInPictureControlsStyleAppearance>

@property (class, readonly, nonatomic, getter=isPictureInPictureSupported) BOOL pictureInPictureSupported;
@property (class, readonly, nonatomic) NSString *stopPictureInPictureButtonImageName;
@property (class, readonly, nonatomic) NSString *startPictureInPictureButtonImageName;

@property (retain, nonatomic) PIPViewController *systemPIPViewController;
@property (weak, nonatomic) id<AVPictureInPictureContentSource> source;
@property (readonly, nonatomic) AVObservationController *observationController;
@property (nonatomic) long long status;
@property (nonatomic, getter=isRoutingVideoToHostedWindow) BOOL routingVideoToHostedWindow;
@property (readonly, nonatomic, getter=isContentSourceSupported) BOOL contentSourceSupported;
@property (weak, nonatomic) id<AVPictureInPicturePlatformAdapterDelegate> delegate;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (nonatomic) BOOL allowsPictureInPicturePlayback;
@property (readonly, nonatomic, getter=isSystemPictureInPicturePossible) BOOL systemPictureInPicturePossible;
@property (nonatomic) BOOL alwaysStartsAutomaticallyWhenEnteringBackground;
@property (nonatomic) BOOL canStartAutomaticallyWhenEnteringBackground;
@property (nonatomic) BOOL canPausePlaybackWhenClosingPictureInPicture;
@property (nonatomic) BOOL requiresLinearPlayback;
@property (nonatomic) long long controlsStyle;
@property (nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled;
@property (nonatomic) BOOL managesWiredSecondScreenPlayback;
@property (copy, nonatomic) NSString *activitySessionIdentifier;
@property (nonatomic) long long backgroundPlaybackPolicy;
@property (readonly, nonatomic) BOOL canAnimatePictureInPictureTransition;
@property (readonly, nonatomic) AVPictureInPictureViewController *pictureInPictureViewController;
@property (readonly, nonatomic, getter=isAnyPictureInPictureActive) BOOL anyPictureInPictureActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0;
- (void)_updateStatus;
- (void)pipActionPause:(id)a0;
- (BOOL)pipShouldClose:(id)a0;
- (void)pipActionPlay:(id)a0;
- (void)pipActionStop:(id)a0;
- (void)pipDidClose:(id)a0;
- (void)pipWillClose:(id)a0;
- (void)_updateReplacementRectAndWindow;
- (void)_setRoutingVideoToHostedWindow:(BOOL)a0 pictureInPictureViewController:(id)a1 source:(id)a2;
- (void)_setStatusAndNotifyDelegateIfNeeded:(long long)a0;
- (void)_unsetReplacementRect;
- (void)_updateStatusUsingProposedStatus:(long long)a0;
- (void)startPictureInPicture;
- (void)stopPictureInPictureAndRestoreUserInterface:(BOOL)a0;
- (void)updateLayoutDependentBehaviors;

@end
