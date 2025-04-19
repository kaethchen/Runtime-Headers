@interface AXVBrailleTextView : AXVTextView

@property (nonatomic) long long textViewType;
@property (nonatomic) double baseFontSize;

- (id)init;
- (void)_updateFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
