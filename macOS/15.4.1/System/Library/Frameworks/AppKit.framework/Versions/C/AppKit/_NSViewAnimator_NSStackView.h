@interface _NSViewAnimator_NSStackView : _NSViewAnimator

- (void)setOrientation:(long long)a0;
- (void)setAlignment:(long long)a0;
- (void)setEdgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)stackViewTarget;
- (void)addArrangedSubview:(id)a0;
- (void)addView:(id)a0 withGravity:(long long)a1;
- (void)insertArrangedSubview:(id)a0 atIndex:(long long)a1;
- (void)insertView:(id)a0 atIndex:(unsigned long long)a1 inGravity:(long long)a2;
- (void)removeArrangedSubview:(id)a0;
- (void)removeView:(id)a0;
- (void)setCustomSpacing:(double)a0 afterView:(id)a1;
- (void)setDistribution:(long long)a0;
- (void)setSpacing:(double)a0;
- (void)setVisibilityPriority:(float)a0 forView:(id)a1;

@end
