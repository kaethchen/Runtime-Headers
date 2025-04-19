@interface MusicUI.ContainerDetailSocialProfilesView : JUCustomView {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ viewGroup;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ trackingArea;
    void /* unknown type, empty encoding */ clickGestureRecognizer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)handleMouseClickedOnViewGroup:(id)a0;

@end
