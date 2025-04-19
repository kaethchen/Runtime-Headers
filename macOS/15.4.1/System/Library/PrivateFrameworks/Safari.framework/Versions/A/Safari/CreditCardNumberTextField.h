@interface CreditCardNumberTextField : SensitiveDetailTextField

- (BOOL)becomeFirstResponder;
- (void)textDidEndEditing:(id)a0;
- (id)_creditCardFormatter;
- (id)_obscuredStringValue;
- (id)sensitiveStringValue;
- (void)setSensitiveStringValue:(id)a0;

@end
