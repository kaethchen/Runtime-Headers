@class _NSGestureRecognizerTransformAnalyzer, NSArray;

@interface NSMagnificationGestureRecognizer : NSGestureRecognizer {
    struct CGPoint { double x; double y; } _location;
    struct CGPoint { double x; double y; } _translation;
    id _touchID1;
    id _touchID2;
    double _initialTouchDistance;
    _NSGestureRecognizerTransformAnalyzer *_transformAnalyzer;
    NSArray *_currentTouches;
}

@property double magnification;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (id)touches;
- (void)_appendSubclassDescription:(id)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)magnifyWithEvent:(id)a0;
- (void)setTranslation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)translateWithEvent:(id)a0;
- (struct CGPoint { double x0; double x1; })translationInView:(id)a0;

@end
