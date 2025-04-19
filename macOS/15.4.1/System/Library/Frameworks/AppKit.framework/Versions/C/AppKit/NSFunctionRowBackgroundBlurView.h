@class _NSFunctionRowBackgroundBlurViewLayer, _NSFunctionRowBackgroundBlurViewBackdropLayer;

@interface NSFunctionRowBackgroundBlurView : NSView {
    _NSFunctionRowBackgroundBlurViewLayer *_container;
    _NSFunctionRowBackgroundBlurViewBackdropLayer *_backdrop;
    double _blurRadius;
}

@property double blurRadius;

+ (id)defaultAnimationForKey:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)_animatorClass;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBackingLayer;
- (void)setLayer:(id)a0;

@end
