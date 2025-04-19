@interface NSActionBinder : NSEditorBinder {
    SEL _selector;
    struct __actionBinderFlags { unsigned char _allSeparateArrayArgumentsBoundToIdenticalController : 1; unsigned int _reservedActionBinder : 31; } _actionBinderFlags;
}

+ (id)bindingCategory;
+ (id)_pluginProtocol;
+ (id)_enumeratedArgumentBindings:(unsigned long long)a0;
+ (id)_enumerationBinding;
+ (id)_targetBinding;
+ (id)bindingsForObject:(id)a0;

- (SEL)selector;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setSelector:(SEL)a0;
- (void)_init;
- (void)performAction:(id)a0;
- (BOOL)_performActionWithCommitEditing;
- (unsigned long long)_argumentBindingCount;
- (void)_connectionWasEstablished;
- (void)_copyDetailsFromBinder:(id)a0;
- (void)_executePerformAction;
- (void)_invokeSelector:(SEL)a0 withArguments:(id)a1 forBinding:(id)a2;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(BOOL)a1;
- (void)_performActionWithCommitEditing:(id)a0 didCommit:(BOOL)a1 contextInfo:(id)a2;
- (id)_referenceBinding;
- (void)_setParameter:(id)a0 forOption:(id)a1 withBindingInfo:(id)a2;
- (BOOL)_targetAndArgumentsAcceptableForMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0;
- (BOOL)_targetBindingBound;
- (BOOL)allowsNullArgumentWithBinding:(id)a0;
- (id)availableBindings;
- (BOOL)bindingRunsAlerts:(id)a0;
- (BOOL)canApplyValueTransformer:(id)a0 toBinding:(id)a1;
- (BOOL)invokesSeparatelyWithArrayObjectsWithBinding:(id)a0;
- (BOOL)isBindingReadOnly:(id)a0;
- (void)removeBinding:(id)a0;
- (BOOL)selectionSupportsEnabledState;
- (void)setAllowsNullArgument:(BOOL)a0 withBinding:(id)a1;
- (void)setInvokesSeparatelyWithArrayObjects:(BOOL)a0 withBinding:(id)a1;
- (BOOL)targetAndArgumentsAcceptable;
- (BOOL)targetAndArgumentsAcceptableAtIndex:(unsigned long long)a0;
- (BOOL)targetAndArgumentsAcceptableAtIndexPath:(id)a0;
- (void)updateOutlineColumnDataCell:(id)a0 forDisplayAtIndexPath:(id)a1;
- (void)updateTableColumnDataCell:(id)a0 forDisplayAtIndex:(unsigned long long)a1;

@end
