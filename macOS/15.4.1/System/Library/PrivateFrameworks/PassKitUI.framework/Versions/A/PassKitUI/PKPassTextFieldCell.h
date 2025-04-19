@class PKPass, PKPassView;

@interface PKPassTextFieldCell : NSTextFieldCell

@property (readonly) PKPass *pass;
@property (readonly) PKPassView *passView;

- (BOOL)_isEditingInView:(id)a0;
- (id)accessibilityAttributeValue:(id)a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)_passTextField;
- (id)_textAttributesWithFont:(id)a0;

@end
