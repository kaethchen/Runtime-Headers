@interface OSASplitView : NSSplitView {
    BOOL _collapsed;
    double _originalPosition;
    double _minimumPosition;
}

@property BOOL collapsed;
@property double originalPosition;
@property double minimumPosition;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;

@end
