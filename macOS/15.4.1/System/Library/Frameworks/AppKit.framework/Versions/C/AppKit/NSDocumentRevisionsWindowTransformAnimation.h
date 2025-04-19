@class CABasicAnimation, NSWindow, CAKeyframeAnimation;

@interface NSDocumentRevisionsWindowTransformAnimation : NSAnimation {
    NSWindow *_window;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetFrame;
    CABasicAnimation *_frameAnimation;
    struct CGPoint { double x; double y; } _startTranslate;
    struct CGPoint { double x; double y; } _targetTranslate;
    CABasicAnimation *_translateAnimation;
    struct CGSize { double width; double height; } _startScale;
    struct CGSize { double width; double height; } _targetScale;
    CAKeyframeAnimation *_scaleAnimation;
    struct CGSize { double width; double height; } _startSize;
    struct CGSize { double width; double height; } _targetSize;
    CABasicAnimation *_sizeAnimation;
    BOOL _hop;
    double _fadeOutDuration;
    BOOL _prefersWindowTransform;
}

@property (copy) id /* block */ completionHandler;

+ (void)resetTransformForWindow:(id)a0;

- (void).cxx_destruct;
- (id)window;
- (void)_buildWindowTransformAnimations;
- (id)_screen;
- (void)_stopAnimation:(long long)a0 withDisplayLink:(id)a1;
- (id)valueForKey:(id)a0 animation:(id)a1 progress:(double)a2;
- (id)initWithWindow:(id)a0 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 startSize:(struct CGSize { double x0; double x1; })a3 targetSize:(struct CGSize { double x0; double x1; })a4 hop:(BOOL)a5;
- (id /* block */)_createScaleFunctionForStartScale:(double)a0 endScale:(double)a1 peakScale:(double)a2;
- (void)_didStopAnimation:(BOOL)a0;
- (BOOL)_resizesWindow;
- (void)_setTimingFunctionsForAnimationCurve:(unsigned long long)a0;
- (void)_willStartAnimation;
- (double)alphaValueForProgress:(double)a0;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForProgress:(double)a0;
- (id)initWithWindow:(id)a0 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithWindow:(id)a0 startFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 hop:(BOOL)a3;
- (id)keyFramesForAnimationWithSteps:(unsigned long long)a0 evaluator:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })scaleForProgress:(double)a0;
- (void)setAnimationCurve:(unsigned long long)a0;
- (void)setCurrentProgress:(float)a0;
- (void)setPrefersWindowTransform:(BOOL)a0;
- (void)setStartFadeOutAtProgress:(double)a0;
- (struct CGSize { double x0; double x1; })sizeForProgress:(double)a0;
- (void)startAnimation;
- (struct CGPoint { double x0; double x1; })translationForProgress:(double)a0;

@end
