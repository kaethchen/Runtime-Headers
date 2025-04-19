@interface NSTabViewBinder : NSViewStateBinder

+ (id)bindingCategory;
+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)_selectInTabView:(id)a0 itemWithLabel:(id)a1;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_selectInTabView:(id)a0 itemAtIndex:(id)a1;
- (void)_selectInTabView:(id)a0 itemWithIdentifier:(id)a1;
- (void)_updateObject:(id)a0 observedController:(id)a1 observedKeyPath:(id)a2 context:(void *)a3;
- (id)availableBindings;
- (void)tabView:(id)a0 didSelectTabViewItem:(id)a1;
- (Class)valueClassForBinding:(id)a0;

@end
