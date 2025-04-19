@interface BSMutableIntegerSet : BSIntegerSet

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)minusSet:(id)a0;
- (void)unionSet:(id)a0;
- (BOOL)addValue:(long long)a0;
- (void)removeAllValues;
- (void)removeValue:(long long)a0;

@end
