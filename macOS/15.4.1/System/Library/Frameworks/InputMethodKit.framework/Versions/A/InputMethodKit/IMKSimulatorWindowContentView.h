@class NSScrollView, NSView, IMKSimulatorPreferencesBar, NSTextView;

@interface IMKSimulatorWindowContentView : NSView

@property (retain, nonatomic) NSView *delegateView;
@property (retain, nonatomic) IMKSimulatorPreferencesBar *preferencesBar;
@property (retain, nonatomic) NSScrollView *scrollViewForTextView;
@property (retain, nonatomic) NSTextView *textView;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)updateSubviewsWithSize:(struct CGSize { double x0; double x1; })a0;

@end
