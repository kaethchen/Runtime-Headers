@interface PKPaymentSetupFieldBuiltInState : PKPaymentSetupFieldPicker

- (BOOL)isBuiltIn;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)supportsAddressAutofill;

@end
