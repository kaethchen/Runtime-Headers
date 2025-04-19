@interface QCCompositionPickerGridLayer : CALayer {
    id _controller;
}

- (void)dealloc;
- (void)finalize;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)runActionForKey:(id)a0 object:(id)a1 arguments:(id)a2;
- (void)wakeup;
- (id)cellForComposition:(id)a0;
- (id)compositionAtIndex:(long long)a0;
- (long long)compositionCount;
- (long long)indexOfComposition:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 compositions:(id)a1 controller:(id)a2;
- (void)layoutStateDidChange;
- (void)selectCompositionIfNeeded;
- (void)sleep;

@end
