@interface LUI2TextField : NSTextField

@property BOOL textHitTestingEnabled;

+ (Class)cellClass;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)textView:(id)a0 menu:(id)a1 forEvent:(id)a2 atIndex:(unsigned long long)a3;
- (id)designatedFocusRingView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPlaceholderString:(id)a0;

@end
