@class ImageHopAnimationController;

@interface ImageHopAnimation : NSAnimation

@property (weak) ImageHopAnimationController *animationController;

- (void).cxx_destruct;
- (void)setCurrentProgress:(float)a0;
- (struct CGPoint { double x0; double x1; })_centerPointForProgress:(double)a0;

@end
