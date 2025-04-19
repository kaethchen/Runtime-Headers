@class NSUndoManager;

@interface ACSHView : NSView

@property (nonatomic) unsigned long long order;
@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (readonly, nonatomic) double scaleFactorToDrawAt;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)viewDidMoveToWindow;
- (BOOL)wantsUpdateLayer;
- (void)clearImageCache;
- (void)suspendTracking;
- (void)initView;
- (void)resumeTracking;
- (void)updateDepthBasedInformation;

@end
