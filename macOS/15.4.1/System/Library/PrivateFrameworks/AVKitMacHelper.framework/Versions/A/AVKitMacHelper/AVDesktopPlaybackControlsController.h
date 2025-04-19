@class AVPlayerControlsViewController, AVPlaybackSpeedCollection, AVTouchBarControlsViewController, NSMenu, AVTrimControlsViewController;
@protocol AVVolumeControlButtonDelegate, AVTouchBarControlsViewControllerDelegate;

@interface AVDesktopPlaybackControlsController : NSObject

@property (retain, nonatomic) AVPlayerControlsViewController *activeControlsViewController;
@property (retain, nonatomic) AVPlayerControlsViewController *playbackControlsViewController;
@property (retain, nonatomic) AVTrimControlsViewController *trimControlsViewController;
@property (retain, nonatomic) AVPlayerControlsViewController *editControlsViewController;
@property (retain, nonatomic) AVTouchBarControlsViewController *touchBarControlsViewController;
@property (weak, nonatomic) id<AVVolumeControlButtonDelegate> volumeDelegate;
@property (weak, nonatomic) id<AVTouchBarControlsViewControllerDelegate> touchBarDelegate;
@property (nonatomic) unsigned long long timeDisplayStyles;
@property (nonatomic) BOOL showsDurationInsteadOfRemainingTime;
@property (nonatomic) BOOL showsFrameSteppingButtons;
@property (nonatomic) BOOL showsSkipButtons;
@property (nonatomic) BOOL showsFullScreenToggleButton;
@property (nonatomic) BOOL showsSharingServiceButton;
@property (retain, nonatomic) NSMenu *actionPopUpButtonMenu;
@property (nonatomic) BOOL controlsCanRequestBecomingFirstResponder;
@property (retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection;
@property (nonatomic) BOOL requiresLinearPlayback;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)_controlsConfigurationDidChange;

@end
