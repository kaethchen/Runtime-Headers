@interface _NSPlaceholderTextFieldPlugin : _NSTextFieldPlugin

- (BOOL)acceptsMarker:(id)a0 binding:(id)a1 overrideWithPlaceholderIfDefined:(BOOL *)a2;
- (id)formattedValueInObject:(id)a0 errorEncountered:(BOOL *)a1 error:(id *)a2;
- (void)showValue:(id)a0 inObject:(id)a1;

@end
