@interface EFMutableInt64Set : EFInt64Set

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addIndex:(long long)a0;
- (void)addIndexes:(id)a0;
- (void)removeAllIndexes;
- (void)removeIndex:(long long)a0;
- (void)removeIndexes:(id)a0;
- (void)intersectIndexes:(id)a0;

@end
