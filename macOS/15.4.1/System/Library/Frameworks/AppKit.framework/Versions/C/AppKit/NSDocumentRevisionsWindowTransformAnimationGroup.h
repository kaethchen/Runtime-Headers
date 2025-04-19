@class NSArray;

@interface NSDocumentRevisionsWindowTransformAnimationGroup : NSAnimation {
    NSArray *_animations;
    BOOL _resizesWindow;
}

@property (copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)_screen;
- (void)_stopAnimation:(long long)a0 withDisplayLink:(id)a1;
- (id)initWithAnimations:(id)a0;
- (void)setCurrentProgress:(float)a0;
- (void)startAnimation;

@end
