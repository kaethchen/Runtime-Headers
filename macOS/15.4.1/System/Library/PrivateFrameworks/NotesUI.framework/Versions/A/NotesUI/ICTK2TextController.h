@interface ICTK2TextController : ICTextController

- (void)setNote:(id)a0 firstVisibleLocation:(unsigned long long)a1;
- (void)updateAttachmentsSelectionStateInTextStorage:(id)a0 forSelectedRanges:(id)a1 textView:(id)a2;
- (void)updateHighlightsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextStorage:(id)a1;

@end
