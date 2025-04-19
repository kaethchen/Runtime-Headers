@class _NSFullScreenMenuBarCompanionController;

@interface _NSFullScreenToolbarRevealAnimation : NSAnimation {
    _NSFullScreenMenuBarCompanionController *_controller;
    double _toolbarRevealAnimationStart;
    double _toolbarRevealAnimationTarget;
}

- (void).cxx_destruct;
- (id)initWithTarget:(double)a0 from:(double)a1 controller:(id)a2;
- (void)setCurrentProgress:(float)a0;

@end
