@class NSString, VPPresenterView, NSView, _AKDismissableView, CALayer, AVPlayerView, AVPlayer;

@interface AKProximityAuthViewController : NSViewController {
    NSString *_verificationCode;
}

@property (retain, nonatomic) VPPresenterView *visualPairingView;
@property (retain, nonatomic) AVPlayer *videoPlayer;
@property (retain, nonatomic) AVPlayerView *videoPlayerView;
@property (retain, nonatomic) NSView *visualMaskView;
@property (retain, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) _AKDismissableView *dismissView;

- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)_createMaskView;
- (void)_createDismissView;
- (void)_createPlayer;
- (void)_createVisualPairingView;
- (BOOL)_isDarkMode;
- (struct CGColor { } *)_maskBackgroundColor;
- (struct CGColor { } *)_pairingBackgroundColor;
- (unsigned int)_pairingFlags;
- (id)_pairingVideo;
- (void)_videoHasReachedEnd:(id)a0;
- (id)initWithVerificationCode:(id)a0;

@end
