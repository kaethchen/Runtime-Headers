@interface EFMutableOrderedDictionary : EFOrderedDictionary

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)removeObjectForKey:(id)a0;
- (void)replaceObject:(id)a0 forKey:(id)a1;
- (id)_initWithOrderedKeys:(id)a0 objectsByKey:(id)a1;
- (void)moveObjectForKey:(id)a0 toIndex:(unsigned long long)a1;
- (void)replaceObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)setOrAddObject:(id)a0 forKey:(id)a1;
- (void)setOrInsertObject:(id)a0 forKey:(id)a1 atIndex:(unsigned long long)a2;

@end
