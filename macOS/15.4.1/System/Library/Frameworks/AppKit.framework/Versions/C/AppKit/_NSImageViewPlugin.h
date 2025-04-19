@interface _NSImageViewPlugin : _NSValueBinderPlugin

+ (id)_deprecatedBindings;

- (Class)_valueClass:(id)a0;
- (unsigned long long)allowedValueBindingMask;
- (BOOL)prefersEnabledOverEditable:(id)a0;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;
- (Class)valueClass:(id)a0 forBinding:(id)a1;

@end
