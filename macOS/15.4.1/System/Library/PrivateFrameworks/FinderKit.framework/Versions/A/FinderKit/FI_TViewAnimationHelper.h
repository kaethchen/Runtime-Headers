@class NSView;

@interface FI_TViewAnimationHelper : FI_TAnimationDelegate {
    struct TNSWeakPtr<NSView> { NSView *fWeakObject; } _weakView;
    BOOL _origWantsLayers;
}

@property (readonly, weak, nonatomic) NSView *view;

+ (id)animationHelperWithView:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setView:(id)a0;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)configureAnimations:(BOOL)a0;

@end
