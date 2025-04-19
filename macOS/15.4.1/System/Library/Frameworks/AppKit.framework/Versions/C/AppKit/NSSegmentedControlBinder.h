@interface NSSegmentedControlBinder : NSValueBinder

+ (id)bindingCategory;
+ (id)binderClassesSuperseded;
+ (id)bindingsForObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (id)_referenceBinding;
- (void)_updateContent;
- (id)availableBindings;

@end
