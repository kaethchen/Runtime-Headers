@class OKWidgetTextViewNSTextView;

@interface OKTypesetter : NSATSTypesetter

@property (nonatomic) OKWidgetTextViewNSTextView *textView;

- (void)willSetLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 baselineOffset:(double *)a3;

@end
