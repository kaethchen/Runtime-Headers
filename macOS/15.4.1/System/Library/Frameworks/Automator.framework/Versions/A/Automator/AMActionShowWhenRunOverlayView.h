@class NSArray, NSMutableDictionary, NSButton, NSGradient;

@interface AMActionShowWhenRunOverlayView : NSView

@property (retain, nonatomic) NSButton *button;
@property (retain, nonatomic) NSGradient *gradient;
@property (copy, nonatomic) NSArray *_constraints;
@property (retain, nonatomic) NSMutableDictionary *showWhenRunItemDictionary;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToSuperview;
- (void)_configure;
- (void)_configureForFrames:(id)a0;
- (void)_configureForViews:(id)a0;
- (void)selectedChanged:(id)a0;
- (void)updateFrames:(id)a0;

@end
