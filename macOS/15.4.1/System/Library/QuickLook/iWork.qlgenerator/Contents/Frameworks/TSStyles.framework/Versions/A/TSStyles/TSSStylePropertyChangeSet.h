@interface TSSStylePropertyChangeSet : TSCKSosBase

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setBoxedValue:(id)a0 forProperty:(int)a1;
- (id)changedPropertyPaths;
- (id)collectUndoForStyle:(id)a0;
- (id)collectUnset;
- (void)enumerateDefinedPropertiesWithBlock:(id /* block */)a0;
- (BOOL)isEmptyChangeSet;
- (BOOL)isEqualToChangeSet:(id)a0;
- (id)p_variationPropertyMapFromStyle:(id)a0 withPropertyMap:(id)a1;
- (id)propertyChangeFilteredByProperties:(id)a0;
- (void)setSpec:(id)a0 forProperty:(int)a1;
- (void)setUnsetSpecForProperty:(int)a0;
- (id)variationPropertyMapFromParentStyle:(id)a0;
- (id)variationPropertyMapFromStyle:(id)a0;
- (id)variationStyleFrom:(id)a0 inStylesheet:(id)a1;

@end
