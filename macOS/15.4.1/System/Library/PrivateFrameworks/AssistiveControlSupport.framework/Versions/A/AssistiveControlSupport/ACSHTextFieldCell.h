@interface ACSHTextFieldCell : NSTextFieldCell

@property (nonatomic) unsigned long long verticalTextPlacement;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)accessibilitySubrole;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)initTextCell:(id)a0;
- (void)_updateVerticalCentering;

@end
