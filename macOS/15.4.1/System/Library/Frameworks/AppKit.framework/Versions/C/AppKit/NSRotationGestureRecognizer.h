@class _NSGestureRecognizerTransformAnalyzer, NSArray;

@interface NSRotationGestureRecognizer : NSGestureRecognizer {
    struct CGPoint { double x; double y; } _location;
    struct CGPoint { double x; double y; } _reserved1;
    id _touchID1;
    id _touchID2;
    double _initialTouchAngle;
    double _currentTouchAngle;
    double _initialTouchDistance;
    long long _currentRotationCount;
    double _lastTouchTime;
    double _velocity;
    double _previousVelocity;
    struct CGPoint { double x; double y; } _anchorSceneReferencePoint;
    _NSGestureRecognizerTransformAnalyzer *_transformAnalyzer;
    NSArray *_currentTouches;
}

@property double rotation;
@property double rotationInDegrees;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (id)touches;
- (void)_appendSubclassDescription:(id)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)rotateWithEvent:(id)a0;
- (void)setTranslation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)translateWithEvent:(id)a0;
- (struct CGPoint { double x0; double x1; })translationInView:(id)a0;

@end
