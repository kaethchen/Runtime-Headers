@class NSDecimalNumber;

@interface _NSComboBoxPlugin : _NSSelectionBinderPlugin {
    NSDecimalNumber *_originalMinValue;
    NSDecimalNumber *_originalMaxValue;
}

- (void)dealloc;
- (Class)_valueClass:(id)a0;
- (void)addContentObject:(id)a0 isPlaceholder:(BOOL)a1 insertsNullPlaceholder:(BOOL)a2 value:(id)a3 index:(long long)a4 cellOrControl:(id)a5;
- (unsigned long long)allowedValueBindingMask;
- (BOOL)canIgnorePopulatingObject:(id)a0;
- (BOOL)canPopulateWithPlaceholders;
- (BOOL)canSupportMinAndMaxForObject:(id)a0;
- (id)initWithBinder:(id)a0 object:(id)a1;
- (BOOL)needsAction;
- (BOOL)needsDelegate;
- (id)objectMechanismsRequired;
- (BOOL)prefersEnabledOverEditable:(id)a0;
- (void)removeAllContentObjectsInCellOrControl:(id)a0;
- (void)showValue:(id)a0 inObject:(id)a1;
- (void)storeMin:(BOOL)a0 andMax:(BOOL)a1 ofObject:(id)a2;
- (BOOL)updateCellOrControl:(id)a0 forMaxValue:(id)a1;
- (BOOL)updateCellOrControl:(id)a0 forMinValue:(id)a1;

@end
