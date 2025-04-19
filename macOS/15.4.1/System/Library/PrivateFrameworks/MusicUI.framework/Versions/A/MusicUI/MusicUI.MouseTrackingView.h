@interface MusicUI.MouseTrackingView : MusicUI.FlippedView {
    void /* unknown type, empty encoding */ onMouseEntered;
    void /* unknown type, empty encoding */ onMouseExited;
    void /* unknown type, empty encoding */ onMouseMoved;
    void /* unknown type, empty encoding */ isHovered;
    void /* unknown type, empty encoding */ lastMouseEvent;
    void /* unknown type, empty encoding */ trackingArea;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;

@end
