@interface SwiftUI.RenderBoxView : SwiftUI._NSGraphicsView <RBLayerDelegate> {
    void /* unknown type, empty encoding */ rendersFirstFrameAsynchronously;
}

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)RBLayer:(id)a0 draw:(id)a1;
- (id)RBLayerDefaultDevice:(id)a0;

@end
