@class NSProgressIndicator, NSVisualEffectView;

@interface LUI2SpinnerViewController : LUI2ViewController

@property (retain) NSVisualEffectView *backgroundView;
@property BOOL drawsBackground;
@property (readonly) NSProgressIndicator *progressIndicator;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)_setupView;

@end
