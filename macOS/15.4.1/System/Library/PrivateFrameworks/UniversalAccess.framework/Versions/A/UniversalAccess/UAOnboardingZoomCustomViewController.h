@class NSImageView;

@interface UAOnboardingZoomCustomViewController : NSViewController

@property (retain, nonatomic) NSImageView *_dotsImageView;
@property (retain, nonatomic) NSImageView *_keyImageView;
@property (retain, nonatomic) NSImageView *_zoomBackgroundView;
@property (retain, nonatomic) NSImageView *_mouseImageView;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_setup;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)_constrainView;
- (void)_setupScrollAnimation;
- (void)_setupZoomAnimation;
- (BOOL)_shouldShowSingleDotScroll;
- (void)setZoomBackgroundViewImage:(id)a0;

@end
