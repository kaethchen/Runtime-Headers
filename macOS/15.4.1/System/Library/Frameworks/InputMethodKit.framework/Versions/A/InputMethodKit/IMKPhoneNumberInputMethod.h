@interface IMKPhoneNumberInputMethod : IMKAbstractInputMethod

+ (id)_areaCode:(id)a0;
+ (id)_centralOfficeCode:(id)a0;
+ (id)_countryCode:(id)a0;
+ (id)_lineNumber:(id)a0;

- (BOOL)handleKeyPress:(id)a0 whileInKeyboardState:(id)a1;
- (BOOL)tracksVerbatim;

@end
