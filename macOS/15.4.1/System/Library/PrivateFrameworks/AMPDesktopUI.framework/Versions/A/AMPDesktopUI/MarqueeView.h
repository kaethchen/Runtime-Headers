@class NSTimer, CAKeyframeAnimation;

@interface MarqueeView : NSView

@property (nonatomic) BOOL animating;
@property (retain, nonatomic) CAKeyframeAnimation *marqueeAnimation;
@property (nonatomic) double cachedContentFittingWidth;
@property (retain, nonatomic) NSTimer *startingScrollTimer;
@property (retain, nonatomic) NSTimer *scrollInTheGapTimer;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (id)_viewForFirstBaselineLayout;
- (id)_viewForLastBaselineLayout;
- (void)awakeFromNib;
- (id)makeBackingLayer;
- (void)prepareForInterfaceBuilder;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)finishInit;
- (void)_createMarqueeAnimationIfNeeded;
- (void)_tearDownMarqueeAnimation;
- (double)_contentFittingWidth;
- (void)scrollIsAlmostEnding:(id)a0;
- (void)scrollIsStarting:(id)a0;
- (void)setLeftMaskActive:(BOOL)a0;
- (void)setMaskWidth:(double)a0;
- (void)triggerAnimationIfNeeded;

@end
