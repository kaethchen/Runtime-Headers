@class NSString, NSScrubberLayout;

@interface NSScrubberItemLayoutDiscreteWithLens : NSScrubberItemLayoutDiscrete <NSScrubberItemLayout>

@property struct CGSize { double width; double height; } selectionLensThreshold;
@property (retain) NSScrubberLayout *scrubberLayout;
@property (readonly) BOOL wantsTrackingPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateAttributes:(id)a0 forLensWithState:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; long long x1; long long x2; double x3; long long x4; long long x5; struct CGPoint { double x0; double x1; } x6; BOOL x7; })a1 inView:(id)a2;
- (BOOL)_wantsLensForState:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; long long x1; long long x2; double x3; long long x4; long long x5; struct CGPoint { double x0; double x1; } x6; BOOL x7; })a0;
- (id)itemLayoutAttributesForItemAtIndex:(long long)a0 withState:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; long long x1; long long x2; double x3; long long x4; long long x5; struct CGPoint { double x0; double x1; } x6; BOOL x7; })a1 inView:(id)a2;
- (id)itemLayoutAttributesForState:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; long long x1; long long x2; double x3; long long x4; long long x5; struct CGPoint { double x0; double x1; } x6; BOOL x7; })a0 inView:(id)a1;

@end
