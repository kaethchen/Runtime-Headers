@interface NSEditableBinder : NSBinder {
    struct __editableBinderFlags { unsigned char _objectSupportsEditable : 1; unsigned char _referenceBinderRequestedEditableState : 1; unsigned char _referenceBinderDidRequestEditableState : 1; unsigned char _numberOfEditableBindings : 4; unsigned char _objectSupportsEnabled : 1; unsigned char _referenceBinderRequestedEnabledState : 1; unsigned char _referenceBinderDidRequestEnabledState : 1; unsigned char _numberOfEnabledBindings : 4; unsigned char _objectSupportsHidden : 1; unsigned char _referenceBinderRequestedHiddenState : 1; unsigned char _referenceBinderDidRequestHiddenState : 1; unsigned char _numberOfHiddenBindings : 4; unsigned short _reservedEditableBinder : 11; } _editableBinderFlags;
}

+ (id)bindingCategory;
+ (id)_pluginProtocol;
+ (id)_enumeratedEditableBindings:(unsigned long long)a0;
+ (id)_enumeratedEnabledBindings:(unsigned long long)a0;
+ (id)_enumeratedHiddenBindings:(unsigned long long)a0;
+ (id)bindingsForObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)_init;
- (void)_clearDependenciesWithAllPeerBinders;
- (void)_copyDetailsFromBinder:(id)a0;
- (void)_countBindings;
- (BOOL)_editableStateWithMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0;
- (BOOL)_enabledStateWithMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0;
- (BOOL)_hiddenStateWithMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0;
- (BOOL)_isBooleanBinding:(id)a0;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (void)_requestAnyEditableState;
- (void)_requestAnyEnabledState;
- (void)_requestAnyHiddenState;
- (void)_requestEditableState:(BOOL)a0;
- (void)_requestEnabledState:(BOOL)a0;
- (void)_requestHiddenState:(BOOL)a0;
- (void)_setObject:(id)a0;
- (void)_setStatesImmediatelyInObject:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1 triggerRedisplay:(BOOL)a2;
- (void)_synchronizeWithPeerBindersInArray:(id)a0;
- (void)addBinding:(id)a0 toController:(id)a1 withKeyPath:(id)a2 valueTransformer:(id)a3 options:(id)a4;
- (id)availableBindings;
- (long long)countOfEnabledBindings;
- (BOOL)editableState;
- (BOOL)editableStateAtIndex:(unsigned long long)a0;
- (BOOL)editableStateAtIndexPath:(id)a0;
- (BOOL)enabledState;
- (BOOL)enabledStateAtIndex:(unsigned long long)a0;
- (BOOL)enabledStateAtIndexPath:(id)a0;
- (BOOL)hiddenState;
- (BOOL)hiddenStateAtIndex:(unsigned long long)a0;
- (BOOL)hiddenStateAtIndexPath:(id)a0;
- (BOOL)isBindingReadOnly:(id)a0;
- (void)removeBinding:(id)a0;
- (BOOL)shouldProcessObservations;
- (void)updateOutlineColumnDataCell:(id)a0 forDisplayAtIndexPath:(id)a1;
- (void)updateTableColumnDataCell:(id)a0 forDisplayAtIndex:(unsigned long long)a1;
- (Class)valueClassForBinding:(id)a0;

@end
