@interface NSTitleBinder : NSBinder

+ (id)bindingCategory;
+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (BOOL)isBindingReadOnly:(id)a0;
- (Class)valueClassForBinding:(id)a0;

@end
