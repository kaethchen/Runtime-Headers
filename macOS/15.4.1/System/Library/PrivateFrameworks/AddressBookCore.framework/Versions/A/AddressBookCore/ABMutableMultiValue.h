@interface ABMutableMultiValue : ABMultiValue

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_appendValue:(id)a0 withLabel:(id)a1 andIdentifier:(id)a2;
- (void)_combineWithMultiValue:(id)a0 updating:(BOOL)a1;
- (void)_createArrays;
- (id)_initWithIdentifiers:(id)a0 values:(id)a1 labels:(id)a2 primaryIdentifier:(id)a3;
- (void)_moveContentsAt:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)_removeValue:(id)a0;
- (void)_sortIdentifiersUsingComparator:(id /* block */)a0;
- (void)_sortLabelsUsing:(id)a0;
- (id)addValue:(id)a0 withLabel:(id)a1;
- (id)insertValue:(id)a0 withLabel:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)removeValueAndLabelAtIndex:(unsigned long long)a0;
- (BOOL)replaceLabelAtIndex:(unsigned long long)a0 withLabel:(id)a1;
- (BOOL)replaceValueAtIndex:(unsigned long long)a0 withValue:(id)a1;
- (BOOL)setPrimaryIdentifier:(id)a0;

@end
