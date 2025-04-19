@interface _NSSegmentedControlPlugin : _NSSelectionBinderPlugin

- (void)addContentObject:(id)a0 isPlaceholder:(BOOL)a1 insertsNullPlaceholder:(BOOL)a2 value:(id)a3 index:(long long)a4 cellOrControl:(id)a5;
- (unsigned long long)allowedValueBindingMask;
- (void)removeAllContentObjectsInCellOrControl:(id)a0;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;
- (Class)valueClass:(id)a0 forBinding:(id)a1;

@end
