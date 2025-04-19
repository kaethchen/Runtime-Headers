@interface IIDatePicker : NSDatePicker

@property BOOL usesAutoLayout;

- (id)init;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)becomeFirstResponder;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (BOOL)resignFirstResponder;
- (void)_datePickerWasSelected;

@end
