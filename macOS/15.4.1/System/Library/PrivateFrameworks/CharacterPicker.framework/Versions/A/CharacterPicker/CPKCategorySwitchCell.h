@interface CPKCategorySwitchCell : CPKBaseMatrixCell

@property (nonatomic) BOOL usingPDF;
@property double customImageOffset;

- (void)drawImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (long long)interiorBackgroundStyle;

@end
