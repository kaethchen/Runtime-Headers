@interface IKFilterUIView : NSView {
    void *_priv[8];
}

+ (id)viewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 filter:(id)a1;

- (void)dealloc;
- (id)filter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 filter:(id)a1;
- (id)objectController;

@end
