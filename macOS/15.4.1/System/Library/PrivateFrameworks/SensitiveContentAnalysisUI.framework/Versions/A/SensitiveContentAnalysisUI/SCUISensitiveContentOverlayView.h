@protocol SCUISensitiveContentOverlayViewDelegate;

@interface SCUISensitiveContentOverlayView : NSView {
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, weak) id<SCUISensitiveContentOverlayViewDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithAnalysis:(id)a0;
- (void)configureWithAnalysis:(id)a0 scanningCGImage:(struct CGImage { } *)a1;
- (void)configureWithAnalysis:(id)a0 scanningFileURL:(id)a1;

@end
