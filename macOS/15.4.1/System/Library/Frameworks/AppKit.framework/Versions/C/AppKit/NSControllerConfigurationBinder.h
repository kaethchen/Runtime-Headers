@interface NSControllerConfigurationBinder : NSBinder {
    struct __controllerConfigurationBinderFlags { unsigned char _ignoreChanges : 1; unsigned int _reservedControllerConfigurationBinder : 31; } _controllerConfigurationBinderFlags;
}

+ (id)bindingCategory;
+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)_init;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_connectionWasBroken;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (void)_updateFilterPredicate:(id)a0;
- (void)_updateSelectionIndexPaths:(id)a0;
- (void)_updateSelectionIndexes:(id)a0;
- (void)_updateSortDescriptors:(id)a0;
- (void)controller:(id)a0 didChangeToFilterPredicate:(id)a1;
- (void)controller:(id)a0 didChangeToSelectionIndexPaths:(id)a1;
- (void)controller:(id)a0 didChangeToSelectionIndexes:(id)a1;
- (void)controller:(id)a0 didChangeToSortDescriptors:(id)a1;
- (Class)valueClassForBinding:(id)a0;

@end
