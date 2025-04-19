@class NSImageView, NSImage, UAOnboardingReduceMotionPlayButtonView, NSButton;

@interface UAOnboardingReduceMotionCustomViewController : NSViewController

@property (retain, nonatomic) NSImage *_oneDotImage;
@property (retain, nonatomic) NSImage *_movingDotsImage;
@property (retain, nonatomic) NSImageView *_dotImageView;
@property (retain, nonatomic) NSImageView *_movingDotsImageView;
@property (retain, nonatomic) NSImageView *_reduceMotionBackgroundView;
@property (retain, nonatomic) NSButton *_playButton;
@property (retain, nonatomic) UAOnboardingReduceMotionPlayButtonView *_playButtonView;
@property (nonatomic) BOOL shouldDisplayReduceMotionAnimation;

- (void).cxx_destruct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)_constrainView;
- (void)_playButtonPressed;
- (void)_setupDefaultAnimation;
- (void)_setupDotsForCurrentAppearance;
- (void)_setupReduceMotionAnimation;
- (void)bringClickableViewsToFrontOf:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1 shouldDisplayReduceMotionAnimation:(BOOL)a2;

@end
