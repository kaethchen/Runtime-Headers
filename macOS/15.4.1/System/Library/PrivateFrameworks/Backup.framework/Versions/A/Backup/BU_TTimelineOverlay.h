@interface BU_TTimelineOverlay : CALayer {
    void *_timelineControl;
}

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andControl:(void *)a1;

@end
