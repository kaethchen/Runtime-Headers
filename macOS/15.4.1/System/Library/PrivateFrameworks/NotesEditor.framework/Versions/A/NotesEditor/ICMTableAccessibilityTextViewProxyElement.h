@class ICTableAccessibilityController;

@interface ICMTableAccessibilityTextViewProxyElement : NSAccessibilityElement

@property (readonly, nonatomic) ICTableAccessibilityController *tableAXController;

- (void).cxx_destruct;
- (id)accessibilitySelectedTextRanges;
- (long long)accessibilityNumberOfCharacters;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityAttributeValue:(id)a0 forParameter:(id)a1;
- (id)accessibilityAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityParent;
- (id)accessibilityRTFForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilitySelectedTextRange;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityStyleRangeForIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;
- (BOOL)isAccessibilityElement;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })cellTextRangeInTextView;
- (id)initWithTableAccessibilityController:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeInSelectedCellFromRangeInTextView:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeInTextViewFromRangeInSelectedCell:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)tableColumnTextView;

@end
