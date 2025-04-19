@class NSTextField, VPPresenterView, NSView, NSString, CALayer, AVPlayerView, AVPlayer;

@interface DMTVisualPairingView : NSView

@property (readonly, nonatomic) NSTextField *PINLabel;
@property (readonly, nonatomic) NSView *textPINDisplayView;
@property (readonly, nonatomic) VPPresenterView *visualPINDisplayView;
@property (readonly, nonatomic) NSView *maskView;
@property (readonly, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) AVPlayerView *playerView;
@property (readonly, nonatomic) CALayer *maskLayer;
@property (nonatomic, getter=isStarted) BOOL started;
@property (retain, nonatomic) NSString *displayedPIN;
@property (nonatomic) long long displayMode;

- (void).cxx_destruct;
- (void)start;
- (void)layout;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)toggleDisplayMode;
- (void)videoPlayerDidFinishPlaying:(id)a0;

@end
