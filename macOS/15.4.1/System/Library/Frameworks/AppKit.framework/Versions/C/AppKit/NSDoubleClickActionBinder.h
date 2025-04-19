@interface NSDoubleClickActionBinder : NSActionBinder

+ (id)_enumeratedArgumentBindings:(unsigned long long)a0;
+ (id)_enumerationBinding;
+ (id)_targetBinding;
+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;

- (unsigned long long)_argumentBindingCount;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (id)_referenceBinding;
- (BOOL)_targetBindingBound;
- (BOOL)bindingRunsAlerts:(id)a0;

@end
