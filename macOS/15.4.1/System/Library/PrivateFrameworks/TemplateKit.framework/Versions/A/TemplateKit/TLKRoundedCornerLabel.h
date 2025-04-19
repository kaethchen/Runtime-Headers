@class NSView, TLKLabel;

@interface TLKRoundedCornerLabel : TLKView

@property (retain, nonatomic) NSView *borderView;
@property (retain, nonatomic) TLKLabel *label;
@property (nonatomic) unsigned long long sizeConfiguration;

- (void).cxx_destruct;
- (void)layout;
- (BOOL)allowsVibrancy;
- (void)updateFont;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (struct CGSize { double x0; double x1; })effectiveLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (double)effectiveBaselineOffsetFromBottom;
- (id)initWithProminence:(unsigned long long)a0;
- (void)tlk_updateForAppearance:(id)a0;

@end
