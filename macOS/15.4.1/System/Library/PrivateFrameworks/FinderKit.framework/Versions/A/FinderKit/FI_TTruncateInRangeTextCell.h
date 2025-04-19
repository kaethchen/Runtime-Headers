@interface FI_TTruncateInRangeTextCell : FI_TMarginedTextCell {
    unsigned long long _customFallbackLineBreakMode;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } truncateInRange;
@property (readonly, nonatomic) BOOL hasCustomFallbackLineBreak;

- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)setCustomLineBreakFallbackMode:(unsigned long long)a0;

@end
