@protocol LPComponentViewHost;

@interface LPComponentView : NSView

@property (readonly, weak, nonatomic) id<LPComponentViewHost> host;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidMoveToWindow;
- (id)initWithHost:(id)a0;
- (void)componentViewDidMoveToWindow;
- (void)layoutComponentView;
- (id)layoutExclusionsForView:(id)a0;
- (BOOL)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:(id)a0;

@end
