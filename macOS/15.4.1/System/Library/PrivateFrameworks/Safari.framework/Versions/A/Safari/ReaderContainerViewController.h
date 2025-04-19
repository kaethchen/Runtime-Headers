@class NSColor, ReaderViewController, NSView, ReaderContainerView;

@interface ReaderContainerViewController : NSViewController {
    NSView *_backgroundView;
    double _amountOfContinuousReadingViewBannerThatIsVisible;
    long long _animationState;
    BOOL _deactivationIsAnimated;
}

@property (copy) id /* block */ deactivationAnimationDidFinishBlock;
@property (retain) ReaderContainerView *view;
@property (nonatomic) long long theme;
@property (readonly, getter=isAnimatingActivation) BOOL animatingActivation;
@property (readonly, getter=isAnimatingDeactivation) BOOL animatingDeactivation;
@property (retain, nonatomic) ReaderViewController *readerViewController;
@property (readonly) NSColor *backgroundColor;

+ (id)_animationWithKeyPath:(id)a0;
+ (id)_fadeAnimationWithStartingOpacity:(double)a0 endingOpacity:(double)a1;
+ (id)_moveAnimationWithStartingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 endingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (double)_currentBackgroundViewOpacity;
- (void)_didReplaceReaderViewController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameBelowTheViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_readerWKViewFrameForStartOfAnimationWhenInterruptingExistingAnimation;
- (void)_updateReaderWKViewFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 backgroundViewFromOpacity:(double)a2 toOpacity:(double)a3 animated:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)activateWithAnimation:(BOOL)a0 verticalScrollOffsetOfBrowserPage:(double)a1 completionBlock:(id /* block */)a2;
- (void)deactivateWithAnimation:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)finishAsynchronousDeactivation;

@end
