@interface HumanUI.PreviewController2D_macOS : NSViewController {
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ rootLayer;
    void /* unknown type, empty encoding */ currentSkeleton2DOverlays;
    void /* unknown type, empty encoding */ previousSkeletons;
    void /* unknown type, empty encoding */ colors;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ canvasView;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (void)viewDidLayout;

@end
