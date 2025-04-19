@interface ICTextLayoutFragment : NSTextLayoutFragment

- (double)trailingPadding;
- (double)bottomMargin;
- (id)initWithTextElement:(id)a0 range:(id)a1;
- (double)leadingPadding;
- (double)topMargin;
- (double)marginForTop:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nsRangeInTextStorage:(id)a0;

@end
